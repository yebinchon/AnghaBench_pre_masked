
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mei_device {scalar_t__ dev_state; scalar_t__ tx_queue_limit; int device_lock; } ;
struct TYPE_2__ {int data; } ;
struct mei_cl_cb {int internal; int blocking; TYPE_1__ buf; } ;
struct mei_cl {scalar_t__ tx_cb_queued; scalar_t__ writing_state; int tx_wait; int me_cl; struct mei_device* dev; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_10 ;
 struct mei_cl_cb* FUNC_1 (struct mei_cl*,size_t,int ,int *) ;
 int FUNC_2 (struct mei_cl*) ;
 size_t FUNC_3 (struct mei_cl*) ;
 int FUNC_4 (struct mei_cl*,struct mei_cl_cb*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;

ssize_t FUNC_11(struct mei_cl *VAR_11, u8 *VAR_12, size_t VAR_13,
        unsigned int VAR_14)
{
 struct mei_device *VAR_15;
 struct mei_cl_cb *VAR_16;
 ssize_t VAR_17;

 if (FUNC_0(!VAR_11 || !VAR_11->dev))
  return -VAR_2;

 VAR_15 = VAR_11->dev;

 FUNC_7(&VAR_15->device_lock);
 if (VAR_15->dev_state != VAR_7) {
  VAR_17 = -VAR_2;
  goto out;
 }

 if (!FUNC_2(VAR_11)) {
  VAR_17 = -VAR_2;
  goto out;
 }


 if (!FUNC_5(VAR_11->me_cl)) {
  VAR_17 = -VAR_4;
  goto out;
 }

 if (VAR_13 > FUNC_3(VAR_11)) {
  VAR_17 = -VAR_0;
  goto out;
 }

 while (VAR_11->tx_cb_queued >= VAR_15->tx_queue_limit) {
  FUNC_8(&VAR_15->device_lock);
  VAR_17 = FUNC_10(VAR_11->tx_wait,
    VAR_11->writing_state == VAR_9 ||
    (!FUNC_2(VAR_11)));
  FUNC_7(&VAR_15->device_lock);
  if (VAR_17) {
   if (FUNC_9(VAR_10))
    VAR_17 = -VAR_1;
   goto out;
  }
  if (!FUNC_2(VAR_11)) {
   VAR_17 = -VAR_2;
   goto out;
  }
 }

 VAR_16 = FUNC_1(VAR_11, VAR_13, VAR_8, ((void*)0));
 if (!VAR_16) {
  VAR_17 = -VAR_3;
  goto out;
 }

 VAR_16->internal = !!(VAR_14 & VAR_6);
 VAR_16->blocking = !!(VAR_14 & VAR_5);
 FUNC_6(VAR_16->buf.data, VAR_12, VAR_13);

 VAR_17 = FUNC_4(VAR_11, VAR_16);

out:
 FUNC_8(&VAR_15->device_lock);

 return VAR_17;
}
