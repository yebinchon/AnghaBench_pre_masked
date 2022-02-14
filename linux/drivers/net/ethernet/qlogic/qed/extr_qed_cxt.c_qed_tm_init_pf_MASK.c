
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int tm_iids ;
struct qed_tm_iids {int per_vf_cids; int pf_cids; int per_vf_tids; int* pf_tids; } ;
struct qed_hwfn {int rel_pf_id; TYPE_2__* cdev; struct qed_cxt_mngr* p_cxt_mngr; } ;
struct qed_cxt_mngr {int vf_count; } ;
typedef int cfg_word ;
struct TYPE_4__ {TYPE_1__* p_iov_info; } ;
struct TYPE_3__ {int first_vf_in_pf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct qed_hwfn*,int ,int) ;
 int FUNC_5 (struct qed_hwfn*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct qed_tm_iids*,int ,int) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_cxt_mngr*,struct qed_tm_iids*) ;

__attribute__((used)) static void FUNC_8(struct qed_hwfn *VAR_11)
{
 struct qed_cxt_mngr *VAR_12 = VAR_11->p_cxt_mngr;
 u32 VAR_13 = 0, VAR_14, VAR_15;
 struct qed_tm_iids VAR_16;
 u64 VAR_17;
 u8 VAR_18;

 FUNC_6(&VAR_16, 0, sizeof(VAR_16));
 FUNC_7(VAR_11, VAR_12, &VAR_16);




 for (VAR_18 = 0; VAR_18 < VAR_12->vf_count; VAR_18++) {
  VAR_17 = 0;
  FUNC_3(VAR_17, VAR_2, VAR_16.per_vf_cids);
  FUNC_3(VAR_17, VAR_4, 0);
  FUNC_3(VAR_17, VAR_3, VAR_11->rel_pf_id);
  FUNC_3(VAR_17, VAR_1, 0);
  VAR_15 = VAR_7 +
      (sizeof(VAR_17) / sizeof(u32)) *
      (VAR_11->cdev->p_iov_info->first_vf_in_pf + VAR_18);
  FUNC_5(VAR_11, VAR_15, VAR_17);
 }

 VAR_17 = 0;
 FUNC_3(VAR_17, VAR_2, VAR_16.pf_cids);
 FUNC_3(VAR_17, VAR_4, 0);
 FUNC_3(VAR_17, VAR_3, 0);
 FUNC_3(VAR_17, VAR_1, 0);

 VAR_15 = VAR_7 +
     (sizeof(VAR_17) / sizeof(u32)) *
     (FUNC_1(VAR_11->cdev) + VAR_11->rel_pf_id);
 FUNC_5(VAR_11, VAR_15, VAR_17);


 FUNC_4(VAR_11, VAR_9,
       VAR_16.pf_cids ? 0x1 : 0x0);



 VAR_14 = VAR_16.per_vf_cids;


 for (VAR_18 = 0; VAR_18 < VAR_12->vf_count; VAR_18++) {
  VAR_17 = 0;
  FUNC_3(VAR_17, VAR_2, VAR_16.per_vf_tids);
  FUNC_3(VAR_17, VAR_4, 0);
  FUNC_3(VAR_17, VAR_3, VAR_11->rel_pf_id);
  FUNC_3(VAR_17, VAR_5, VAR_14);
  FUNC_3(VAR_17, VAR_6, (u64) 0);

  VAR_15 = VAR_8 +
      (sizeof(VAR_17) / sizeof(u32)) *
      (VAR_11->cdev->p_iov_info->first_vf_in_pf + VAR_18);

  FUNC_5(VAR_11, VAR_15, VAR_17);
 }

 VAR_14 = VAR_16.pf_cids;
 for (VAR_18 = 0; VAR_18 < VAR_0; VAR_18++) {
  VAR_17 = 0;
  FUNC_3(VAR_17, VAR_2, VAR_16.pf_tids[VAR_18]);
  FUNC_3(VAR_17, VAR_4, 0);
  FUNC_3(VAR_17, VAR_3, 0);
  FUNC_3(VAR_17, VAR_5, VAR_14);
  FUNC_3(VAR_17, VAR_6, (u64) 0);

  VAR_15 = VAR_8 +
      (sizeof(VAR_17) / sizeof(u32)) *
      (FUNC_1(VAR_11->cdev) +
       VAR_11->rel_pf_id * VAR_0 + VAR_18);

  FUNC_5(VAR_11, VAR_15, VAR_17);
  VAR_13 |= (VAR_16.pf_tids[VAR_18] ? FUNC_0(VAR_18) : 0);

  VAR_14 += VAR_16.pf_tids[VAR_18];
 }

 if (FUNC_2(VAR_11))
  VAR_13 = 0;

 FUNC_4(VAR_11, VAR_10, VAR_13);


}
