
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ private_data; } ;
struct camif_vp {scalar_t__ owner; int vb_queue; int state; int id; struct camif_dev* camif; } ;
struct camif_dev {int lock; int dev; } ;


 int FUNC_0 (struct camif_vp*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ,scalar_t__,int ) ;
 int FUNC_5 (struct camif_dev*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct file*) ;
 int FUNC_8 (int *) ;
 struct camif_vp* FUNC_9 (struct file*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_1)
{
 struct camif_vp *VAR_2 = FUNC_9(VAR_1);
 struct camif_dev *VAR_3 = VAR_2->camif;
 int VAR_4;

 FUNC_4("[vp%d] state: %#x, owner: %p, pid: %d\n", VAR_2->id,
   VAR_2->state, VAR_2->owner, FUNC_6(VAR_0));

 FUNC_1(&VAR_3->lock);

 if (VAR_2->owner == VAR_1->private_data) {
  FUNC_0(VAR_2);
  FUNC_8(&VAR_2->vb_queue);
  VAR_2->owner = ((void*)0);
 }

 FUNC_5(VAR_3, 0);

 FUNC_3(VAR_3->dev);
 VAR_4 = FUNC_7(VAR_1);

 FUNC_2(&VAR_3->lock);
 return VAR_4;
}
