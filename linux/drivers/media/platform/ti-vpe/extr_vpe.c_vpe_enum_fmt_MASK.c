
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int type; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct v4l2_fmtdesc*,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_fmtdesc *VAR_4)
{
 if (FUNC_0(VAR_4->type))
  return FUNC_1(VAR_4, VAR_1);

 return FUNC_1(VAR_4, VAR_0);
}
