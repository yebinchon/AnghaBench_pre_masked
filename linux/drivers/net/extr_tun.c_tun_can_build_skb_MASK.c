
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tun_struct {int flags; } ;
struct TYPE_4__ {TYPE_1__* sk; } ;
struct tun_file {TYPE_2__ socket; } ;
struct skb_shared_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ sk_sndbuf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_1(struct tun_struct *VAR_5, struct tun_file *VAR_6,
         int VAR_7, int VAR_8, bool VAR_9)
{
 if ((VAR_5->flags & VAR_4) != VAR_0)
  return 0;

 if (VAR_6->socket.sk->sk_sndbuf != VAR_1)
  return 0;

 if (!VAR_8)
  return 0;

 if (VAR_9)
  return 0;

 if (FUNC_0(VAR_7 + VAR_3) +
     FUNC_0(sizeof(struct skb_shared_info)) > VAR_2)
  return 0;

 return 1;
}
