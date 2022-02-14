
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ack; int lock; } ;
struct nfp_flower_priv {TYPE_1__ mtu_conf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct nfp_flower_priv *VAR_0)
{
 bool VAR_1;

 FUNC_0(&VAR_0->mtu_conf.lock);
 VAR_1 = VAR_0->mtu_conf.ack;
 FUNC_1(&VAR_0->mtu_conf.lock);

 return VAR_1;
}
