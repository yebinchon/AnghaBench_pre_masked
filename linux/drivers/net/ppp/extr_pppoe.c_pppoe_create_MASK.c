
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int * ops; int state; } ;
struct sock {int sk_protocol; int sk_family; int sk_type; int sk_state; int sk_backlog_rcv; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int padt_work; } ;
struct TYPE_5__ {TYPE_1__ pppoe; } ;
struct TYPE_6__ {TYPE_2__ proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* FUNC_1 (struct sock*) ;
 struct sock* FUNC_2 (struct net*,int ,int ,int *,int) ;
 int FUNC_3 (struct socket*,struct sock*) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_11, struct socket *VAR_12, int VAR_13)
{
 struct sock *VAR_14;

 VAR_14 = FUNC_2(VAR_11, VAR_2, VAR_1, &VAR_9, VAR_13);
 if (!VAR_14)
  return -VAR_0;

 FUNC_3(VAR_12, VAR_14);

 VAR_12->state = VAR_6;
 VAR_12->ops = &VAR_7;

 VAR_14->sk_backlog_rcv = VAR_8;
 VAR_14->sk_state = VAR_3;
 VAR_14->sk_type = VAR_5;
 VAR_14->sk_family = VAR_2;
 VAR_14->sk_protocol = VAR_4;

 FUNC_0(&FUNC_1(VAR_14)->proto.pppoe.padt_work,
    VAR_10);

 return 0;
}
