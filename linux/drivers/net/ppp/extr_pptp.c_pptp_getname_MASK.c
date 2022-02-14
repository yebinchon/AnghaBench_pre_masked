
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {int sk; } ;
struct TYPE_8__ {int pptp; } ;
struct sockaddr_pppox {TYPE_4__ sa_addr; int sa_protocol; int sa_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_5__ {int src_addr; } ;
struct TYPE_6__ {TYPE_1__ pptp; } ;
struct TYPE_7__ {TYPE_2__ proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr*,struct sockaddr_pppox*,int) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 TYPE_3__* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_2, struct sockaddr *VAR_3,
 int VAR_4)
{
 int VAR_5 = sizeof(struct sockaddr_pppox);
 struct sockaddr_pppox VAR_6;

 FUNC_1(&VAR_6.sa_addr, 0, sizeof(VAR_6.sa_addr));

 VAR_6.sa_family = VAR_0;
 VAR_6.sa_protocol = VAR_1;
 VAR_6.sa_addr.pptp = FUNC_2(VAR_2->sk)->proto.pptp.src_addr;

 FUNC_0(VAR_3, &VAR_6, VAR_5);

 return VAR_5;
}
