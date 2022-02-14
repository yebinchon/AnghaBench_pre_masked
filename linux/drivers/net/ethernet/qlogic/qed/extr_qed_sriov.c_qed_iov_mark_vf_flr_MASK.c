
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned long long u64 ;
typedef int u32 ;
typedef int u16 ;
struct qed_vf_info {int abs_vf_id; int relative_vf_id; int state; } ;
struct qed_hwfn {TYPE_3__* pf_iov_info; TYPE_2__* cdev; } ;
struct TYPE_6__ {unsigned long long* pending_flr; } ;
struct TYPE_5__ {TYPE_1__* p_iov_info; } ;
struct TYPE_4__ {int total_vfs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct qed_hwfn*,char*) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qed_vf_info* FUNC_3 (struct qed_hwfn*,int,int) ;

bool FUNC_4(struct qed_hwfn *VAR_3, u32 *VAR_4)
{
 bool VAR_5 = 0;
 u16 VAR_6;

 FUNC_2(VAR_3, VAR_0, "Marking FLR-ed VFs\n");
 for (VAR_6 = 0; VAR_6 < (VAR_1 / 32); VAR_6++)
  FUNC_2(VAR_3, VAR_0,
      "[%08x,...,%08x]: %08x\n",
      VAR_6 * 32, (VAR_6 + 1) * 32 - 1, VAR_4[VAR_6]);

 if (!VAR_3->cdev->p_iov_info) {
  FUNC_1(VAR_3, "VF flr but no IOV\n");
  return 0;
 }


 for (VAR_6 = 0; VAR_6 < VAR_3->cdev->p_iov_info->total_vfs; VAR_6++) {
  struct qed_vf_info *VAR_7;
  u8 VAR_8;

  VAR_7 = FUNC_3(VAR_3, VAR_6, 0);
  if (!VAR_7)
   continue;

  VAR_8 = VAR_7->abs_vf_id;
  if (FUNC_0((VAR_8 % 32)) & VAR_4[VAR_8 / 32]) {
   u64 *VAR_9 = VAR_3->pf_iov_info->pending_flr;
   u16 VAR_10 = VAR_7->relative_vf_id;

   FUNC_2(VAR_3, VAR_0,
       "VF[%d] [rel %d] got FLR-ed\n",
       VAR_8, VAR_10);

   VAR_7->state = VAR_2;






   VAR_9[VAR_10 / 64] |= 1ULL << (VAR_10 % 64);
   VAR_5 = 1;
  }
 }

 return VAR_5;
}
