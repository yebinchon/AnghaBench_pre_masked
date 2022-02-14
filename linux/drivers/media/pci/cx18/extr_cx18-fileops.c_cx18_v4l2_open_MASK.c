
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct file {int dummy; } ;
struct cx18_stream {struct cx18* cx; } ;
struct cx18 {int serialize_lock; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct cx18*) ;
 int FUNC_2 (struct cx18_stream*,struct file*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct video_device* FUNC_5 (struct file*) ;
 int FUNC_6 (struct video_device*) ;
 struct cx18_stream* FUNC_7 (struct video_device*) ;

int FUNC_8(struct file *VAR_1)
{
 int VAR_2;
 struct video_device *VAR_3 = FUNC_5(VAR_1);
 struct cx18_stream *VAR_4 = FUNC_7(VAR_3);
 struct cx18 *VAR_5 = VAR_4->cx;

 FUNC_3(&VAR_5->serialize_lock);
 if (FUNC_1(VAR_5)) {
  FUNC_0("Failed to initialize on %s\n",
    FUNC_6(VAR_3));
  FUNC_4(&VAR_5->serialize_lock);
  return -VAR_0;
 }
 VAR_2 = FUNC_2(VAR_4, VAR_1);
 FUNC_4(&VAR_5->serialize_lock);
 return VAR_2;
}
