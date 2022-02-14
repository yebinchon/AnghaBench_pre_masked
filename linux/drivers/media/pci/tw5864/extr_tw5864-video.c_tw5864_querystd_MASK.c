
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct tw5864_input {int dummy; } ;
struct file {int dummy; } ;
typedef enum tw5864_vid_std { ____Placeholder_tw5864_vid_std } tw5864_vid_std ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tw5864_input*,int*) ;
 struct tw5864_input* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct tw5864_input *VAR_3 = FUNC_2(VAR_0);
 enum tw5864_vid_std VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;
 *VAR_2 = FUNC_0(VAR_4);

 return 0;
}
