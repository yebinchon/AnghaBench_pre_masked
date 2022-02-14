
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_encoder_cmd {int cmd; } ;
struct file {int dummy; } ;
struct allegro_channel {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct allegro_channel*) ;
 int FUNC_1 (struct allegro_channel*) ;
 struct allegro_channel* FUNC_2 (void*) ;
 int FUNC_3 (struct file*,void*,struct v4l2_encoder_cmd*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
          struct v4l2_encoder_cmd *VAR_3)
{
 struct allegro_channel *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 switch (VAR_3->cmd) {
 case 128:
  VAR_5 = FUNC_1(VAR_4);
  break;
 case 129:
  VAR_5 = FUNC_0(VAR_4);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
