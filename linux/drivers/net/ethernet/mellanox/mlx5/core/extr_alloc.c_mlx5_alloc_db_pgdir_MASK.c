
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_db_pgdir {int bitmap; int db_page; int db_dma; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct mlx5_db_pgdir*) ;
 struct mlx5_db_pgdir* FUNC_5 (int,int ) ;
 int FUNC_6 (struct mlx5_core_dev*,int,int *,int) ;

__attribute__((used)) static struct mlx5_db_pgdir *FUNC_7(struct mlx5_core_dev *VAR_2,
       int VAR_3)
{
 u32 VAR_4 = VAR_1 / FUNC_3();
 struct mlx5_db_pgdir *VAR_5;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->bitmap = FUNC_2(VAR_4, VAR_0);
 if (!VAR_5->bitmap) {
  FUNC_4(VAR_5);
  return ((void*)0);
 }

 FUNC_0(VAR_5->bitmap, VAR_4);

 VAR_5->db_page = FUNC_6(VAR_2, VAR_1,
             &VAR_5->db_dma, VAR_3);
 if (!VAR_5->db_page) {
  FUNC_1(VAR_5->bitmap);
  FUNC_4(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
