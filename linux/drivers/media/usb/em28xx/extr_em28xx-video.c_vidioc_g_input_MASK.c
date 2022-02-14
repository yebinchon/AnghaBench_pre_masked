
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct em28xx {unsigned int ctl_input; } ;


 struct em28xx* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, unsigned int *VAR_2)
{
 struct em28xx *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->ctl_input;

 return 0;
}
