
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_conn {int tx_half_close_comp; TYPE_2__* sock; } ;
struct TYPE_4__ {TYPE_1__* sk; } ;
struct TYPE_3__ {int sk_shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct iscsi_conn *VAR_4)
{
 if ((VAR_4->sock->sk->sk_shutdown & VAR_3) ||
     (VAR_4->sock->sk->sk_shutdown & VAR_2)) {
  FUNC_0(
     &VAR_4->tx_half_close_comp,
     VAR_1 * VAR_0);
 }
}
