
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viu_fh {int fh; int vb_vidq; struct viu_dev* dev; } ;
struct viu_dev {int users; int lock; } ;
struct file {struct viu_fh* private_data; } ;
struct TYPE_2__ {int minor; } ;


 int FUNC_0 (int,char*,int,int ) ;
 int FUNC_1 (struct viu_fh*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (struct file*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct viu_dev*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_0)
{
 struct viu_fh *VAR_1 = VAR_0->private_data;
 struct viu_dev *VAR_2 = VAR_1->dev;
 int VAR_3 = FUNC_6(VAR_0)->minor;

 FUNC_2(&VAR_2->lock);
 FUNC_9(VAR_2);
 FUNC_8(&VAR_1->vb_vidq);
 FUNC_7(&VAR_1->vb_vidq);
 FUNC_4(&VAR_1->fh);
 FUNC_5(&VAR_1->fh);
 FUNC_3(&VAR_2->lock);

 FUNC_1(VAR_1);

 VAR_2->users--;
 FUNC_0(1, "close (minor=%d, users=%d)\n",
  VAR_3, VAR_2->users);
 return 0;
}
