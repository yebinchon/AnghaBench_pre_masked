
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tun_struct {TYPE_3__* dev; } ;
struct TYPE_4__ {struct sock* sk; } ;
struct tun_file {int tx_ring; TYPE_1__ socket; } ;
struct sock {TYPE_2__* sk_socket; } ;
struct file {struct tun_file* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_6__ {scalar_t__ reg_state; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct file*,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,struct tun_struct*,char*) ;
 struct tun_struct* FUNC_5 (struct tun_file*) ;
 int FUNC_6 (struct tun_struct*) ;
 scalar_t__ FUNC_7 (struct tun_struct*,struct tun_file*) ;

__attribute__((used)) static __poll_t FUNC_8(struct file *VAR_8, poll_table *VAR_9)
{
 struct tun_file *VAR_10 = VAR_8->private_data;
 struct tun_struct *VAR_11 = FUNC_5(VAR_10);
 struct sock *VAR_12;
 __poll_t VAR_13 = 0;

 if (!VAR_11)
  return VAR_0;

 VAR_12 = VAR_10->socket.sk;

 FUNC_4(VAR_5, VAR_11, "tun_chr_poll\n");

 FUNC_0(VAR_8, FUNC_2(VAR_12), VAR_9);

 if (!FUNC_1(&VAR_10->tx_ring))
  VAR_13 |= VAR_1 | VAR_3;






 if (FUNC_7(VAR_11, VAR_10) ||
     (!FUNC_3(VAR_7, &VAR_12->sk_socket->flags) &&
      FUNC_7(VAR_11, VAR_10)))
  VAR_13 |= VAR_2 | VAR_4;

 if (VAR_11->dev->reg_state != VAR_6)
  VAR_13 = VAR_0;

 FUNC_6(VAR_11);
 return VAR_13;
}
