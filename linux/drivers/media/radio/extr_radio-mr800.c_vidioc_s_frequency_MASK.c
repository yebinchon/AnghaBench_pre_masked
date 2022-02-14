
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; int frequency; } ;
struct file {int dummy; } ;
struct amradio_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct amradio_device*,int ) ;
 struct amradio_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
    const struct v4l2_frequency *VAR_3)
{
 struct amradio_device *VAR_4 = FUNC_1(VAR_1);

 if (VAR_3->tuner != 0)
  return -VAR_0;
 return FUNC_0(VAR_4, VAR_3->frequency);
}
