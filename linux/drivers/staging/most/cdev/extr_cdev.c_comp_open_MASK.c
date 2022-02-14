
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_cdev; } ;
struct file {int f_flags; struct comp_channel* private_data; } ;
struct comp_channel {int access_ref; int io_mutex; int channel_id; int iface; scalar_t__ mbo_offs; int dev; TYPE_1__* cfg; } ;
struct TYPE_4__ {int cc; } ;
struct TYPE_3__ {scalar_t__ direction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 struct comp_channel* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_9, struct file *VAR_10)
{
 struct comp_channel *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(VAR_9->i_cdev);
 VAR_10->private_data = VAR_11;

 if (((VAR_11->cfg->direction == VAR_3) &&
      ((VAR_10->f_flags & VAR_5) != VAR_6)) ||
      ((VAR_11->cfg->direction == VAR_4) &&
  ((VAR_10->f_flags & VAR_5) != VAR_7))) {
  FUNC_3("WARN: Access flags mismatch\n");
  return -VAR_0;
 }

 FUNC_1(&VAR_11->io_mutex);
 if (!VAR_11->dev) {
  FUNC_3("WARN: Device is destroyed\n");
  FUNC_2(&VAR_11->io_mutex);
  return -VAR_2;
 }

 if (VAR_11->access_ref) {
  FUNC_3("WARN: Device is busy\n");
  FUNC_2(&VAR_11->io_mutex);
  return -VAR_1;
 }

 VAR_11->mbo_offs = 0;
 VAR_12 = FUNC_0(VAR_11->iface, VAR_11->channel_id, &VAR_8.cc);
 if (!VAR_12)
  VAR_11->access_ref = 1;
 FUNC_2(&VAR_11->io_mutex);
 return VAR_12;
}
