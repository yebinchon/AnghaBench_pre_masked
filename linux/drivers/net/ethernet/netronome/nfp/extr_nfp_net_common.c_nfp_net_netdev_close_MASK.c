
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net {int dummy; } ;
struct net_device {int name; } ;


 struct nfp_net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nfp_net*) ;
 int FUNC_2 (struct nfp_net*) ;
 int FUNC_3 (struct nfp_net*) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct nfp_net*,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0)
{
 struct nfp_net *VAR_1 = FUNC_0(VAR_0);



 FUNC_3(VAR_1);



 FUNC_1(VAR_1);
 FUNC_4(VAR_0, 0);



 FUNC_2(VAR_1);

 FUNC_5(VAR_1, "%s down", VAR_0->name);
 return 0;
}
