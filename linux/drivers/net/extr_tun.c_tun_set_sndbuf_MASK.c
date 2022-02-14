
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tun_struct {int numqueues; int sndbuf; int * tfiles; } ;
struct TYPE_4__ {TYPE_1__* sk; } ;
struct tun_file {TYPE_2__ socket; } ;
struct TYPE_3__ {int sk_sndbuf; } ;


 struct tun_file* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct tun_struct *VAR_0)
{
 struct tun_file *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->numqueues; VAR_2++) {
  VAR_1 = FUNC_0(VAR_0->tfiles[VAR_2]);
  VAR_1->socket.sk->sk_sndbuf = VAR_0->sndbuf;
 }
}
