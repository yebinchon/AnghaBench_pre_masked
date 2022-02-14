
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_tirc_config {int l3_prot_type; int l4_prot_type; int rx_hash_fields; } ;
struct mlx5e_rss_params {scalar_t__ hfunc; int toeplitz_hash_key; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (void*,void*,int ) ;
 size_t FUNC_1 (void*,int ) ;
 int FUNC_2 (void*,void*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (void*,int ,size_t) ;
 int FUNC_4 (scalar_t__) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_5(struct mlx5e_rss_params *VAR_10,
        const struct mlx5e_tirc_config *VAR_11,
        void *VAR_12, bool VAR_13)
{
 void *VAR_14 = VAR_13 ? FUNC_0(VAR_12, VAR_12, VAR_4) :
        FUNC_0(VAR_12, VAR_12, VAR_5);

 FUNC_2(VAR_12, VAR_12, VAR_6, FUNC_4(VAR_10->hfunc));
 if (VAR_10->hfunc == VAR_0) {
  void *VAR_15 = FUNC_0(VAR_12, VAR_12,
          VAR_8);
  size_t VAR_16 = FUNC_1(VAR_12,
            VAR_8);

  FUNC_2(VAR_12, VAR_12, VAR_7, 1);
  FUNC_3(VAR_15, VAR_10->toeplitz_hash_key, VAR_16);
 }
 FUNC_2(VAR_3, VAR_14, VAR_1,
   VAR_11->l3_prot_type);
 FUNC_2(VAR_3, VAR_14, VAR_2,
   VAR_11->l4_prot_type);
 FUNC_2(VAR_3, VAR_14, VAR_9,
   VAR_11->rx_hash_fields);
}
