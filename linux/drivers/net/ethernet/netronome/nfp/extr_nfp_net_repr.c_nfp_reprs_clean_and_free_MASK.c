
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_reprs {unsigned int num_reprs; } ;
struct nfp_app {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct nfp_reprs*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 struct net_device* FUNC_3 (struct nfp_app*,struct nfp_reprs*,unsigned int) ;

void FUNC_4(struct nfp_app *VAR_0, struct nfp_reprs *VAR_1)
{
 struct net_device *VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_reprs; VAR_3++) {
  VAR_2 = FUNC_3(VAR_0, VAR_1, VAR_3);
  if (VAR_2)
   FUNC_2(FUNC_1(VAR_2));
 }

 FUNC_0(VAR_1);
}
