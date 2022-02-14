
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sisusb_usb_data {int lock; int sisusb_dev; int ready; int present; } ;
struct file {struct sisusb_usb_data* private_data; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int ,int) ;

__attribute__((used)) static loff_t FUNC_3(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 struct sisusb_usb_data *VAR_4;
 loff_t VAR_5;

 VAR_4 = VAR_1->private_data;
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_4->lock);


 if (!VAR_4->present || !VAR_4->ready || !VAR_4->sisusb_dev) {
  FUNC_1(&VAR_4->lock);
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);

 FUNC_1(&VAR_4->lock);
 return VAR_5;
}
