
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ionic_queue {TYPE_1__* lif; } ;
struct ionic_desc_info {int dummy; } ;
struct ionic_cq_info {struct ionic_admin_comp* cq_desc; } ;
struct ionic_admin_ctx {int work; int comp; } ;
struct ionic_admin_comp {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {TYPE_2__* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (char*,int ,int,int,int *,int,int) ;
 int FUNC_3 (int *,struct ionic_admin_comp*,int) ;

__attribute__((used)) static void FUNC_4(struct ionic_queue *VAR_1,
       struct ionic_desc_info *VAR_2,
       struct ionic_cq_info *VAR_3, void *VAR_4)
{
 struct ionic_admin_ctx *VAR_5 = VAR_4;
 struct ionic_admin_comp *VAR_6;
 struct device *VAR_7;

 if (!VAR_5)
  return;

 VAR_6 = VAR_3->cq_desc;
 VAR_7 = &VAR_1->lif->netdev->dev;

 FUNC_3(&VAR_5->comp, VAR_6, sizeof(*VAR_6));

 FUNC_1(VAR_7, "comp admin queue command:\n");
 FUNC_2("comp ", VAR_0, 16, 1,
    &VAR_5->comp, sizeof(VAR_5->comp), 1);

 FUNC_0(&VAR_5->work);
}
