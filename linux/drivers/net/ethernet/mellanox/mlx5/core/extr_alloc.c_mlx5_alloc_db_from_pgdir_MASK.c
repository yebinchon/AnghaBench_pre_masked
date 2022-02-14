
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_db_pgdir {scalar_t__ db_dma; scalar_t__* db_page; int bitmap; } ;
struct TYPE_2__ {struct mlx5_db_pgdir* pgdir; } ;
struct mlx5_db {int index; scalar_t__* db; scalar_t__ dma; TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct mlx5_db_pgdir *VAR_2,
        struct mlx5_db *VAR_3)
{
 u32 VAR_4 = VAR_1 / FUNC_1();
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2->bitmap, VAR_4);
 if (VAR_6 >= VAR_4)
  return -VAR_0;

 FUNC_0(VAR_6, VAR_2->bitmap);

 VAR_3->u.pgdir = VAR_2;
 VAR_3->index = VAR_6;
 VAR_5 = VAR_3->index * FUNC_1();
 VAR_3->db = VAR_2->db_page + VAR_5 / sizeof(*VAR_2->db_page);
 VAR_3->dma = VAR_2->db_dma + VAR_5;

 VAR_3->db[0] = 0;
 VAR_3->db[1] = 0;

 return 0;
}
