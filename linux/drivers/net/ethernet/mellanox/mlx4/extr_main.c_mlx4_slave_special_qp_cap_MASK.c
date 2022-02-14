
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_func_cap {int phys_port_id; int spec_qps; } ;
struct mlx4_caps {int num_ports; int * pkey_table_len; int * gid_table_len; int * phys_port_id; int * port_type; int * port_mask; int * spec_qps; } ;
struct mlx4_dev {struct mlx4_caps caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct mlx4_func_cap*) ;
 struct mlx4_func_cap* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mlx4_dev*,int,struct mlx4_func_cap*) ;
 int FUNC_4 (struct mlx4_dev*,char*,...) ;
 int FUNC_5 (struct mlx4_dev*,int,int *,int *) ;
 int FUNC_6 (struct mlx4_dev*) ;

__attribute__((used)) static int FUNC_7(struct mlx4_dev *VAR_2)
{
 struct mlx4_func_cap *VAR_3 = ((void*)0);
 struct mlx4_caps *VAR_4 = &VAR_2->caps;
 int VAR_5, VAR_6 = 0;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 VAR_4->spec_qps = FUNC_0(VAR_4->num_ports, sizeof(*VAR_4->spec_qps), VAR_1);

 if (!VAR_3 || !VAR_4->spec_qps) {
  FUNC_4(VAR_2, "Failed to allocate memory for special qps cap\n");
  VAR_6 = -VAR_0;
  goto err_mem;
 }

 for (VAR_5 = 1; VAR_5 <= VAR_4->num_ports; ++VAR_5) {
  VAR_6 = FUNC_3(VAR_2, VAR_5, VAR_3);
  if (VAR_6) {
   FUNC_4(VAR_2, "QUERY_FUNC_CAP port command failed for port %d, aborting (%d)\n",
     VAR_5, VAR_6);
   goto err_mem;
  }
  VAR_4->spec_qps[VAR_5 - 1] = VAR_3->spec_qps;
  VAR_4->port_mask[VAR_5] = VAR_4->port_type[VAR_5];
  VAR_4->phys_port_id[VAR_5] = VAR_3->phys_port_id;
  VAR_6 = FUNC_5(VAR_2, VAR_5,
            &VAR_4->gid_table_len[VAR_5],
            &VAR_4->pkey_table_len[VAR_5]);
  if (VAR_6) {
   FUNC_4(VAR_2, "QUERY_PORT command failed for port %d, aborting (%d)\n",
     VAR_5, VAR_6);
   goto err_mem;
  }
 }

err_mem:
 if (VAR_6)
  FUNC_6(VAR_2);
 FUNC_1(VAR_3);
 return VAR_6;
}
