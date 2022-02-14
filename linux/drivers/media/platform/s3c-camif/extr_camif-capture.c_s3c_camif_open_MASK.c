
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct camif_vp {int owner; int state; int id; struct camif_dev* camif; } ;
struct camif_dev {int lock; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ,int ,int ) ;
 int FUNC_5 (struct camif_dev*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct file*) ;
 int FUNC_8 (struct file*) ;
 struct camif_vp* FUNC_9 (struct file*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_2)
{
 struct camif_vp *VAR_3 = FUNC_9(VAR_2);
 struct camif_dev *VAR_4 = VAR_3->camif;
 int VAR_5;

 FUNC_4("[vp%d] state: %#x,  owner: %p, pid: %d\n", VAR_3->id,
   VAR_3->state, VAR_3->owner, FUNC_6(VAR_1));

 if (FUNC_0(&VAR_4->lock))
  return -VAR_0;

 VAR_5 = FUNC_7(VAR_2);
 if (VAR_5 < 0)
  goto unlock;

 VAR_5 = FUNC_2(VAR_4->dev);
 if (VAR_5 < 0)
  goto err_pm;

 VAR_5 = FUNC_5(VAR_4, 1);
 if (!VAR_5)
  goto unlock;

 FUNC_3(VAR_4->dev);
err_pm:
 FUNC_8(VAR_2);
unlock:
 FUNC_1(&VAR_4->lock);
 return VAR_5;
}
