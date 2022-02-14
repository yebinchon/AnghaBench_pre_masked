
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int audmode; } ;
struct si470x_device {int (* set_register ) (struct si470x_device*,size_t) ;int * registers; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct si470x_device*,size_t) ;
 struct si470x_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
  const struct v4l2_tuner *VAR_5)
{
 struct si470x_device *VAR_6 = FUNC_1(VAR_3);

 if (VAR_5->index != 0)
  return -VAR_0;


 switch (VAR_5->audmode) {
 case 129:
  VAR_6->registers[VAR_1] |= VAR_2;
  break;
 case 128:
 default:
  VAR_6->registers[VAR_1] &= ~VAR_2;
  break;
 }

 return VAR_6->set_register(VAR_6, VAR_1);
}
