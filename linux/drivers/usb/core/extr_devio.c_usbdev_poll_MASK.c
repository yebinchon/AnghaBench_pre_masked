
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_dev_state {int list; int async_completed; int wait; } ;
struct poll_table_struct {int dummy; } ;
struct file {int f_mode; struct usb_dev_state* private_data; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_dev_state*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_5,
    struct poll_table_struct *VAR_6)
{
 struct usb_dev_state *VAR_7 = VAR_5->private_data;
 __poll_t VAR_8 = 0;

 FUNC_2(VAR_5, &VAR_7->wait, VAR_6);
 if (VAR_5->f_mode & VAR_4 && !FUNC_1(&VAR_7->async_completed))
  VAR_8 |= VAR_2 | VAR_3;
 if (!FUNC_0(VAR_7))
  VAR_8 |= VAR_1;
 if (FUNC_1(&VAR_7->list))
  VAR_8 |= VAR_0;
 return VAR_8;
}
