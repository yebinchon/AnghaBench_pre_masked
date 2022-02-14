
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {TYPE_1__* port; scalar_t__ stopped; struct tty_struct* link; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
 struct tty_struct *VAR_3 = VAR_0->link;
 unsigned long VAR_4;

 if (VAR_0->stopped)
  return 0;

 if (VAR_2 > 0) {
  FUNC_0(&VAR_3->port->lock, VAR_4);

  VAR_2 = FUNC_3(VAR_3->port, VAR_1, VAR_2);

  if (VAR_2)
   FUNC_2(VAR_3->port);
  FUNC_1(&VAR_3->port->lock, VAR_4);
 }
 return VAR_2;
}
