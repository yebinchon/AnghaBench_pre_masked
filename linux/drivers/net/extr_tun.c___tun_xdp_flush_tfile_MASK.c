
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* sk; } ;
struct tun_file {int flags; TYPE_1__ socket; int fasync; } ;
struct TYPE_4__ {int (* sk_data_ready ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct tun_file *VAR_3)
{

 if (VAR_3->flags & VAR_2)
  FUNC_0(&VAR_3->fasync, VAR_1, VAR_0);
 VAR_3->socket.sk->sk_data_ready(VAR_3->socket.sk);
}
