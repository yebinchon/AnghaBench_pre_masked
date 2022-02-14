
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_modulator {scalar_t__ index; scalar_t__ txsubchans; } ;
struct keene_device {int stereo; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct keene_device*) ;
 struct keene_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    const struct v4l2_modulator *VAR_4)
{
 struct keene_device *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4->index > 0)
  return -VAR_0;

 VAR_5->stereo = (VAR_4->txsubchans == VAR_1);
 return FUNC_0(VAR_5);
}
