
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {scalar_t__ driver_type; int registered; } ;
struct poll_table_struct {int dummy; } ;
struct lirc_fh {scalar_t__ rec_mode; int rawir; int scancodes; int wait_poll; struct rc_dev* rc; } ;
struct file {struct lirc_fh* private_data; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_7, struct poll_table_struct *VAR_8)
{
 struct lirc_fh *VAR_9 = VAR_7->private_data;
 struct rc_dev *VAR_10 = VAR_9->rc;
 __poll_t VAR_11 = 0;

 FUNC_1(VAR_7, &VAR_9->wait_poll, VAR_8);

 if (!VAR_10->registered) {
  VAR_11 = VAR_1 | VAR_0;
 } else if (VAR_10->driver_type != VAR_6) {
  if (VAR_9->rec_mode == VAR_5 &&
      !FUNC_0(&VAR_9->scancodes))
   VAR_11 = VAR_2 | VAR_3;

  if (VAR_9->rec_mode == VAR_4 &&
      !FUNC_0(&VAR_9->rawir))
   VAR_11 = VAR_2 | VAR_3;
 }

 return VAR_11;
}
