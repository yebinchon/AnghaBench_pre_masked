
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_output {int name; int std; int type; scalar_t__ index; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
         struct v4l2_output *VAR_5)
{
 if (VAR_5->index)
  return -VAR_1;

 VAR_5->type = VAR_2;
 VAR_5->std = VAR_0;
 FUNC_0(VAR_5->name, "Composite", sizeof(VAR_5->name));
 return 0;
}
