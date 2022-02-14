
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw686x_video_channel {unsigned int input; int vidq; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct tw686x_video_channel*,unsigned int) ;
 scalar_t__ FUNC_1 (int *) ;
 struct tw686x_video_channel* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4, unsigned int VAR_5)
{
 struct tw686x_video_channel *VAR_6 = FUNC_2(VAR_3);

 if (VAR_5 >= VAR_2)
  return -VAR_1;
 if (VAR_5 == VAR_6->input)
  return 0;



 if (FUNC_1(&VAR_6->vidq))
  return -VAR_0;

 FUNC_0(VAR_6, VAR_5);
 return 0;
}
