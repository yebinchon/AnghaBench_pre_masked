
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sdw_slave {TYPE_1__* bus; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct sdw_slave*,int ,int,int) ;

int FUNC_3(struct sdw_slave *VAR_1,
      int VAR_2, bool VAR_3, int VAR_4)
{
 u32 VAR_5;
 int VAR_6;
 u8 VAR_7 = 0;

 VAR_5 = FUNC_0(VAR_2);


 if (VAR_3) {
  VAR_7 |= VAR_4;
  VAR_7 |= VAR_0;
 } else {
  VAR_7 &= ~(VAR_4);
  VAR_7 &= ~VAR_0;
 }

 VAR_6 = FUNC_2(VAR_1, VAR_5, (VAR_4 | VAR_0), VAR_7);
 if (VAR_6 < 0)
  FUNC_1(VAR_1->bus->dev,
   "SDW_DPN_INTMASK write failed:%d\n", VAR_7);

 return VAR_6;
}
