
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ssb_chipcommon {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ssb_chipcommon*,int ) ;
 int FUNC_1 (struct ssb_chipcommon*,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct ssb_chipcommon *VAR_3, u32 VAR_4)
{
 int VAR_5;
 FUNC_1(VAR_3, VAR_0,
         VAR_2 | VAR_4);
 for (VAR_5 = 0; VAR_5 < 1000; VAR_5++) {
  if (!(FUNC_0(VAR_3, VAR_0) &
        VAR_1))
   return;
  FUNC_2();
 }
 FUNC_3(VAR_3->dev->dev, "SFLASH control command failed (timeout)!\n");
}
