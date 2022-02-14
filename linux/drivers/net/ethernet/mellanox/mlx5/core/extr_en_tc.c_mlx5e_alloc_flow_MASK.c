
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_tc_flow_parse_attr {int dummy; } ;
struct mlx5e_tc_flow {unsigned long flags; int init_done; int refcnt; int hairpin; int mod_hdr; TYPE_1__* encaps; struct mlx5e_priv* priv; int cookie; } ;
struct mlx5e_priv {int dummy; } ;
struct flow_cls_offload {int cookie; } ;
struct TYPE_2__ {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5e_tc_flow*) ;
 int FUNC_3 (struct mlx5e_tc_flow_parse_attr*) ;
 struct mlx5e_tc_flow_parse_attr* FUNC_4 (int,int ) ;
 struct mlx5e_tc_flow* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int
FUNC_7(struct mlx5e_priv *VAR_3, int VAR_4,
   struct flow_cls_offload *VAR_5, unsigned long VAR_6,
   struct mlx5e_tc_flow_parse_attr **VAR_7,
   struct mlx5e_tc_flow **VAR_8)
{
 struct mlx5e_tc_flow_parse_attr *VAR_9;
 struct mlx5e_tc_flow *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_5(sizeof(*VAR_10) + VAR_4, VAR_1);
 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1);
 if (!VAR_9 || !VAR_10) {
  VAR_12 = -VAR_0;
  goto err_free;
 }

 VAR_10->cookie = VAR_5->cookie;
 VAR_10->flags = VAR_6;
 VAR_10->priv = VAR_3;
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
  FUNC_0(&VAR_10->encaps[VAR_11].list);
 FUNC_0(&VAR_10->mod_hdr);
 FUNC_0(&VAR_10->hairpin);
 FUNC_6(&VAR_10->refcnt, 1);
 FUNC_1(&VAR_10->init_done);

 *VAR_8 = VAR_10;
 *VAR_7 = VAR_9;

 return 0;

err_free:
 FUNC_2(VAR_10);
 FUNC_3(VAR_9);
 return VAR_12;
}
