
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otx2_mbox_dev {scalar_t__ num_msgs; int mbox_lock; } ;
struct otx2_mbox {struct otx2_mbox_dev* dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(struct otx2_mbox *VAR_0, int VAR_1)
{
 struct otx2_mbox_dev *VAR_2 = &VAR_0->dev[VAR_1];
 bool VAR_3;

 FUNC_0(&VAR_2->mbox_lock);
 VAR_3 = VAR_2->num_msgs != 0;
 FUNC_1(&VAR_2->mbox_lock);

 return VAR_3;
}
