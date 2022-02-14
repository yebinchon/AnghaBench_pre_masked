
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct at86rf230_local {TYPE_2__* spi; TYPE_1__* data; } ;
struct TYPE_4__ {int dev; int irq; } ;
struct TYPE_3__ {scalar_t__ t_sleep_cycle; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct at86rf230_local*,int ,unsigned int*) ;
 int FUNC_2 (struct at86rf230_local*,int ) ;
 int FUNC_3 (struct at86rf230_local*,int ,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct at86rf230_local *VAR_18, u8 VAR_19)
{
 int VAR_20, VAR_21, VAR_22 = VAR_1;
 unsigned int VAR_23;
 u8 VAR_24[2];

 VAR_20 = FUNC_2(VAR_18, VAR_17);
 if (VAR_20)
  return VAR_20;

 VAR_21 = FUNC_6(VAR_18->spi->irq);
 if (VAR_21 == VAR_4 ||
     VAR_21 == VAR_5)
  VAR_22 = VAR_2;

 VAR_20 = FUNC_3(VAR_18, VAR_13, VAR_22);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_18, VAR_14, 1);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_18, VAR_11, VAR_3);
 if (VAR_20)
  return VAR_20;


 VAR_20 = FUNC_3(VAR_18, VAR_12, 0);
 if (VAR_20)
  return VAR_20;

 FUNC_5(VAR_24, FUNC_0(VAR_24));
 VAR_20 = FUNC_3(VAR_18, VAR_8, VAR_24[0]);
 if (VAR_20)
  return VAR_20;
 VAR_20 = FUNC_3(VAR_18, VAR_9, VAR_24[1]);
 if (VAR_20)
  return VAR_20;


 VAR_20 = FUNC_3(VAR_18, VAR_7, 0x00);
 if (VAR_20)
  return VAR_20;


 VAR_20 = FUNC_3(VAR_18, VAR_6, 0x00);
 if (VAR_20)
  return VAR_20;

 FUNC_7(VAR_18->data->t_sleep_cycle,
       VAR_18->data->t_sleep_cycle + 100);
 VAR_20 = FUNC_3(VAR_18, VAR_16, VAR_19);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_1(VAR_18, VAR_10, &VAR_23);
 if (VAR_20)
  return VAR_20;
 if (!VAR_23) {
  FUNC_4(&VAR_18->spi->dev, "DVDD error\n");
  return -VAR_0;
 }





 return FUNC_3(VAR_18, VAR_15, 0);
}
