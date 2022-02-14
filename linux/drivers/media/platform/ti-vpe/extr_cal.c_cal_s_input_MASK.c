
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cal_ctx {unsigned int input; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct cal_ctx* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 struct cal_ctx *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4 >= VAR_0)
  return -VAR_1;

 VAR_5->input = VAR_4;
 return 0;
}
