
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_transfer {int cs_change_delay; int cs_change_delay_unit; int speed_hz; int effective_speed_hz; } ;
struct spi_message {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int,int) ;



 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static void FUNC_3(struct spi_message *VAR_0,
       struct spi_transfer *VAR_1)
{
 u32 VAR_2 = VAR_1->cs_change_delay;
 u32 VAR_3 = VAR_1->cs_change_delay_unit;
 u32 VAR_4;


 if (!VAR_2 && VAR_3 != 128)
  return;

 switch (VAR_3) {
 case 128:

  if (!VAR_2)
   VAR_2 = 10000;
  else
   VAR_2 *= 1000;
  break;
 case 130:
  break;
 case 129:



  VAR_4 = VAR_1->effective_speed_hz ?: VAR_1->speed_hz / 2;
  VAR_2 *= FUNC_0(1000000000, VAR_4);
  break;
 default:
  FUNC_2(&VAR_0->spi->dev,
        "Use of unsupported delay unit %i, using default of 10us\n",
        VAR_1->cs_change_delay_unit);
  VAR_2 = 10000;
 }

 FUNC_1(VAR_2);
}
