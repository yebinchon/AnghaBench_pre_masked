
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ld_usb {int open_count; int mutex; scalar_t__ interrupt_out_busy; int write_wait; scalar_t__ disconnected; } ;
struct inode {int dummy; } ;
struct file {struct ld_usb* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ld_usb*) ;
 int FUNC_1 (struct ld_usb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct ld_usb *VAR_4;
 int VAR_5 = 0;

 VAR_4 = VAR_3->private_data;

 if (VAR_4 == ((void*)0)) {
  VAR_5 = -VAR_0;
  goto exit;
 }

 FUNC_2(&VAR_4->mutex);

 if (VAR_4->open_count != 1) {
  VAR_5 = -VAR_0;
  goto unlock_exit;
 }
 if (VAR_4->disconnected) {

  FUNC_3(&VAR_4->mutex);

  FUNC_1(VAR_4);
  goto exit;
 }


 if (VAR_4->interrupt_out_busy)
  FUNC_4(VAR_4->write_wait, !VAR_4->interrupt_out_busy, 2 * VAR_1);
 FUNC_0(VAR_4);
 VAR_4->open_count = 0;

unlock_exit:
 FUNC_3(&VAR_4->mutex);

exit:
 return VAR_5;
}
