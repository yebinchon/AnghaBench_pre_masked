
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_repr {int port; scalar_t__ dst; int netdev; int app; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct nfp_repr *VAR_0)
{
 FUNC_3(VAR_0->netdev);
 FUNC_1(VAR_0->app, VAR_0->netdev);
 FUNC_0((struct dst_entry *)VAR_0->dst);
 FUNC_2(VAR_0->port);
}
