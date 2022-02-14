
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_icm_iter {size_t page_idx; TYPE_2__* chunk; } ;
struct TYPE_4__ {int * sg; TYPE_1__* buf; scalar_t__ coherent; } ;
struct TYPE_3__ {unsigned long size; } ;


 unsigned long FUNC_0 (int *) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct mlx4_icm_iter *VAR_0)
{
 if (VAR_0->chunk->coherent)
  return VAR_0->chunk->buf[VAR_0->page_idx].size;
 else
  return FUNC_0(&VAR_0->chunk->sg[VAR_0->page_idx]);
}
