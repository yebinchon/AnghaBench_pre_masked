
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (int ,struct v4l2_format*) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
    struct v4l2_format *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(FUNC_0(VAR_0), VAR_2);
}
