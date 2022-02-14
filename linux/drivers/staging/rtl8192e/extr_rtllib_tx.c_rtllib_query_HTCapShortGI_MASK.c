
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_device {struct rt_hi_throughput* pHTInfo; } ;
struct rt_hi_throughput {int bCurBW40MHz; scalar_t__ bCurShortGI20MHz; scalar_t__ bCurShortGI40MHz; scalar_t__ bForcedShortGI; int bEnableHT; int bCurrentHTSupport; } ;
struct cb_desc {int bUseShortGI; } ;



__attribute__((used)) static void FUNC_0(struct rtllib_device *VAR_0,
          struct cb_desc *VAR_1)
{
 struct rt_hi_throughput *VAR_2 = VAR_0->pHTInfo;

 VAR_1->bUseShortGI = 0;

 if (!VAR_2->bCurrentHTSupport || !VAR_2->bEnableHT)
  return;

 if (VAR_2->bForcedShortGI) {
  VAR_1->bUseShortGI = 1;
  return;
 }

 if ((VAR_2->bCurBW40MHz == 1) && VAR_2->bCurShortGI40MHz)
  VAR_1->bUseShortGI = 1;
 else if ((VAR_2->bCurBW40MHz == 0) && VAR_2->bCurShortGI20MHz)
  VAR_1->bUseShortGI = 1;
}
