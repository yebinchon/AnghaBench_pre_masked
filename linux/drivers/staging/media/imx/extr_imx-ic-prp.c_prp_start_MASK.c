
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prp_priv {int csi_id; TYPE_1__* src_sd; struct imx_ic_priv* ic_priv; } ;
struct imx_ic_priv {int ipu; } ;
struct TYPE_2__ {int grp_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct prp_priv *VAR_1)
{
 struct imx_ic_priv *VAR_2 = VAR_1->ic_priv;
 bool VAR_3;


 VAR_3 = !!(VAR_1->src_sd->grp_id & VAR_0);

 FUNC_0(VAR_2->ipu, VAR_1->csi_id, VAR_3);

 return 0;
}
