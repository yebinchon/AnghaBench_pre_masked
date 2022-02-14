
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct page {int dummy; } ;
struct TYPE_2__ {struct mlx5e_tx_wqe_info* wqe_info; } ;
struct mlx5e_txqsq {TYPE_1__ db; } ;
struct mlx5e_tx_wqe_info {struct page* resync_dump_frag_page; int num_bytes; int num_wqebbs; } ;


 int FUNC_0 (struct mlx5e_tx_wqe_info*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct mlx5e_txqsq *VAR_0,
         u16 VAR_1, u8 VAR_2, u32 VAR_3,
         struct page *VAR_4)
{
 struct mlx5e_tx_wqe_info *VAR_5 = &VAR_0->db.wqe_info[VAR_1];

 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->num_wqebbs = VAR_2;
 VAR_5->num_bytes = VAR_3;
 VAR_5->resync_dump_frag_page = VAR_4;
}
