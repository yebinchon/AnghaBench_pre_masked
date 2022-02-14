
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {uintptr_t addr; int length; scalar_t__ lkey; } ;
struct postsend_info {int rkey; int remote_addr; TYPE_1__ write; } ;
struct mlx5dr_ste_htbl {int* hw_ste_arr; int ste_arr; TYPE_2__* chunk; } ;
struct mlx5dr_domain {int dummy; } ;
struct TYPE_4__ {int byte_size; int rkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5dr_domain*,struct mlx5dr_ste_htbl*,int**,int*,int*,int*) ;
 int FUNC_1 (struct mlx5dr_domain*,struct postsend_info*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int) ;

int FUNC_5(struct mlx5dr_domain *VAR_2,
     struct mlx5dr_ste_htbl *VAR_3,
     u8 *VAR_4,
     bool VAR_5)
{
 u32 VAR_6 = VAR_3->chunk->byte_size;
 int VAR_7;
 int VAR_8;
 u8 *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_0(VAR_2, VAR_3, &VAR_9, &VAR_6,
          &VAR_7, &VAR_8);
 if (VAR_10)
  return VAR_10;

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  u8 *VAR_12;


  VAR_12 = VAR_9 + VAR_11 * VAR_0;
  FUNC_3(VAR_12, VAR_4, VAR_0);

  if (VAR_5) {

   VAR_12 = VAR_3->hw_ste_arr + VAR_11 * VAR_1;
   FUNC_3(VAR_12, VAR_4, VAR_1);
  }
 }


 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  u8 VAR_13 = VAR_11 * (VAR_6 / VAR_0);
  struct postsend_info VAR_14 = {};

  VAR_14.write.addr = (uintptr_t)VAR_9;
  VAR_14.write.length = VAR_6;
  VAR_14.write.lkey = 0;
  VAR_14.remote_addr =
   FUNC_4(VAR_3->ste_arr + VAR_13);
  VAR_14.rkey = VAR_3->chunk->rkey;

  VAR_10 = FUNC_1(VAR_2, &VAR_14);
  if (VAR_10)
   goto out_free;
 }

out_free:
 FUNC_2(VAR_9);
 return VAR_10;
}
