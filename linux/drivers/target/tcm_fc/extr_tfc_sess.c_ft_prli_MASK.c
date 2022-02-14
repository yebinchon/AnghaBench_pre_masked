
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int port_id; } ;
struct fc_rport_priv {TYPE_1__ ids; int local_port; } ;
struct fc_els_spp {int spp_flags; } ;


 int FUNC_0 (int ,char*,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct fc_rport_priv*,int ,struct fc_els_spp const*,struct fc_els_spp*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct fc_rport_priv *VAR_1, u32 VAR_2,
     const struct fc_els_spp *VAR_3, struct fc_els_spp *VAR_4)
{
 int VAR_5;

 FUNC_2(&VAR_0);
 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_3(&VAR_0);
 FUNC_0(VAR_1->local_port, "port_id %x flags %x ret %x\n",
       VAR_1->ids.port_id, VAR_3 ? VAR_3->spp_flags : 0, VAR_5);
 return VAR_5;
}
