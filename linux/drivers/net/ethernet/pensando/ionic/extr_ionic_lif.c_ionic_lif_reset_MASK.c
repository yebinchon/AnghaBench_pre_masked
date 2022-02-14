
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ionic_lif {TYPE_1__* ionic; int index; } ;
struct ionic_dev {int dummy; } ;
struct TYPE_2__ {int dev_cmd_lock; struct ionic_dev idev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ionic_dev*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ionic_lif *VAR_1)
{
 struct ionic_dev *VAR_2 = &VAR_1->ionic->idev;

 FUNC_2(&VAR_1->ionic->dev_cmd_lock);
 FUNC_0(VAR_2, VAR_1->index);
 FUNC_1(VAR_1->ionic, VAR_0);
 FUNC_3(&VAR_1->ionic->dev_cmd_lock);
}
