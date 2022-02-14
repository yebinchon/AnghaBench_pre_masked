
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfpf_set_q_filters_tlv {scalar_t__ vf_qid; } ;
struct pf_vf_bulletin_content {int valid_bitmap; } ;
struct bnx2x_virtf {int abs_vfid; int index; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 struct pf_vf_bulletin_content* FUNC_1 (struct bnx2x*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct vfpf_set_q_filters_tlv*,int ) ;
 scalar_t__ FUNC_3 (struct bnx2x_virtf*) ;

__attribute__((used)) static int FUNC_4(struct bnx2x *VAR_3,
           struct bnx2x_virtf *VAR_4,
           struct vfpf_set_q_filters_tlv *VAR_5)
{
 struct pf_vf_bulletin_content *VAR_6 = FUNC_1(VAR_3, VAR_4->index);
 int VAR_7 = 0;


 if (VAR_6->valid_bitmap & 1 << VAR_2) {


  if (FUNC_2(VAR_5,
          VAR_1)) {
   FUNC_0("VF[%d] attempted to configure vlan but one was already set by Hypervisor. Aborting request\n",
      VAR_4->abs_vfid);
   VAR_7 = -VAR_0;
   goto response;
  }
 }


 if (VAR_5->vf_qid > FUNC_3(VAR_4)) {
  VAR_7 = -VAR_0;
  goto response;
 }

response:
 return VAR_7;
}
