
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5dr_ste_htbl {TYPE_2__* chunk; } ;
struct mlx5dr_domain {TYPE_1__* send_ring; } ;
struct TYPE_4__ {int byte_size; int num_of_entries; } ;
struct TYPE_3__ {int max_post_send_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct mlx5dr_domain *VAR_3,
       struct mlx5dr_ste_htbl *VAR_4,
       u8 **VAR_5,
       u32 *VAR_6,
       int *VAR_7,
       int *VAR_8)
{
 int VAR_9;

 if (VAR_4->chunk->byte_size > VAR_3->send_ring->max_post_send_size) {
  *VAR_7 = VAR_4->chunk->byte_size /
   VAR_3->send_ring->max_post_send_size;
  *VAR_6 = VAR_3->send_ring->max_post_send_size;
  VAR_9 = *VAR_6;
  *VAR_8 = *VAR_6 / VAR_0;
 } else {
  *VAR_7 = 1;
  *VAR_8 = VAR_4->chunk->num_of_entries;
  VAR_9 = *VAR_8 * VAR_0;
 }

 *VAR_5 = FUNC_0(VAR_9, VAR_2);
 if (!*VAR_5)
  return -VAR_1;

 return 0;
}
