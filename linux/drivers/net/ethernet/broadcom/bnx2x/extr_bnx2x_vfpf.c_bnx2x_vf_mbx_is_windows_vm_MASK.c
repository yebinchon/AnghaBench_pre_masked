
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vf_os; } ;
struct TYPE_3__ {int num_mc_filters; } ;
struct vfpf_acquire_tlv {TYPE_2__ vfdev_info; TYPE_1__ resc_request; int bulletin_addr; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct bnx2x *VAR_2,
           struct vfpf_acquire_tlv *VAR_3)
{





 if (!VAR_3->bulletin_addr ||
     VAR_3->resc_request.num_mc_filters == 32 ||
     ((VAR_3->vfdev_info.vf_os & VAR_0) ==
      VAR_1))
  return 1;

 return 0;
}
