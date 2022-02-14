
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct htcpld_data {int nchips; scalar_t__ chained_irq; TYPE_2__* chip; } ;
struct htcpld_core_platform_data {int num_chip; TYPE_1__* chip; } ;
struct htcpld_chip {int dummy; } ;
struct TYPE_4__ {int lock; int set_val_work; int nirqs; int irq_start; struct device* dev; scalar_t__ cache_in; int cache_out; int reset; } ;
struct TYPE_3__ {int addr; int num_irqs; int irq_base; int reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 struct htcpld_core_platform_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,int ) ;
 TYPE_2__* FUNC_3 (struct device*,int,int,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct platform_device*,int) ;
 int FUNC_5 (struct platform_device*,int) ;
 int FUNC_6 (struct platform_device*,int) ;
 int FUNC_7 (struct platform_device*,int) ;
 struct htcpld_data* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_3)
{
 struct htcpld_data *VAR_4;
 struct device *VAR_5 = &VAR_3->dev;
 struct htcpld_core_platform_data *VAR_6;
 int VAR_7;


 VAR_6 = FUNC_1(VAR_5);
 VAR_4 = FUNC_8(VAR_3);


 VAR_4->nchips = VAR_6->num_chip;
 VAR_4->chip = FUNC_3(VAR_5,
        VAR_4->nchips,
        sizeof(struct htcpld_chip),
        VAR_1);
 if (!VAR_4->chip)
  return -VAR_0;


 for (VAR_7 = 0; VAR_7 < VAR_4->nchips; VAR_7++) {
  int VAR_8;


  VAR_4->chip[VAR_7].reset = VAR_6->chip[VAR_7].reset;
  VAR_4->chip[VAR_7].cache_out = VAR_6->chip[VAR_7].reset;
  VAR_4->chip[VAR_7].cache_in = 0;
  VAR_4->chip[VAR_7].dev = VAR_5;
  VAR_4->chip[VAR_7].irq_start = VAR_6->chip[VAR_7].irq_base;
  VAR_4->chip[VAR_7].nirqs = VAR_6->chip[VAR_7].num_irqs;

  FUNC_0(&(VAR_4->chip[VAR_7].set_val_work), &VAR_2);
  FUNC_9(&(VAR_4->chip[VAR_7].lock));


  if (VAR_4->chained_irq) {
   VAR_8 = FUNC_6(VAR_3, VAR_7);
   if (VAR_8)
    continue;
  }


  VAR_8 = FUNC_5(VAR_3, VAR_7);
  if (VAR_8)
   continue;



  VAR_8 = FUNC_4(VAR_3, VAR_7);
  if (VAR_8) {

   FUNC_7(VAR_3, VAR_7);
   continue;
  }

  FUNC_2(VAR_5, "Registered chip at 0x%x\n", VAR_6->chip[VAR_7].addr);
 }

 return 0;
}
