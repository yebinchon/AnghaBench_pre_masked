
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int val; } ;
struct qed_ilt_client_cfg {scalar_t__ vf_total_lines; scalar_t__ pf_total_lines; scalar_t__ active; TYPE_3__ p_size; } ;
struct qed_hwfn {TYPE_2__* p_cxt_mngr; TYPE_1__* cdev; } ;
struct qed_hw_sriov_info {scalar_t__ total_vfs; scalar_t__ first_vf_in_pf; } ;
struct TYPE_5__ {struct qed_ilt_client_cfg* clients; } ;
struct TYPE_4__ {struct qed_hw_sriov_info* p_iov_info; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct qed_hwfn*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_14)
{
 struct qed_ilt_client_cfg *VAR_15;
 u32 VAR_16;


 if (VAR_14->cdev->p_iov_info) {
  struct qed_hw_sriov_info *VAR_17 = VAR_14->cdev->p_iov_info;

  FUNC_1(VAR_14,
        VAR_12,
        VAR_17->first_vf_in_pf);
  FUNC_1(VAR_14,
        VAR_13,
        VAR_17->first_vf_in_pf + VAR_17->total_vfs);
 }

 VAR_15 = &VAR_14->p_cxt_mngr->clients[VAR_0];
 VAR_16 = FUNC_2(FUNC_0(VAR_15->p_size.val) >> 10);
 if (VAR_15->active) {
  FUNC_1(VAR_14,
        VAR_3,
        VAR_16);
  FUNC_1(VAR_14,
        VAR_4,
        VAR_15->pf_total_lines);
  FUNC_1(VAR_14,
        VAR_5,
        VAR_15->vf_total_lines);
 }

 VAR_15 = &VAR_14->p_cxt_mngr->clients[VAR_1];
 VAR_16 = FUNC_2(FUNC_0(VAR_15->p_size.val) >> 10);
 if (VAR_15->active) {
  FUNC_1(VAR_14,
        VAR_6,
        VAR_16);
  FUNC_1(VAR_14,
        VAR_7,
        VAR_15->pf_total_lines);
  FUNC_1(VAR_14,
        VAR_8,
        VAR_15->vf_total_lines);
 }

 VAR_15 = &VAR_14->p_cxt_mngr->clients[VAR_2];
 VAR_16 = FUNC_2(FUNC_0(VAR_15->p_size.val) >> 10);
 if (VAR_15->active) {
  FUNC_1(VAR_14,
        VAR_9, VAR_16);
  FUNC_1(VAR_14,
        VAR_10,
        VAR_15->pf_total_lines);
  FUNC_1(VAR_14,
        VAR_11,
        VAR_15->vf_total_lines);
 }
}
