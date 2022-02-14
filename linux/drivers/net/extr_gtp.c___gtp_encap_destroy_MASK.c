
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {struct gtp_dev* sk_user_data; } ;
struct gtp_dev {int * sk1u; struct sock* sk0; } ;
struct TYPE_2__ {scalar_t__ encap_type; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0)
{
 struct gtp_dev *VAR_1;

 FUNC_0(VAR_0);
 VAR_1 = VAR_0->sk_user_data;
 if (VAR_1) {
  if (VAR_1->sk0 == VAR_0)
   VAR_1->sk0 = ((void*)0);
  else
   VAR_1->sk1u = ((void*)0);
  FUNC_4(VAR_0)->encap_type = 0;
  FUNC_1(VAR_0, ((void*)0));
  FUNC_3(VAR_0);
 }
 FUNC_2(VAR_0);
}
