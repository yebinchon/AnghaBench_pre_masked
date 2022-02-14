
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tun_struct {TYPE_2__* dev; } ;
struct TYPE_3__ {struct sock* sk; } ;
struct tun_file {TYPE_1__ socket; } ;
struct sock {int dummy; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sock*) ;

__attribute__((used)) static bool FUNC_1(struct tun_struct *VAR_1, struct tun_file *VAR_2)
{
 struct sock *VAR_3 = VAR_2->socket.sk;

 return (VAR_1->dev->flags & VAR_0) && FUNC_0(VAR_3);
}
