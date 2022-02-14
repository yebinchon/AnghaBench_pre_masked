
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct usb_device {scalar_t__ state; int dev; int filelist; } ;
struct usb_dev_state {int interface_allowed_mask; int list; int cred; int disc_pid; int wait_for_resume; int wait; int memory_list; int async_completed; int async_pending; int lock; struct file* file; struct usb_device* dev; } ;
struct inode {int i_rdev; } ;
struct file {struct usb_dev_state* private_data; } ;
struct TYPE_4__ {int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usb_dev_state*) ;
 struct usb_dev_state* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,char*,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct usb_device*) ;
 int FUNC_14 (struct usb_device*) ;
 int FUNC_15 (struct usb_device*) ;
 int FUNC_16 (struct usb_device*) ;
 struct usb_device* FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_6, struct file *VAR_7)
{
 struct usb_device *VAR_8 = ((void*)0);
 struct usb_dev_state *VAR_9;
 int VAR_10;

 VAR_10 = -VAR_1;
 VAR_9 = FUNC_6(sizeof(struct usb_dev_state), VAR_2);
 if (!VAR_9)
  goto out_free_ps;

 VAR_10 = -VAR_0;


 if (FUNC_3(VAR_6) == VAR_3)
  VAR_8 = FUNC_17(VAR_6->i_rdev);
 if (!VAR_8)
  goto out_free_ps;

 FUNC_14(VAR_8);
 if (VAR_8->state == VAR_4)
  goto out_unlock_device;

 VAR_10 = FUNC_13(VAR_8);
 if (VAR_10)
  goto out_unlock_device;

 VAR_9->dev = VAR_8;
 VAR_9->file = VAR_7;
 VAR_9->interface_allowed_mask = 0xFFFFFFFF;
 FUNC_10(&VAR_9->lock);
 FUNC_0(&VAR_9->list);
 FUNC_0(&VAR_9->async_pending);
 FUNC_0(&VAR_9->async_completed);
 FUNC_0(&VAR_9->memory_list);
 FUNC_4(&VAR_9->wait);
 FUNC_4(&VAR_9->wait_for_resume);
 VAR_9->disc_pid = FUNC_2(FUNC_11(VAR_5));
 VAR_9->cred = FUNC_1();
 FUNC_8();


 FUNC_7(&VAR_9->list, &VAR_8->filelist);
 VAR_7->private_data = VAR_9;
 FUNC_16(VAR_8);
 FUNC_9(&VAR_8->dev, "opened by process %d: %s\n", FUNC_12(VAR_5),
   VAR_5->comm);
 return VAR_10;

 out_unlock_device:
 FUNC_16(VAR_8);
 FUNC_15(VAR_8);
 out_free_ps:
 FUNC_5(VAR_9);
 return VAR_10;
}
