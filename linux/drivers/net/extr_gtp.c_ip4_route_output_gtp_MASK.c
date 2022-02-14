
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_protocol; int sk_bound_dev_if; } ;
struct rtable {int dummy; } ;
struct flowi4 {int flowi4_proto; int flowi4_tos; int saddr; int daddr; int flowi4_oif; } ;
typedef int __be32 ;
struct TYPE_2__ {int inet_saddr; } ;


 int FUNC_0 (struct sock const*) ;
 TYPE_1__* FUNC_1 (struct sock const*) ;
 struct rtable* FUNC_2 (int ,struct flowi4*) ;
 int FUNC_3 (struct flowi4*,int ,int) ;
 int FUNC_4 (struct sock const*) ;

__attribute__((used)) static struct rtable *FUNC_5(struct flowi4 *VAR_0,
        const struct sock *VAR_1,
        __be32 VAR_2)
{
 FUNC_3(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->flowi4_oif = VAR_1->sk_bound_dev_if;
 VAR_0->daddr = VAR_2;
 VAR_0->saddr = FUNC_1(VAR_1)->inet_saddr;
 VAR_0->flowi4_tos = FUNC_0(VAR_1);
 VAR_0->flowi4_proto = VAR_1->sk_protocol;

 return FUNC_2(FUNC_4(VAR_1), VAR_0);
}
