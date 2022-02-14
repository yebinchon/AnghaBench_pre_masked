
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nfp_tun_offloaded_mac {int dummy; } ;
struct TYPE_2__ {int offloaded_macs; } ;
struct nfp_flower_priv {TYPE_1__ tun; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 int VAR_0 ;
 struct nfp_tun_offloaded_mac* FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static struct nfp_tun_offloaded_mac *
FUNC_1(struct nfp_app *VAR_1, u8 *VAR_2)
{
 struct nfp_flower_priv *VAR_3 = VAR_1->priv;

 return FUNC_0(&VAR_3->tun.offloaded_macs, VAR_2,
          VAR_0);
}
