
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_input {int index; scalar_t__ status; int std; int type; int name; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
        struct v4l2_input *VAR_5)
{
 if (VAR_5->index > 3)
  return -VAR_0;
 if (VAR_5->index)
  FUNC_0(VAR_5->name, sizeof(VAR_5->name), "VID%d",
    VAR_5->index);
 else
  FUNC_1(VAR_5->name, "J2/VID0", sizeof(VAR_5->name));
 VAR_5->type = VAR_1;
 VAR_5->std = VAR_2;
 VAR_5->status = 0;
 return 0;
}
