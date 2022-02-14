
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union vfpf_tlvs {int dummy; } vfpf_tlvs ;
typedef union pfvf_tlvs {int dummy; } pfvf_tlvs ;
typedef size_t u8 ;
typedef int u32 ;
struct TYPE_7__ {int size; struct qed_bulletin_content* p_virt; void* phys; } ;
struct TYPE_6__ {void* reply_phys; union pfvf_tlvs* reply_virt; void* req_phys; union vfpf_tlvs* req_virt; } ;
struct qed_vf_info {int b_init; size_t relative_vf_id; int abs_vf_id; int opaque_fid; size_t vport_id; int num_vlan_filters; int num_mac_filters; int concrete_fid; TYPE_3__ bulletin; int state; TYPE_2__ vf_mbx; } ;
struct qed_pf_iov {struct qed_vf_info* vfs_array; void* bulletins_phys; struct qed_bulletin_content* p_bulletins; void* mbx_reply_phys_addr; union pfvf_tlvs* mbx_reply_virt_addr; void* mbx_msg_phys_addr; union vfpf_tlvs* mbx_msg_virt_addr; } ;
struct TYPE_8__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_4__ hw_info; struct qed_pf_iov* pf_iov_info; TYPE_1__* cdev; } ;
struct qed_hw_sriov_info {size_t total_vfs; int first_vf_in_pf; } ;
struct qed_bulletin_content {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_5__ {struct qed_hw_sriov_info* p_iov_info; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qed_vf_info*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,int) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_3)
{
 struct qed_hw_sriov_info *VAR_4 = VAR_3->cdev->p_iov_info;
 struct qed_pf_iov *VAR_5 = VAR_3->pf_iov_info;
 struct qed_bulletin_content *VAR_6;
 dma_addr_t VAR_7, VAR_8, VAR_9;
 union pfvf_tlvs *VAR_10;
 union vfpf_tlvs *VAR_11;
 u8 VAR_12 = 0;

 FUNC_1(VAR_5->vfs_array, 0, sizeof(VAR_5->vfs_array));

 VAR_11 = VAR_5->mbx_msg_virt_addr;
 VAR_7 = VAR_5->mbx_msg_phys_addr;
 VAR_10 = VAR_5->mbx_reply_virt_addr;
 VAR_8 = VAR_5->mbx_reply_phys_addr;
 VAR_6 = VAR_5->p_bulletins;
 VAR_9 = VAR_5->bulletins_phys;
 if (!VAR_11 || !VAR_10 || !VAR_6) {
  FUNC_0(VAR_3,
         "qed_iov_setup_vfdb called without allocating mem first\n");
  return;
 }

 for (VAR_12 = 0; VAR_12 < VAR_4->total_vfs; VAR_12++) {
  struct qed_vf_info *VAR_13 = &VAR_5->vfs_array[VAR_12];
  u32 VAR_14;

  VAR_13->vf_mbx.req_virt = VAR_11 + VAR_12;
  VAR_13->vf_mbx.req_phys = VAR_7 + VAR_12 * sizeof(union vfpf_tlvs);
  VAR_13->vf_mbx.reply_virt = VAR_10 + VAR_12;
  VAR_13->vf_mbx.reply_phys = VAR_8 + VAR_12 * sizeof(union pfvf_tlvs);

  VAR_13->state = VAR_2;
  VAR_13->b_init = 0;

  VAR_13->bulletin.phys = VAR_12 *
        sizeof(struct qed_bulletin_content) +
        VAR_9;
  VAR_13->bulletin.p_virt = VAR_6 + VAR_12;
  VAR_13->bulletin.size = sizeof(struct qed_bulletin_content);

  VAR_13->relative_vf_id = VAR_12;
  VAR_13->abs_vf_id = VAR_12 + VAR_4->first_vf_in_pf;
  VAR_14 = FUNC_2(VAR_3, VAR_13->abs_vf_id);
  VAR_13->concrete_fid = VAR_14;
  VAR_13->opaque_fid = (VAR_3->hw_info.opaque_fid & 0xff) |
     (VAR_13->abs_vf_id << 8);
  VAR_13->vport_id = VAR_12 + 1;

  VAR_13->num_mac_filters = VAR_0;
  VAR_13->num_vlan_filters = VAR_1;
 }
}
