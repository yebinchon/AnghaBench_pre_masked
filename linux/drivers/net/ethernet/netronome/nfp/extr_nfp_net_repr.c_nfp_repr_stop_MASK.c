
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_repr {int app; } ;
struct net_device {int dummy; } ;


 struct nfp_repr* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct nfp_repr*) ;
 int FUNC_2 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct nfp_repr *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->app, VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_0, 0);
 return 0;
}
