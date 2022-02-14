
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_sb_attn_info {int dummy; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {struct qed_sb_attn_info* p_sb_attn; struct qed_dev* cdev; } ;
struct qed_dev {TYPE_1__* pdev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_hwfn*) ;
 void* FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (struct qed_sb_attn_info*) ;
 struct qed_sb_attn_info* FUNC_3 (int,int ) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,void*,int ) ;

__attribute__((used)) static int FUNC_5(struct qed_hwfn *VAR_2,
     struct qed_ptt *VAR_3)
{
 struct qed_dev *VAR_4 = VAR_2->cdev;
 struct qed_sb_attn_info *VAR_5;
 dma_addr_t VAR_6 = 0;
 void *VAR_7;


 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;


 VAR_7 = FUNC_1(&VAR_4->pdev->dev,
        FUNC_0(VAR_2),
        &VAR_6, VAR_1);

 if (!VAR_7) {
  FUNC_2(VAR_5);
  return -VAR_0;
 }


 VAR_2->p_sb_attn = VAR_5;
 FUNC_4(VAR_2, VAR_3, VAR_7, VAR_6);

 return 0;
}
