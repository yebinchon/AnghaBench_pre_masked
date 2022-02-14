
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_input {size_t index; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct v4l2_input*,int *,int) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4, struct v4l2_input *VAR_5)
{
 FUNC_0("VIDIOC_ENUMINPUT %d\n", VAR_5->index);
 if (VAR_5->index >= VAR_1)
  return -VAR_0;
 FUNC_1(VAR_5, &VAR_2[VAR_5->index], sizeof(struct v4l2_input));
 return 0;
}
