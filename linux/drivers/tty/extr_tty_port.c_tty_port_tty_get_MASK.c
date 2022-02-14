
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct tty_port {int lock; int tty; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct tty_struct* FUNC_2 (int ) ;

struct tty_struct *FUNC_3(struct tty_port *VAR_0)
{
 unsigned long VAR_1;
 struct tty_struct *VAR_2;

 FUNC_0(&VAR_0->lock, VAR_1);
 VAR_2 = FUNC_2(VAR_0->tty);
 FUNC_1(&VAR_0->lock, VAR_1);
 return VAR_2;
}
