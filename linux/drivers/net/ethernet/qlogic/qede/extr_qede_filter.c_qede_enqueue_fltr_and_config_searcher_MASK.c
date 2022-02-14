
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct qede_dev {TYPE_3__* arfs; int cdev; TYPE_2__* ops; TYPE_1__* pdev; } ;
struct TYPE_8__ {scalar_t__ mode; } ;
struct qede_arfs_fltr_node {TYPE_4__ tuple; int node; int mapping; int buf_len; int data; } ;
struct TYPE_7__ {int filter_count; scalar_t__ mode; } ;
struct TYPE_6__ {int (* configure_arfs_searcher ) (int ,scalar_t__) ;} ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qede_dev*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct qede_dev*,struct qede_arfs_fltr_node*) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct qede_dev *VAR_3,
          struct qede_arfs_fltr_node *VAR_4,
          u16 VAR_5)
{
 VAR_4->mapping = FUNC_3(&VAR_3->pdev->dev, VAR_4->data,
           VAR_4->buf_len, VAR_0);
 if (FUNC_4(&VAR_3->pdev->dev, VAR_4->mapping)) {
  FUNC_0(VAR_3, "Failed to map DMA memory for rule\n");
  FUNC_6(VAR_3, VAR_4);
  return -VAR_1;
 }

 FUNC_1(&VAR_4->node);
 FUNC_5(&VAR_4->node,
         FUNC_2(VAR_3, VAR_5));

 VAR_3->arfs->filter_count++;
 if (VAR_3->arfs->filter_count == 1 &&
     VAR_3->arfs->mode == VAR_2) {
  VAR_3->ops->configure_arfs_searcher(VAR_3->cdev,
         VAR_4->tuple.mode);
  VAR_3->arfs->mode = VAR_4->tuple.mode;
 }

 return 0;
}
