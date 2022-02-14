
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int dummy; } ;
struct hvc_struct {int tty_resize; struct winsize ws; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct hvc_struct *VAR_0, struct winsize VAR_1)
{
 VAR_0->ws = VAR_1;
 FUNC_0(&VAR_0->tty_resize);
}
