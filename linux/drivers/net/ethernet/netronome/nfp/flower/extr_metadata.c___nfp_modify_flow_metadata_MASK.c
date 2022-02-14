
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_flower_priv {int flower_version; } ;
struct TYPE_2__ {int flow_version; int flags; } ;
struct nfp_fl_payload {TYPE_1__ meta; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct nfp_flower_priv *VAR_1,
    struct nfp_fl_payload *VAR_2)
{
 VAR_2->meta.flags &= ~VAR_0;
 VAR_2->meta.flow_version = FUNC_0(VAR_1->flower_version);
 VAR_1->flower_version++;
}
