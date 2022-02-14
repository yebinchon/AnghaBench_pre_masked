
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_tunnel_sock_cfg {int encap_type; int encap_destroy; int encap_rcv; struct gtp_dev* sk_user_data; int * member_0; } ;
struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_protocol; scalar_t__ sk_user_data; } ;
struct gtp_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sock* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,struct socket*,struct udp_tunnel_sock_cfg*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 struct socket* FUNC_7 (int,int*) ;
 int FUNC_8 (struct socket*) ;

__attribute__((used)) static struct sock *FUNC_9(int VAR_5, int VAR_6,
         struct gtp_dev *VAR_7)
{
 struct udp_tunnel_sock_cfg VAR_8 = {((void*)0)};
 struct socket *VAR_9;
 struct sock *VAR_10;
 int VAR_11;

 FUNC_2("enable gtp on %d, %d\n", VAR_5, VAR_6);

 VAR_9 = FUNC_7(VAR_5, &VAR_11);
 if (!VAR_9) {
  FUNC_2("gtp socket fd=%d not found\n", VAR_5);
  return ((void*)0);
 }

 if (VAR_9->sk->sk_protocol != VAR_2) {
  FUNC_2("socket fd=%d not UDP\n", VAR_5);
  VAR_10 = FUNC_0(-VAR_1);
  goto out_sock;
 }

 FUNC_1(VAR_9->sk);
 if (VAR_9->sk->sk_user_data) {
  VAR_10 = FUNC_0(-VAR_0);
  goto out_sock;
 }

 VAR_10 = VAR_9->sk;
 FUNC_5(VAR_10);

 VAR_8.sk_user_data = VAR_7;
 VAR_8.encap_type = VAR_6;
 VAR_8.encap_rcv = VAR_4;
 VAR_8.encap_destroy = VAR_3;

 FUNC_4(FUNC_6(VAR_9->sk), VAR_9, &VAR_8);

out_sock:
 FUNC_3(VAR_9->sk);
 FUNC_8(VAR_9);
 return VAR_10;
}
