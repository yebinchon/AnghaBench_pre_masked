
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct qed_queue_start_common_params {int dummy; } ;
struct qed_queue_cid_vf_params {int vf_legacy; int vf_qid; int vfid; } ;
struct qed_queue_cid {int dummy; } ;
struct qed_hwfn {int cdev; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct qed_hwfn*,int ,int *,int ) ;
 int FUNC_3 (struct qed_hwfn*,int ,int ) ;
 struct qed_queue_cid* FUNC_4 (struct qed_hwfn*,int ,int ,struct qed_queue_start_common_params*,int,struct qed_queue_cid_vf_params*) ;

struct qed_queue_cid *
FUNC_5(struct qed_hwfn *VAR_3,
       u16 VAR_4,
       struct qed_queue_start_common_params *VAR_5,
       bool VAR_6,
       struct qed_queue_cid_vf_params *VAR_7)
{
 struct qed_queue_cid *VAR_8;
 u8 VAR_9 = VAR_1;
 bool VAR_10 = 0;
 u32 VAR_11 = 0;





 if (VAR_7) {
  VAR_9 = VAR_7->vfid;

  if (VAR_7->vf_legacy & VAR_2) {
   VAR_10 = 1;
   VAR_11 = VAR_7->vf_qid;
  }
 }





 if (FUNC_1(VAR_3->cdev) && !VAR_10) {
  if (FUNC_2(VAR_3, VAR_0,
      &VAR_11, VAR_9)) {
   FUNC_0(VAR_3, "Failed to acquire cid\n");
   return ((void*)0);
  }
 }

 VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_11,
          VAR_5, VAR_6, VAR_7);
 if (!VAR_8 && FUNC_1(VAR_3->cdev) && !VAR_10)
  FUNC_3(VAR_3, VAR_11, VAR_9);

 return VAR_8;
}
