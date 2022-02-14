
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct sock {TYPE_1__* sk_socket; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_4)
{
 wait_queue_head_t *VAR_5;

 if (!FUNC_1(VAR_4) ||
     !FUNC_2(VAR_3, &VAR_4->sk_socket->flags))
  return;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 && FUNC_3(VAR_5))
  FUNC_4(VAR_5, VAR_0 | VAR_2 | VAR_1);
}
