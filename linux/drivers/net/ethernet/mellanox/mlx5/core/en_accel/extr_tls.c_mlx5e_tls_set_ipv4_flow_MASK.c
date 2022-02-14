
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int dummy; } ;
struct inet_sock {int inet_rcv_saddr; int inet_daddr; } ;
struct TYPE_5__ {int ipv4; } ;
struct TYPE_8__ {TYPE_1__ ipv4_layout; } ;
struct TYPE_6__ {int ipv4; } ;
struct TYPE_7__ {TYPE_2__ ipv4_layout; } ;


 int FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,void*,int ,int ) ;
 TYPE_4__ VAR_0 ;
 struct inet_sock* FUNC_3 (struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int *,int ) ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(void *VAR_6, struct sock *VAR_7)
{
 struct inet_sock *VAR_8 = FUNC_3(VAR_7);

 FUNC_2(VAR_5, VAR_6, VAR_3, 0);
 FUNC_4(FUNC_0(VAR_5, VAR_6, VAR_0),
        &VAR_8->inet_daddr, FUNC_1(VAR_2, VAR_1));
 FUNC_4(FUNC_0(VAR_5, VAR_6, VAR_4),
        &VAR_8->inet_rcv_saddr, FUNC_1(VAR_2, VAR_1));
}
