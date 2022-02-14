
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u16 ;
struct mlx5dr_ste_send_info {int send_list; int * data; int * data_cont; void* offset; struct mlx5dr_ste* ste; void* size; } ;
struct mlx5dr_ste {int dummy; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (int *,int *,void*) ;

void FUNC_2(struct mlx5dr_ste *VAR_0, u16 VAR_1,
            u16 VAR_2, u8 *VAR_3,
            struct mlx5dr_ste_send_info *VAR_4,
            struct list_head *VAR_5,
            bool VAR_6)
{
 VAR_4->size = VAR_1;
 VAR_4->ste = VAR_0;
 VAR_4->offset = VAR_2;

 if (VAR_6) {
  FUNC_1(VAR_4->data_cont, VAR_3, VAR_1);
  VAR_4->data = VAR_4->data_cont;
 } else {
  VAR_4->data = VAR_3;
 }

 FUNC_0(&VAR_4->send_list, VAR_5);
}
