
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_frag_buf {int npages; TYPE_1__* frags; } ;
typedef int __be64 ;
struct TYPE_2__ {int map; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct mlx5_frag_buf *VAR_0, __be64 *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->npages; VAR_2++)
  VAR_1[VAR_2] = FUNC_0(VAR_0->frags[VAR_2].map);
}
