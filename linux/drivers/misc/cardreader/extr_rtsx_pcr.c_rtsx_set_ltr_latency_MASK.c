
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtsx_pcr {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_ltr_latency ) (struct rtsx_pcr*,int ) ;} ;


 int FUNC_0 (struct rtsx_pcr*,int ) ;
 int FUNC_1 (struct rtsx_pcr*,int ) ;

int FUNC_2(struct rtsx_pcr *VAR_0, u32 VAR_1)
{
 if (VAR_0->ops->set_ltr_latency)
  return VAR_0->ops->set_ltr_latency(VAR_0, VAR_1);
 else
  return FUNC_0(VAR_0, VAR_1);
}
