
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct mlx5_frag_buf {int npages; int page_shift; TYPE_1__* frags; } ;
typedef int __be64 ;
struct TYPE_2__ {scalar_t__ map; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct mlx5_frag_buf *VAR_0, __be64 *VAR_1)
{
 u64 VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->npages; VAR_3++) {
  VAR_2 = VAR_0->frags->map + (VAR_3 << VAR_0->page_shift);

  VAR_1[VAR_3] = FUNC_0(VAR_2);
 }
}
