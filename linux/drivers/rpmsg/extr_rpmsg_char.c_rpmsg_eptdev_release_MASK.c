
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct device {int dummy; } ;
struct rpmsg_eptdev {int queue; int ept_lock; int * ept; struct device dev; } ;
struct inode {int i_cdev; } ;
struct file {int dummy; } ;


 struct rpmsg_eptdev* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_0, struct file *VAR_1)
{
 struct rpmsg_eptdev *VAR_2 = FUNC_0(VAR_0->i_cdev);
 struct device *VAR_3 = &VAR_2->dev;
 struct sk_buff *VAR_4;


 FUNC_2(&VAR_2->ept_lock);
 if (VAR_2->ept) {
  FUNC_5(VAR_2->ept);
  VAR_2->ept = ((void*)0);
 }
 FUNC_3(&VAR_2->ept_lock);


 while (!FUNC_7(&VAR_2->queue)) {
  VAR_4 = FUNC_6(&VAR_2->queue);
  FUNC_1(VAR_4);
 }

 FUNC_4(VAR_3);

 return 0;
}
