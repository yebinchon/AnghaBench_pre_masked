
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_5__ {TYPE_1__* hw_sbs; } ;
struct TYPE_6__ {TYPE_2__ resc; } ;
struct qed_vf_iov {TYPE_3__ acquire_resp; } ;
struct qed_hwfn {struct qed_vf_iov* vf_iov_info; } ;
struct TYPE_4__ {size_t hw_sb_id; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;

u16 FUNC_1(struct qed_hwfn *VAR_0, u16 VAR_1)
{
 struct qed_vf_iov *VAR_2 = VAR_0->vf_iov_info;

 if (!VAR_2) {
  FUNC_0(VAR_0, "vf_sriov_info isn't initialized\n");
  return 0;
 }

 return VAR_2->acquire_resp.resc.hw_sbs[VAR_1].hw_sb_id;
}
