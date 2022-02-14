
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union gve_adminq_command {int status; } ;
typedef size_t u32 ;
struct gve_priv {size_t adminq_prod_cnt; size_t adminq_mask; TYPE_1__* pdev; union gve_adminq_command* adminq; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct gve_priv*,size_t) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (struct gve_priv*,size_t) ;
 int FUNC_6 (union gve_adminq_command*,union gve_adminq_command*,int) ;

int FUNC_7(struct gve_priv *VAR_1,
      union gve_adminq_command *VAR_2)
{
 union gve_adminq_command *VAR_3;
 u32 VAR_4 = 0;
 u32 VAR_5;

 VAR_3 = &VAR_1->adminq[VAR_1->adminq_prod_cnt & VAR_1->adminq_mask];
 VAR_1->adminq_prod_cnt++;
 VAR_5 = VAR_1->adminq_prod_cnt;

 FUNC_6(VAR_3, VAR_2, sizeof(*VAR_2));

 FUNC_3(VAR_1, VAR_5);
 if (!FUNC_5(VAR_1, VAR_5)) {
  FUNC_2(&VAR_1->pdev->dev, "AQ command timed out, need to reset AQ\n");
  return -VAR_0;
 }

 FUNC_6(VAR_2, VAR_3, sizeof(*VAR_3));
 VAR_4 = FUNC_1(FUNC_0(VAR_3->status));
 return FUNC_4(&VAR_1->pdev->dev, VAR_4);
}
