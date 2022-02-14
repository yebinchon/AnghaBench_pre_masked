
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qpl_map_size; void* qpl_id_map; } ;
struct gve_priv {void* qpls; TYPE_1__ qpl_cfg; int rx_pages_per_qpl; int tx_pages_per_qpl; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct gve_priv*,int,int ) ;
 int FUNC_2 (struct gve_priv*,int) ;
 int FUNC_3 (struct gve_priv*) ;
 int FUNC_4 (struct gve_priv*) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct gve_priv *VAR_3)
{
 int VAR_4 = FUNC_4(VAR_3) + FUNC_3(VAR_3);
 int VAR_5, VAR_6;
 int VAR_7;

 VAR_3->qpls = FUNC_6(VAR_4 * sizeof(*VAR_3->qpls), VAR_2);
 if (!VAR_3->qpls)
  return -VAR_1;

 for (VAR_5 = 0; VAR_5 < FUNC_4(VAR_3); VAR_5++) {
  VAR_7 = FUNC_1(VAR_3, VAR_5,
      VAR_3->tx_pages_per_qpl);
  if (VAR_7)
   goto free_qpls;
 }
 for (; VAR_5 < VAR_4; VAR_5++) {
  VAR_7 = FUNC_1(VAR_3, VAR_5,
      VAR_3->rx_pages_per_qpl);
  if (VAR_7)
   goto free_qpls;
 }

 VAR_3->qpl_cfg.qpl_map_size = FUNC_0(VAR_4) *
         sizeof(unsigned long) * VAR_0;
 VAR_3->qpl_cfg.qpl_id_map = FUNC_6(FUNC_0(VAR_4) *
         sizeof(unsigned long), VAR_2);
 if (!VAR_3->qpl_cfg.qpl_id_map) {
  VAR_7 = -VAR_1;
  goto free_qpls;
 }

 return 0;

free_qpls:
 for (VAR_6 = 0; VAR_6 <= VAR_5; VAR_6++)
  FUNC_2(VAR_3, VAR_6);
 FUNC_5(VAR_3->qpls);
 return VAR_7;
}
