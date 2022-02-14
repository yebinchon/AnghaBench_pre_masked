
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int wait; } ;
struct TYPE_6__ {TYPE_2__ wq; TYPE_1__* sk; } ;
struct tun_file {TYPE_3__ socket; int tx_ring; } ;
struct TYPE_4__ {int sk_shutdown; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_6 ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_7 ;

__attribute__((used)) static void *FUNC_8(struct tun_file *VAR_8, int VAR_9, int *VAR_10)
{
 FUNC_0(VAR_7, VAR_6);
 void *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 VAR_11 = FUNC_3(&VAR_8->tx_ring);
 if (VAR_11)
  goto out;
 if (VAR_9) {
  VAR_12 = -VAR_0;
  goto out;
 }

 FUNC_2(&VAR_8->socket.wq.wait, &VAR_7);

 while (1) {
  FUNC_6(VAR_4);
  VAR_11 = FUNC_3(&VAR_8->tx_ring);
  if (VAR_11)
   break;
  if (FUNC_7(VAR_6)) {
   VAR_12 = -VAR_2;
   break;
  }
  if (VAR_8->socket.sk->sk_shutdown & VAR_3) {
   VAR_12 = -VAR_1;
   break;
  }

  FUNC_5();
 }

 FUNC_1(VAR_5);
 FUNC_4(&VAR_8->socket.wq.wait, &VAR_7);

out:
 *VAR_10 = VAR_12;
 return VAR_11;
}
