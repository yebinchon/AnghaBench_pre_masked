
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct saa7164_dev {int board; TYPE_1__* i2c_bus; } ;
typedef int eeprom ;
struct TYPE_2__ {scalar_t__ i2c_rc; } ;
 int FUNC_0 (struct saa7164_dev*,int *) ;
 scalar_t__ FUNC_1 (struct saa7164_dev*,int *,int) ;

void FUNC_2(struct saa7164_dev *VAR_0)
{
 static u8 VAR_1[256];

 if (VAR_0->i2c_bus[0].i2c_rc == 0) {
  if (FUNC_1(VAR_0, &VAR_1[0],
   sizeof(VAR_1)) < 0)
   return;
 }

 switch (VAR_0->board) {
 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
 case 132:
 case 131:
 case 130:
 case 128:
 case 129:
 case 133:
  FUNC_0(VAR_0, &VAR_1[0]);
  break;
 }
}
