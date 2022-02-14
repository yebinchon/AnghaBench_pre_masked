
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct inode {int dummy; } ;
struct file {int f_flags; TYPE_1__* private_data; } ;
struct TYPE_16__ {struct request_queue* request_queue; } ;
struct TYPE_15__ {int open_cnt; int exclude; TYPE_7__* device; int open_rel_lock; int open_wait; int d_ref; int sg_tablesize; scalar_t__ sgdebug; } ;
typedef TYPE_1__ Sg_fd ;
typedef TYPE_1__ Sg_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,struct file*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (struct request_queue*) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_7__*) ;
 scalar_t__ FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (TYPE_7__*) ;
 int FUNC_14 (TYPE_7__*) ;
 TYPE_1__* FUNC_15 (TYPE_1__*) ;
 int VAR_8 ;
 TYPE_1__* FUNC_16 (int) ;
 int FUNC_17 (int ,TYPE_1__*,char*,int) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int
FUNC_19(struct inode *VAR_9, struct file *VAR_10)
{
 int VAR_11 = FUNC_3(VAR_9);
 int VAR_12 = VAR_10->f_flags;
 struct request_queue *VAR_13;
 Sg_device *VAR_14;
 Sg_fd *VAR_15;
 int VAR_16;

 FUNC_7(VAR_9, VAR_10);
 if ((VAR_12 & VAR_5) && (VAR_7 == (VAR_12 & VAR_4)))
  return -VAR_2;
 VAR_14 = FUNC_16(VAR_11);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 FUNC_2(3, FUNC_17(VAR_3, VAR_14,
          "sg_open: flags=0x%x\n", VAR_12));



 VAR_16 = FUNC_13(VAR_14->device);
 if (VAR_16)
  goto sg_put;

 VAR_16 = FUNC_10(VAR_14->device);
 if (VAR_16)
  goto sdp_put;




 if (!((VAR_12 & VAR_6) ||
       FUNC_12(VAR_14->device))) {
  VAR_16 = -VAR_1;

  goto error_out;
 }

 FUNC_5(&VAR_14->open_rel_lock);
 if (VAR_12 & VAR_6) {
  if (VAR_12 & VAR_5) {
   if (VAR_14->open_cnt > 0) {
    VAR_16 = -VAR_0;
    goto error_mutex_locked;
   }
  } else {
   if (VAR_14->exclude) {
    VAR_16 = -VAR_0;
    goto error_mutex_locked;
   }
  }
 } else {
  VAR_16 = FUNC_8(VAR_14, VAR_12);
  if (VAR_16)
   goto error_mutex_locked;
 }


 if (VAR_12 & VAR_5)
  VAR_14->exclude = 1;

 if (VAR_14->open_cnt < 1) {
  VAR_14->sgdebug = 0;
  VAR_13 = VAR_14->device->request_queue;
  VAR_14->sg_tablesize = FUNC_9(VAR_13);
 }
 VAR_15 = FUNC_15(VAR_14);
 if (FUNC_0(VAR_15)) {
  VAR_16 = FUNC_1(VAR_15);
  goto out_undo;
 }

 VAR_10->private_data = VAR_15;
 VAR_14->open_cnt++;
 FUNC_6(&VAR_14->open_rel_lock);

 VAR_16 = 0;
sg_put:
 FUNC_4(&VAR_14->d_ref, VAR_8);
 return VAR_16;

out_undo:
 if (VAR_12 & VAR_5) {
  VAR_14->exclude = 0;
  FUNC_18(&VAR_14->open_wait);
 }
error_mutex_locked:
 FUNC_6(&VAR_14->open_rel_lock);
error_out:
 FUNC_11(VAR_14->device);
sdp_put:
 FUNC_14(VAR_14->device);
 goto sg_put;
}
