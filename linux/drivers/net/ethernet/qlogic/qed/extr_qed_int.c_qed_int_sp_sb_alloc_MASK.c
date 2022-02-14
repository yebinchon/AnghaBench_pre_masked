
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_sb_sp_info {int pi_info_arr; int sb_info; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {struct qed_sb_sp_info* p_sp_sb; TYPE_1__* cdev; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {TYPE_2__* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qed_hwfn*) ;
 void* FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (struct qed_sb_sp_info*) ;
 struct qed_sb_sp_info* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,int *,void*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct qed_hwfn *VAR_3, struct qed_ptt *VAR_4)
{
 struct qed_sb_sp_info *VAR_5;
 dma_addr_t VAR_6 = 0;
 void *VAR_7;


 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;


 VAR_7 = FUNC_1(&VAR_3->cdev->pdev->dev,
        FUNC_0(VAR_3),
        &VAR_6, VAR_1);
 if (!VAR_7) {
  FUNC_2(VAR_5);
  return -VAR_0;
 }


 VAR_3->p_sp_sb = VAR_5;
 FUNC_5(VAR_3, VAR_4, &VAR_5->sb_info, VAR_7,
   VAR_6, VAR_2);

 FUNC_4(VAR_5->pi_info_arr, 0, sizeof(VAR_5->pi_info_arr));

 return 0;
}
