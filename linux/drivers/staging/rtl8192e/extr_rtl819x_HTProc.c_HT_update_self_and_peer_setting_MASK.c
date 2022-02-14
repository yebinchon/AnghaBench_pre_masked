
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bdHTInfoLen; scalar_t__ bdHTInfoBuf; } ;
struct rtllib_network {TYPE_1__ bssht; } ;
struct rtllib_device {struct rt_hi_throughput* pHTInfo; } ;
struct rt_hi_throughput {int CurrentOpMode; scalar_t__ bCurrentHTSupport; } ;
struct ht_info_ele {int OptMode; } ;



void FUNC_0(struct rtllib_device *VAR_0,
         struct rtllib_network *VAR_1)
{
 struct rt_hi_throughput *VAR_2 = VAR_0->pHTInfo;
 struct ht_info_ele *VAR_3 =
   (struct ht_info_ele *)VAR_1->bssht.bdHTInfoBuf;

 if (VAR_2->bCurrentHTSupport) {
  if (VAR_1->bssht.bdHTInfoLen != 0)
   VAR_2->CurrentOpMode = VAR_3->OptMode;
 }
}
