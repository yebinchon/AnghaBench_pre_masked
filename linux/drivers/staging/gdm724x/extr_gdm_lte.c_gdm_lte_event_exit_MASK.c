
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ref_cnt; TYPE_1__* sock; } ;
struct TYPE_3__ {int sk_socket; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(void)
{
 if (VAR_0.sock && --VAR_0.ref_cnt == 0) {
  FUNC_0(VAR_0.sock->sk_socket);
  VAR_0.sock = ((void*)0);
 }
}
