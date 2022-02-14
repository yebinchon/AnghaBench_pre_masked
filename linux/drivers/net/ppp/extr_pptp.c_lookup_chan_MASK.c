
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_5__ {scalar_t__ s_addr; } ;
struct TYPE_6__ {TYPE_2__ sin_addr; } ;
struct pptp_opt {TYPE_3__ dst_addr; } ;
struct TYPE_4__ {struct pptp_opt pptp; } ;
struct pppox_sock {TYPE_1__ proto; } ;
typedef scalar_t__ __be32 ;


 int * VAR_0 ;
 struct pppox_sock* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct pppox_sock*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct pppox_sock *FUNC_5(u16 VAR_1, __be32 VAR_2)
{
 struct pppox_sock *VAR_3;
 struct pptp_opt *VAR_4;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_0[VAR_1]);
 if (VAR_3) {
  VAR_4 = &VAR_3->proto.pptp;
  if (VAR_4->dst_addr.sin_addr.s_addr != VAR_2)
   VAR_3 = ((void*)0);
  else
   FUNC_4(FUNC_3(VAR_3));
 }
 FUNC_2();

 return VAR_3;
}
