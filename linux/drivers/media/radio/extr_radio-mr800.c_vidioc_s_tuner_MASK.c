
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int audmode; } ;
struct file {int dummy; } ;
struct amradio_device {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amradio_device*,int ) ;
 struct amradio_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
    const struct v4l2_tuner *VAR_5)
{
 struct amradio_device *VAR_6 = FUNC_1(VAR_3);

 if (VAR_5->index > 0)
  return -VAR_0;


 switch (VAR_5->audmode) {
 case 128:
  return FUNC_0(VAR_6, VAR_1);
 default:
  return FUNC_0(VAR_6, VAR_2);
 }
}
