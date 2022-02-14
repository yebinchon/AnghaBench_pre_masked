
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mlx5e_rss_params {int * rx_hash_fields; int indirection_rqt; int toeplitz_hash_key; int hfunc; } ;
typedef enum mlx5e_traffic_types { ____Placeholder_mlx5e_traffic_types } mlx5e_traffic_types ;
struct TYPE_2__ {int rx_hash_fields; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 TYPE_1__* VAR_3 ;

void FUNC_2(struct mlx5e_rss_params *VAR_4,
       u16 VAR_5)
{
 enum mlx5e_traffic_types VAR_6;

 VAR_4->hfunc = VAR_0;
 FUNC_1(VAR_4->toeplitz_hash_key,
       sizeof(VAR_4->toeplitz_hash_key));
 FUNC_0(VAR_4->indirection_rqt,
          VAR_1, VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  VAR_4->rx_hash_fields[VAR_6] =
   VAR_3[VAR_6].rx_hash_fields;
}
