
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct htcpld_data {unsigned int nchips; scalar_t__ int_reset_gpio_lo; scalar_t__ int_reset_gpio_hi; struct htcpld_chip* chip; } ;
struct htcpld_chip {int nirqs; unsigned long cache_in; unsigned int flow_type; int irq_start; int lock; int dev; int cache_out; struct i2c_client* client; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct htcpld_data *VAR_5 = VAR_4;
 unsigned int VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 if (!VAR_5) {
  FUNC_4("htcpld is null in ISR\n");
  return VAR_0;
 }
 for (VAR_6 = 0; VAR_6 < VAR_5->nchips; VAR_6++) {
  struct htcpld_chip *VAR_9 = &VAR_5->chip[VAR_6];
  struct i2c_client *VAR_10;
  int VAR_11;
  unsigned long VAR_12, VAR_13;

  if (!VAR_9) {
   FUNC_4("chip %d is null in ISR\n", VAR_6);
   continue;
  }

  if (VAR_9->nirqs == 0)
   continue;

  VAR_10 = VAR_9->client;
  if (!VAR_10) {
   FUNC_4("client %d is null in ISR\n", VAR_6);
   continue;
  }


  VAR_11 = FUNC_3(VAR_10, VAR_9->cache_out);
  if (VAR_11 < 0) {

   FUNC_0(VAR_9->dev, "Unable to read from chip: %d\n",
     VAR_11);
   continue;
  }

  VAR_12 = (unsigned long)VAR_11;

  FUNC_5(&VAR_9->lock, VAR_7);


  VAR_13 = VAR_9->cache_in;


  VAR_9->cache_in = VAR_12;

  FUNC_6(&VAR_9->lock, VAR_7);





  for (VAR_8 = 0; VAR_8 < VAR_9->nirqs; VAR_8++) {
   unsigned VAR_14, VAR_15, VAR_16 = VAR_9->flow_type;

   VAR_3 = VAR_9->irq_start + VAR_8;



   VAR_14 = (VAR_13 >> VAR_8) & 1;
   VAR_15 = (VAR_12 >> VAR_8) & 1;

   if ((!VAR_14 && VAR_15 && (VAR_16 & VAR_2)) ||
       (VAR_14 && !VAR_15 && (VAR_16 & VAR_1))) {
    FUNC_4("fire IRQ %d\n", VAR_8);
    FUNC_1(VAR_3);
   }
  }
 }





 if (VAR_5->int_reset_gpio_hi)
  FUNC_2(VAR_5->int_reset_gpio_hi, 1);
 if (VAR_5->int_reset_gpio_lo)
  FUNC_2(VAR_5->int_reset_gpio_lo, 0);

 return VAR_0;
}
