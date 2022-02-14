
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iowarrior {scalar_t__ opened; int mutex; int write_wait; int read_wait; int int_in_urb; scalar_t__ present; int minor; TYPE_1__* interface; } ;
struct inode {int dummy; } ;
struct file {struct iowarrior* private_data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct iowarrior*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1, struct file *VAR_2)
{
 struct iowarrior *VAR_3;
 int VAR_4 = 0;

 VAR_3 = VAR_2->private_data;
 if (!VAR_3)
  return -VAR_0;

 FUNC_0(&VAR_3->interface->dev, "minor %d\n", VAR_3->minor);


 FUNC_2(&VAR_3->mutex);

 if (VAR_3->opened <= 0) {
  VAR_4 = -VAR_0;
  FUNC_3(&VAR_3->mutex);
 } else {
  VAR_3->opened = 0;
  VAR_4 = 0;
  if (VAR_3->present) {




   FUNC_4(VAR_3->int_in_urb);
   FUNC_5(&VAR_3->read_wait);
   FUNC_5(&VAR_3->write_wait);
   FUNC_3(&VAR_3->mutex);
  } else {

   FUNC_3(&VAR_3->mutex);
   FUNC_1(VAR_3);
  }
 }
 return VAR_4;
}
