
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int offset; } ;
struct v4l2_buffer {scalar_t__ memory; int index; int flags; int length; TYPE_1__ m; int sequence; int timestamp; int field; int bytesused; } ;
struct file {int f_flags; } ;
struct TYPE_6__ {int lock; TYPE_2__* grab_buffer; int doneq_lock; int doneq; int proc_list; } ;
struct TYPE_5__ {scalar_t__ state; int sequence; int ts; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char*,int,int *) ;
 TYPE_3__ VAR_12 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_13, void *VAR_14, struct v4l2_buffer *VAR_15)
{
 int VAR_16;

 if (VAR_15->memory != VAR_10)
  return -VAR_3;

 FUNC_2(&VAR_12.lock);

 if (FUNC_0(&VAR_12.doneq) == 0 && VAR_13->f_flags & VAR_6) {
  FUNC_3(&VAR_12.lock);
  return -VAR_0;
 }

 if (FUNC_5(VAR_12.proc_list,
         FUNC_0(&VAR_12.doneq) != 0) < 0) {
  FUNC_3(&VAR_12.lock);
  return -VAR_2;
 }

 if (!FUNC_1(&VAR_12.doneq, (unsigned char *)&VAR_16,
         sizeof(int), &VAR_12.doneq_lock)) {
  FUNC_3(&VAR_12.lock);
  return -VAR_1;
 }

 if (VAR_12.grab_buffer[VAR_16].state != VAR_4) {
  FUNC_3(&VAR_12.lock);
  return -VAR_3;
 }

 VAR_15->index = VAR_16;
 VAR_15->bytesused = VAR_12.grab_buffer[VAR_16].size;
 VAR_15->flags = VAR_7 | VAR_8;
 VAR_15->field = VAR_9;
 VAR_15->timestamp = FUNC_4(VAR_12.grab_buffer[VAR_16].ts);
 VAR_15->sequence = VAR_12.grab_buffer[VAR_16].sequence;
 VAR_15->memory = VAR_10;
 VAR_15->m.offset = VAR_16 * VAR_11;
 VAR_15->length = VAR_11;
 VAR_12.grab_buffer[VAR_16].state = VAR_5;
 FUNC_3(&VAR_12.lock);

 return 0;
}
