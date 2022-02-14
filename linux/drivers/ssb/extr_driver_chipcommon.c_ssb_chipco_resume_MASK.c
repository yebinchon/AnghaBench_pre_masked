
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_chipcommon {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ssb_chipcommon*) ;
 int FUNC_1 (struct ssb_chipcommon*,int ) ;

void FUNC_2(struct ssb_chipcommon *VAR_1)
{
 if (!VAR_1->dev)
  return;
 FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_0);
}
