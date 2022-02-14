
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qede_dev {TYPE_3__* arfs; int cdev; TYPE_2__* ops; TYPE_1__* pdev; } ;
struct qede_arfs_fltr_node {int buf_len; int mapping; int node; } ;
typedef enum qed_filter_config_mode { ____Placeholder_qed_filter_config_mode } qed_filter_config_mode ;
struct TYPE_6__ {scalar_t__ mode; int filter_count; } ;
struct TYPE_5__ {int (* configure_arfs_searcher ) (int ,int) ;} ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qede_dev*,struct qede_arfs_fltr_node*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct qede_dev *VAR_2,
          struct qede_arfs_fltr_node *VAR_3)
{
 FUNC_1(&VAR_3->node);
 FUNC_0(&VAR_2->pdev->dev, VAR_3->mapping,
    VAR_3->buf_len, VAR_0);

 FUNC_2(VAR_2, VAR_3);

 VAR_2->arfs->filter_count--;
 if (!VAR_2->arfs->filter_count &&
     VAR_2->arfs->mode != VAR_1) {
  enum qed_filter_config_mode VAR_4;

  VAR_4 = VAR_1;
  VAR_2->ops->configure_arfs_searcher(VAR_2->cdev, VAR_4);
  VAR_2->arfs->mode = VAR_1;
 }
}
