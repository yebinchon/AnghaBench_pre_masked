
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtmc_file_data {char term_char; int eom_val; int file_elem; scalar_t__ auto_abort; scalar_t__ term_char_enabled; int timeout; int closing; struct usbtmc_device_data* data; int wait_bulk_in; int in_anchor; int submitted; int limit_write_sem; int err_lock; } ;
struct usbtmc_device_data {int io_mutex; int dev_lock; int file_list; int kref; } ;
struct usb_interface {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct usbtmc_file_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct usbtmc_file_data* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct usb_interface* FUNC_15 (int *,int ) ;
 struct usbtmc_device_data* FUNC_16 (struct usb_interface*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_6, struct file *VAR_7)
{
 struct usb_interface *VAR_8;
 struct usbtmc_device_data *VAR_9;
 struct usbtmc_file_data *VAR_10;

 VAR_8 = FUNC_15(&VAR_5, FUNC_2(VAR_6));
 if (!VAR_8) {
  FUNC_10("can not find device for minor %d", FUNC_2(VAR_6));
  return -VAR_0;
 }

 VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 FUNC_12(&VAR_10->err_lock);
 FUNC_11(&VAR_10->limit_write_sem, VAR_3);
 FUNC_3(&VAR_10->submitted);
 FUNC_3(&VAR_10->in_anchor);
 FUNC_4(&VAR_10->wait_bulk_in);

 VAR_9 = FUNC_16(VAR_8);

 FUNC_5(&VAR_9->kref);

 FUNC_8(&VAR_9->io_mutex);
 VAR_10->data = VAR_9;

 FUNC_1(&VAR_10->closing, 0);

 VAR_10->timeout = VAR_4;
 VAR_10->term_char = '\n';
 VAR_10->term_char_enabled = 0;
 VAR_10->auto_abort = 0;
 VAR_10->eom_val = 1;

 FUNC_0(&VAR_10->file_elem);
 FUNC_13(&VAR_9->dev_lock);
 FUNC_7(&VAR_10->file_elem, &VAR_9->file_list);
 FUNC_14(&VAR_9->dev_lock);
 FUNC_9(&VAR_9->io_mutex);


 VAR_7->private_data = VAR_10;

 return 0;
}
