
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_output {int index; int capabilities; int type; int name; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
     struct v4l2_output *VAR_5)
{
 if (VAR_5->index)
  return -VAR_0;
 FUNC_0(VAR_5->name, sizeof(VAR_5->name), "HDMI-%d", VAR_5->index);
 VAR_5->type = VAR_1;
 VAR_5->capabilities = VAR_2;
 return 0;
}
