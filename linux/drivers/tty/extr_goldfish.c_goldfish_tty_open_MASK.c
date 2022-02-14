
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {size_t index; } ;
struct goldfish_tty {int port; } ;
struct file {int dummy; } ;


 struct goldfish_tty* VAR_0 ;
 int FUNC_0 (int *,struct tty_struct*,struct file*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_1, struct file *VAR_2)
{
 struct goldfish_tty *VAR_3 = &VAR_0[VAR_1->index];
 return FUNC_0(&VAR_3->port, VAR_1, VAR_2);
}
