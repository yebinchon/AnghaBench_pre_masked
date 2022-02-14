
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_host {struct net* net; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net*) ;
 int FUNC_1 (struct nlm_host*) ;

void FUNC_2(struct nlm_host *VAR_0)
{
 struct net *VAR_1 = VAR_0->net;

 FUNC_1(VAR_0);
 FUNC_0(VAR_1);
}
