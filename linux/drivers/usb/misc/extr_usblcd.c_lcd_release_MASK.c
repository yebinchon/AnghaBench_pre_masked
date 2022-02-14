
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_lcd {int kref; int interface; } ;
struct inode {int dummy; } ;
struct file {struct usb_lcd* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct file *VAR_3)
{
 struct usb_lcd *VAR_4;

 VAR_4 = VAR_3->private_data;
 if (VAR_4 == ((void*)0))
  return -VAR_0;


 FUNC_1(VAR_4->interface);
 FUNC_0(&VAR_4->kref, VAR_1);
 return 0;
}
