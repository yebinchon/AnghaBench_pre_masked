
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ssb_chipcommon {int capabilities; TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {int chip_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (struct ssb_chipcommon*,int ) ;

void FUNC_1(struct ssb_chipcommon *VAR_5,
     u32 *VAR_6, u32 *VAR_7, u32 *VAR_8)
{
 *VAR_7 = FUNC_0(VAR_5, VAR_3);
 *VAR_6 = (VAR_5->capabilities & VAR_0);
 switch (*VAR_6) {
 case 128:
  *VAR_8 = FUNC_0(VAR_5, VAR_2);
  break;
 case 129:
  if (VAR_5->dev->bus->chip_id != 0x5365) {
   *VAR_8 = FUNC_0(VAR_5, VAR_1);
   break;
  }

 default:
  *VAR_8 = FUNC_0(VAR_5, VAR_4);
 }
}
