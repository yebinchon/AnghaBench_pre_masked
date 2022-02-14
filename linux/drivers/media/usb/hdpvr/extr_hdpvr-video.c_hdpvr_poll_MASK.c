
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdpvr_device {scalar_t__ status; int wait_data; int io_mutex; int owner; int v4l2_dev; } ;
struct hdpvr_buffer {scalar_t__ status; } ;
struct file {int private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct hdpvr_buffer* FUNC_0 (struct hdpvr_device*) ;
 scalar_t__ FUNC_1 (struct hdpvr_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct file*,int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (struct file*,int *) ;
 int FUNC_8 (int ,int ,int *,char*) ;
 struct hdpvr_device* FUNC_9 (struct file*) ;

__attribute__((used)) static __poll_t FUNC_10(struct file *VAR_6, poll_table *VAR_7)
{
 __poll_t VAR_8 = FUNC_4(VAR_7);
 struct hdpvr_buffer *VAR_9 = ((void*)0);
 struct hdpvr_device *VAR_10 = FUNC_9(VAR_6);
 __poll_t VAR_11 = FUNC_7(VAR_6, VAR_7);

 if (!(VAR_8 & (VAR_1 | VAR_2)))
  return VAR_11;

 FUNC_2(&VAR_10->io_mutex);

 if (VAR_10->status == VAR_4) {
  if (FUNC_1(VAR_10)) {
   FUNC_8(VAR_3, VAR_5, &VAR_10->v4l2_dev,
     "start_streaming failed\n");
   VAR_10->status = VAR_4;
  } else {
   VAR_10->owner = VAR_6->private_data;
  }

  FUNC_6();
 }
 FUNC_3(&VAR_10->io_mutex);

 VAR_9 = FUNC_0(VAR_10);

 if (!VAR_9 || VAR_9->status != VAR_0) {
  FUNC_5(VAR_6, &VAR_10->wait_data, VAR_7);
  VAR_9 = FUNC_0(VAR_10);
 }
 if (VAR_9 && VAR_9->status == VAR_0)
  VAR_11 |= VAR_1 | VAR_2;

 return VAR_11;
}
