
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int port_ids; } ;
struct nfp_flower_priv {TYPE_1__ internal_ports; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct net_device*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct nfp_flower_priv*,struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct nfp_app *VAR_3, struct net_device *VAR_4)
{
 struct nfp_flower_priv *VAR_5 = VAR_3->priv;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_5, VAR_4);
 if (VAR_6 > 0)
  return VAR_6;

 FUNC_1(VAR_0);
 FUNC_4(&VAR_5->internal_ports.lock);
 VAR_6 = FUNC_0(&VAR_5->internal_ports.port_ids, VAR_4,
         VAR_2, VAR_1, VAR_0);
 FUNC_5(&VAR_5->internal_ports.lock);
 FUNC_2();

 return VAR_6;
}
