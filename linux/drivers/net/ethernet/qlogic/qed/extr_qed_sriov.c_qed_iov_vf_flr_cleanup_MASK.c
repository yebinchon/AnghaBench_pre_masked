
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {TYPE_2__* cdev; } ;
struct TYPE_4__ {TYPE_1__* p_iov_info; } ;
struct TYPE_3__ {scalar_t__ total_vfs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,scalar_t__,int *) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int *) ;

__attribute__((used)) static int
FUNC_4(struct qed_hwfn *VAR_1, struct qed_ptt *VAR_2)
{
 u32 VAR_3[VAR_0 / 32];
 int VAR_4 = 0;
 u16 VAR_5;

 FUNC_0(VAR_3, 0, sizeof(u32) * (VAR_0 / 32));





 FUNC_1(100);

 for (VAR_5 = 0; VAR_5 < VAR_1->cdev->p_iov_info->total_vfs; VAR_5++)
  FUNC_2(VAR_1, VAR_2, VAR_5, VAR_3);

 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
