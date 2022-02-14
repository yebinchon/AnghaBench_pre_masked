
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {scalar_t__ dev_state; scalar_t__ tx_queue_limit; int device_lock; } ;
struct mei_cl {scalar_t__ tx_cb_queued; int tx_wait; int rd_completed; int rx_wait; scalar_t__ notify_ev; int ev_wait; int notify_en; struct mei_device* dev; } ;
struct file {struct mei_cl* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mei_cl*) ;
 int FUNC_3 (struct mei_cl*) ;
 int FUNC_4 (struct mei_cl*,int ,struct file*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_9(struct file *VAR_7, poll_table *VAR_8)
{
 __poll_t VAR_9 = FUNC_7(VAR_8);
 struct mei_cl *VAR_10 = VAR_7->private_data;
 struct mei_device *VAR_11;
 __poll_t VAR_12 = 0;
 bool VAR_13;

 if (FUNC_0(!VAR_10 || !VAR_10->dev))
  return VAR_0;

 VAR_11 = VAR_10->dev;

 FUNC_5(&VAR_11->device_lock);

 VAR_13 = VAR_10->notify_en && (VAR_9 & VAR_3);

 if (VAR_11->dev_state != VAR_6 ||
     !FUNC_2(VAR_10)) {
  VAR_12 = VAR_0;
  goto out;
 }

 if (VAR_13) {
  FUNC_8(VAR_7, &VAR_10->ev_wait, VAR_8);
  if (VAR_10->notify_ev)
   VAR_12 |= VAR_3;
 }

 if (VAR_9 & (VAR_1 | VAR_4)) {
  FUNC_8(VAR_7, &VAR_10->rx_wait, VAR_8);

  if (!FUNC_1(&VAR_10->rd_completed))
   VAR_12 |= VAR_1 | VAR_4;
  else
   FUNC_4(VAR_10, FUNC_3(VAR_10), VAR_7);
 }

 if (VAR_9 & (VAR_2 | VAR_5)) {
  FUNC_8(VAR_7, &VAR_10->tx_wait, VAR_8);
  if (VAR_10->tx_cb_queued < VAR_11->tx_queue_limit)
   VAR_12 |= VAR_2 | VAR_5;
 }

out:
 FUNC_6(&VAR_11->device_lock);
 return VAR_12;
}
