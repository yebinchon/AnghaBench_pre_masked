
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; int sk_dst_cache; int sk_receive_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_1)
{
 if (!(VAR_1->sk_state & VAR_0)) {
  FUNC_0(FUNC_2(VAR_1));
  FUNC_3(VAR_1);
 }
 FUNC_5(&VAR_1->sk_receive_queue);
 FUNC_1(FUNC_4(VAR_1->sk_dst_cache, 1));
}
