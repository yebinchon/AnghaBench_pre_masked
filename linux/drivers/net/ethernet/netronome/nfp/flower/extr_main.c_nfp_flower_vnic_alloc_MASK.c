
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int netdev; } ;
struct nfp_net {int vnic_no_name; int port; TYPE_1__ dp; } ;
struct nfp_app {int cpp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfp_app*,int ,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct nfp_app *VAR_1, struct nfp_net *VAR_2,
     unsigned int VAR_3)
{
 if (VAR_3 > 0) {
  FUNC_4(VAR_1->cpp, "FlowerNIC doesn't support more than one data vNIC\n");
  goto err_invalid_port;
 }

 FUNC_1(VAR_2->dp.netdev);
 FUNC_2(VAR_2->dp.netdev);
 VAR_2->vnic_no_name = 1;

 return 0;

err_invalid_port:
 VAR_2->port = FUNC_3(VAR_1, VAR_0, VAR_2->dp.netdev);
 return FUNC_0(VAR_2->port);
}
