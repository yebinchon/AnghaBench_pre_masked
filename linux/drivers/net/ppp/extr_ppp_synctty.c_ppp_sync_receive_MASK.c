
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct syncppp {int tsk; int rqueue; int recv_lock; } ;


 int FUNC_0 (struct syncppp*,unsigned char const*,char*,int) ;
 int FUNC_1 (int *) ;
 struct syncppp* FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct syncppp*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct tty_struct*) ;

__attribute__((used)) static void
FUNC_8(struct tty_struct *VAR_0, const unsigned char *VAR_1,
    char *VAR_2, int VAR_3)
{
 struct syncppp *VAR_4 = FUNC_2(VAR_0);
 unsigned long VAR_5;

 if (!VAR_4)
  return;
 FUNC_4(&VAR_4->recv_lock, VAR_5);
 FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
 FUNC_5(&VAR_4->recv_lock, VAR_5);
 if (!FUNC_1(&VAR_4->rqueue))
  FUNC_6(&VAR_4->tsk);
 FUNC_3(VAR_4);
 FUNC_7(VAR_0);
}
