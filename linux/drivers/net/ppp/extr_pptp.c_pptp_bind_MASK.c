
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_2__ {int pptp; } ;
struct sockaddr_pppox {TYPE_1__ sa_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_state; } ;
struct pppox_sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct pppox_sock*,int *) ;
 int FUNC_1 (struct sock*) ;
 struct pppox_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_5, struct sockaddr *VAR_6,
 int VAR_7)
{
 struct sock *VAR_8 = VAR_5->sk;
 struct sockaddr_pppox *VAR_9 = (struct sockaddr_pppox *) VAR_6;
 struct pppox_sock *VAR_10 = FUNC_2(VAR_8);
 int VAR_11 = 0;

 if (VAR_7 < sizeof(struct sockaddr_pppox))
  return -VAR_2;

 FUNC_1(VAR_8);

 if (VAR_8->sk_state & VAR_4) {
  VAR_11 = -VAR_0;
  goto out;
 }

 if (VAR_8->sk_state & VAR_3) {
  VAR_11 = -VAR_1;
  goto out;
 }

 if (FUNC_0(VAR_10, &VAR_9->sa_addr.pptp))
  VAR_11 = -VAR_1;
 else
  VAR_8->sk_state |= VAR_3;

out:
 FUNC_3(VAR_8);
 return VAR_11;
}
