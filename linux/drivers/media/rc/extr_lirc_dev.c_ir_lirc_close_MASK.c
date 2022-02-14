
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {scalar_t__ driver_type; int dev; int lirc_fh_lock; } ;
struct lirc_fh {int scancodes; int rawir; int list; struct rc_dev* rc; } ;
struct inode {int dummy; } ;
struct file {struct lirc_fh* private_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lirc_fh*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rc_dev*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2, struct file *VAR_3)
{
 struct lirc_fh *VAR_4 = VAR_3->private_data;
 struct rc_dev *VAR_5 = VAR_4->rc;
 unsigned long VAR_6;

 FUNC_5(&VAR_5->lirc_fh_lock, VAR_6);
 FUNC_2(&VAR_4->list);
 FUNC_6(&VAR_5->lirc_fh_lock, VAR_6);

 if (VAR_5->driver_type == VAR_0)
  FUNC_0(&VAR_4->rawir);
 if (VAR_5->driver_type != VAR_1)
  FUNC_0(&VAR_4->scancodes);
 FUNC_1(VAR_4);

 FUNC_4(VAR_5);
 FUNC_3(&VAR_5->dev);

 return 0;
}
