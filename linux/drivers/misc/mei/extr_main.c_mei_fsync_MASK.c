
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {scalar_t__ dev_state; int device_lock; } ;
struct mei_cl {scalar_t__ writing_state; int tx_wait; struct mei_device* dev; } ;
struct file {struct mei_cl* private_data; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (struct mei_cl*) ;
 scalar_t__ FUNC_2 (struct mei_cl*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_5, loff_t VAR_6, loff_t VAR_7, int VAR_8)
{
 struct mei_cl *VAR_9 = VAR_5->private_data;
 struct mei_device *VAR_10;
 int VAR_11;

 if (FUNC_0(!VAR_9 || !VAR_9->dev))
  return -VAR_1;

 VAR_10 = VAR_9->dev;

 FUNC_3(&VAR_10->device_lock);

 if (VAR_10->dev_state != VAR_2 || !FUNC_1(VAR_9)) {
  VAR_11 = -VAR_1;
  goto out;
 }

 while (FUNC_2(VAR_9)) {
  FUNC_4(&VAR_10->device_lock);
  VAR_11 = FUNC_6(VAR_9->tx_wait,
    VAR_9->writing_state == VAR_3 ||
    !FUNC_1(VAR_9));
  FUNC_3(&VAR_10->device_lock);
  if (VAR_11) {
   if (FUNC_5(VAR_4))
    VAR_11 = -VAR_0;
   goto out;
  }
  if (!FUNC_1(VAR_9)) {
   VAR_11 = -VAR_1;
   goto out;
  }
 }
 VAR_11 = 0;
out:
 FUNC_4(&VAR_10->device_lock);
 return VAR_11;
}
