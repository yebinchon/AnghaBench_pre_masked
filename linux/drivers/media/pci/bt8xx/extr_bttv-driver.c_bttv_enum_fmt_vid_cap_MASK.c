
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct v4l2_fmtdesc*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
    struct v4l2_fmtdesc *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
