
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_input {int index; scalar_t__ name; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
        struct v4l2_input *VAR_4)
{

 if (VAR_4->index)
  return -VAR_0;

 VAR_4->type = VAR_1;
 FUNC_0((char *)VAR_4->name, "Camera %u", VAR_4->index);
 return 0;
}
