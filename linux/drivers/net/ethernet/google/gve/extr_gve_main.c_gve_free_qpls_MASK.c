
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qpl_id_map; } ;
struct gve_priv {int qpls; TYPE_1__ qpl_cfg; } ;


 int FUNC_0 (struct gve_priv*,int) ;
 int FUNC_1 (struct gve_priv*) ;
 int FUNC_2 (struct gve_priv*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct gve_priv *VAR_0)
{
 int VAR_1 = FUNC_2(VAR_0) + FUNC_1(VAR_0);
 int VAR_2;

 FUNC_3(VAR_0->qpl_cfg.qpl_id_map);

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0(VAR_0, VAR_2);

 FUNC_3(VAR_0->qpls);
}
