
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int b_pending_msg; } ;
struct qed_vf_info {int abs_vf_id; scalar_t__ state; TYPE_2__ vf_mbx; int b_init; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {TYPE_1__* pf_iov_info; } ;
struct TYPE_3__ {unsigned long long* pending_flr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct qed_hwfn*,char*,int) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct qed_hwfn*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,int,int) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 struct qed_vf_info* FUNC_7 (struct qed_hwfn*,int,int) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_vf_info*) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_vf_info*,struct qed_ptt*) ;

__attribute__((used)) static int
FUNC_10(struct qed_hwfn *VAR_4,
          struct qed_ptt *VAR_5,
          u16 VAR_6, u32 *VAR_7)
{
 struct qed_vf_info *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_7(VAR_4, VAR_6, 0);
 if (!VAR_8)
  return 0;

 if (VAR_4->pf_iov_info->pending_flr[VAR_6 / 64] &
     (1ULL << (VAR_6 % 64))) {
  u16 VAR_10 = VAR_8->abs_vf_id;

  FUNC_2(VAR_4, VAR_1,
      "VF[%d] - Handling FLR\n", VAR_10);

  FUNC_8(VAR_4, VAR_8);


  if (!VAR_8->b_init)
   goto cleanup;

  VAR_9 = FUNC_9(VAR_4, VAR_8, VAR_5);
  if (VAR_9)
   goto cleanup;

  VAR_9 = FUNC_5(VAR_4, VAR_5, VAR_10, 1);
  if (VAR_9) {
   FUNC_1(VAR_4, "Failed handle FLR of VF[%d]\n", VAR_10);
   return VAR_9;
  }




  FUNC_3(VAR_4,
         VAR_0 +
         FUNC_4(VAR_10), 1);




  VAR_8->state = VAR_3;

  VAR_9 = FUNC_6(VAR_4, VAR_5, VAR_8);
  if (VAR_9) {
   FUNC_1(VAR_4, "Failed to re-enable VF[%d] acces\n",
          VAR_10);
   return VAR_9;
  }
cleanup:

  if (VAR_8->state == VAR_2)
   VAR_8->state = VAR_3;
  VAR_7[VAR_10 / 32] |= FUNC_0((VAR_10 % 32));
  VAR_4->pf_iov_info->pending_flr[VAR_6 / 64] &=
      ~(1ULL << (VAR_6 % 64));
  VAR_8->vf_mbx.b_pending_msg = 0;
 }

 return VAR_9;
}
