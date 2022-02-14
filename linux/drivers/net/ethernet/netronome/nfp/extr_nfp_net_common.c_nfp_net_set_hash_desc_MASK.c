
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net_rx_hash {int hash; int hash_type; } ;
struct TYPE_2__ {int flags; } ;
struct nfp_net_rx_desc {TYPE_1__ rxd; } ;
struct nfp_meta_parsed {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*,struct nfp_meta_parsed*,int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_1, struct nfp_meta_parsed *VAR_2,
        void *VAR_3, struct nfp_net_rx_desc *VAR_4)
{
 struct nfp_net_rx_hash *VAR_5 = VAR_3;

 if (!(VAR_4->rxd.flags & VAR_0))
  return;

 FUNC_1(VAR_1, VAR_2, FUNC_0(&VAR_5->hash_type),
    &VAR_5->hash);
}
