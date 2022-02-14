
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_cdev; } ;
struct file {int dummy; } ;
struct comp_channel {int io_mutex; scalar_t__ dev; int unlink; scalar_t__ access_ref; } ;


 int FUNC_0 (struct comp_channel*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct comp_channel*) ;
 struct comp_channel* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_0, struct file *VAR_1)
{
 struct comp_channel *VAR_2 = FUNC_6(VAR_0->i_cdev);

 FUNC_1(&VAR_2->io_mutex);
 FUNC_3(&VAR_2->unlink);
 VAR_2->access_ref = 0;
 FUNC_4(&VAR_2->unlink);
 if (VAR_2->dev) {
  FUNC_5(VAR_2);
  FUNC_2(&VAR_2->io_mutex);
 } else {
  FUNC_2(&VAR_2->io_mutex);
  FUNC_0(VAR_2);
 }
 return 0;
}
