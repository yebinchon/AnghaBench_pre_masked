
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qed_hwfn {TYPE_3__* vf_iov_info; } ;
typedef enum BAR_ID { ____Placeholder_BAR_ID } BAR_ID ;
struct TYPE_4__ {int bar_size; } ;
struct TYPE_5__ {TYPE_1__ pfdev_info; } ;
struct TYPE_6__ {TYPE_2__ acquire_resp; } ;


 int VAR_0 ;

u32 FUNC_0(struct qed_hwfn *VAR_1, enum BAR_ID VAR_2)
{
 u32 VAR_3;


 if (VAR_2 == VAR_0)
  return 1 << 17;


 VAR_3 = VAR_1->vf_iov_info->acquire_resp.pfdev_info.bar_size;
 if (VAR_3)
  return 1 << VAR_3;
 return 0;
}
