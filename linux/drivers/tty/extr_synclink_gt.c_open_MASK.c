
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int index; int count; struct slgt_info* driver_data; int name; } ;
struct TYPE_2__ {int count; int low_latency; long flags; struct tty_struct* tty; int mutex; } ;
struct slgt_info {int line; int device_name; TYPE_1__ port; int netlock; scalar_t__ netcount; scalar_t__ init_error; struct slgt_info* next_device; } ;
struct file {int dummy; } ;


 long VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct tty_struct*,struct file*,struct slgt_info*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct slgt_info*,int ,char*) ;
 int VAR_4 ;
 struct slgt_info* VAR_5 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct slgt_info*) ;

__attribute__((used)) static int FUNC_9(struct tty_struct *VAR_6, struct file *VAR_7)
{
 struct slgt_info *VAR_8;
 int VAR_9, VAR_10;
 unsigned long VAR_11;

 VAR_10 = VAR_6->index;
 if (VAR_10 >= VAR_4) {
  FUNC_0(("%s: open with invalid line #%d.\n", VAR_3, VAR_10));
  return -VAR_2;
 }

 VAR_8 = VAR_5;
 while(VAR_8 && VAR_8->line != VAR_10)
  VAR_8 = VAR_8->next_device;
 if (FUNC_5(VAR_8, VAR_6->name, "open"))
  return -VAR_2;
 if (VAR_8->init_error) {
  FUNC_0(("%s init error=%d\n", VAR_8->device_name, VAR_8->init_error));
  return -VAR_2;
 }

 VAR_6->driver_data = VAR_8;
 VAR_8->port.tty = VAR_6;

 FUNC_1(("%s open, old ref count = %d\n", VAR_8->device_name, VAR_8->port.count));

 FUNC_3(&VAR_8->port.mutex);
 VAR_8->port.low_latency = (VAR_8->port.flags & VAR_0) ? 1 : 0;

 FUNC_6(&VAR_8->netlock, VAR_11);
 if (VAR_8->netcount) {
  VAR_9 = -VAR_1;
  FUNC_7(&VAR_8->netlock, VAR_11);
  FUNC_4(&VAR_8->port.mutex);
  goto cleanup;
 }
 VAR_8->port.count++;
 FUNC_7(&VAR_8->netlock, VAR_11);

 if (VAR_8->port.count == 1) {

  VAR_9 = FUNC_8(VAR_8);
  if (VAR_9 < 0) {
   FUNC_4(&VAR_8->port.mutex);
   goto cleanup;
  }
 }
 FUNC_4(&VAR_8->port.mutex);
 VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_8);
 if (VAR_9) {
  FUNC_1(("%s block_til_ready rc=%d\n", VAR_8->device_name, VAR_9));
  goto cleanup;
 }

 VAR_9 = 0;

cleanup:
 if (VAR_9) {
  if (VAR_6->count == 1)
   VAR_8->port.tty = ((void*)0);
  if(VAR_8->port.count)
   VAR_8->port.count--;
 }

 FUNC_1(("%s open rc=%d\n", VAR_8->device_name, VAR_9));
 return VAR_9;
}
