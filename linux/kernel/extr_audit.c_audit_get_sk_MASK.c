
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net {int dummy; } ;
struct audit_net {struct sock* sk; } ;


 int VAR_0 ;
 struct audit_net* FUNC_0 (struct net const*,int ) ;

__attribute__((used)) static struct sock *FUNC_1(const struct net *VAR_1)
{
 struct audit_net *VAR_2;

 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 return VAR_2->sk;
}
