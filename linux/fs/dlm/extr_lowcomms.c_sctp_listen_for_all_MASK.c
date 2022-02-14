
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {TYPE_2__* ops; TYPE_1__* sk; } ;
struct connection {struct socket* sock; int connect_action; int rx_action; } ;
typedef int one ;
typedef int bufsize ;
struct TYPE_8__ {int ci_tcp_port; } ;
struct TYPE_7__ {int ss_family; } ;
struct TYPE_6__ {int (* listen ) (struct socket*,int) ;} ;
struct TYPE_5__ {int sk_callback_lock; int sk_data_ready; struct connection* sk_user_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__ VAR_10 ;
 TYPE_3__** VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct socket*,int ,int ,char*,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_13 ;
 struct connection* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct socket*) ;
 int VAR_14 ;
 scalar_t__ FUNC_4 (struct connection*,int ) ;
 int VAR_15 ;
 int FUNC_5 (int *,int ,int ,int ,struct socket**) ;
 int FUNC_6 (struct socket*) ;
 int FUNC_7 (struct socket*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(void)
{
 struct socket *VAR_16 = ((void*)0);
 int VAR_17 = -VAR_0;
 struct connection *VAR_18 = FUNC_2(0, VAR_2);
 int VAR_19 = VAR_4;
 int VAR_20 = 1;

 if (!VAR_18)
  return -VAR_1;

 FUNC_1("Using SCTP for communications");

 VAR_17 = FUNC_5(&VAR_12, VAR_11[0]->ss_family,
      VAR_6, VAR_3, &VAR_16);
 if (VAR_17 < 0) {
  FUNC_1("Can't create comms socket, check SCTP is loaded");
  goto out;
 }

 VAR_17 = FUNC_0(VAR_16, VAR_8, VAR_9,
     (char *)&VAR_19, sizeof(VAR_19));
 if (VAR_17)
  FUNC_1("Error increasing buffer space on socket %d", VAR_17);

 VAR_17 = FUNC_0(VAR_16, VAR_7, VAR_5, (char *)&VAR_20,
       sizeof(VAR_20));
 if (VAR_17 < 0)
  FUNC_1("Could not set SCTP NODELAY error %d\n", VAR_17);

 FUNC_8(&VAR_16->sk->sk_callback_lock);

 VAR_16->sk->sk_user_data = VAR_18;
 FUNC_3(VAR_16);
 VAR_18->sock = VAR_16;
 VAR_18->sock->sk->sk_data_ready = VAR_13;
 VAR_18->rx_action = VAR_14;
 VAR_18->connect_action = VAR_15;

 FUNC_9(&VAR_16->sk->sk_callback_lock);


 if (FUNC_4(VAR_18, VAR_10.ci_tcp_port))
  goto create_delsock;

 VAR_17 = VAR_16->ops->listen(VAR_16, 5);
 if (VAR_17 < 0) {
  FUNC_1("Can't set socket listening");
  goto create_delsock;
 }

 return 0;

create_delsock:
 FUNC_6(VAR_16);
 VAR_18->sock = ((void*)0);
out:
 return VAR_17;
}
