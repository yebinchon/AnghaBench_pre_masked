
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int dummy; } ;
struct v4l2_format {int dummy; } ;
struct file {int dummy; } ;


 struct venus_inst* FUNC_0 (struct file*) ;
 int FUNC_1 (struct venus_inst*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1, struct v4l2_format *VAR_2)
{
 struct venus_inst *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_3, VAR_2);

 return 0;
}
