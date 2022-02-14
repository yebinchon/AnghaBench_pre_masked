
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_state; } ;
struct TYPE_2__ {int chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct sock*) ;

void FUNC_2(struct sock *VAR_3)
{


 if (VAR_3->sk_state & (VAR_0 | VAR_1)) {
  FUNC_0(&FUNC_1(VAR_3)->chan);
  VAR_3->sk_state = VAR_2;
 }
}
