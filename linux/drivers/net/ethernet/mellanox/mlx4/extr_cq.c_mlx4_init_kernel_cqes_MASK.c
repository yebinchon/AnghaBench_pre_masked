
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf; } ;
struct mlx4_buf {int nbufs; int npages; unsigned long page_shift; TYPE_2__* page_list; TYPE_1__ direct; } ;
struct TYPE_4__ {int buf; } ;


 int FUNC_0 (int ,int,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct mlx4_buf *VAR_0,
      int VAR_1,
      int VAR_2)
{
 int VAR_3;

 if (VAR_0->nbufs == 1)
  FUNC_0(VAR_0->direct.buf, 0xcc, VAR_1 * VAR_2);
 else
  for (VAR_3 = 0; VAR_3 < VAR_0->npages; VAR_3++)
   FUNC_0(VAR_0->page_list[VAR_3].buf, 0xcc,
          1UL << VAR_0->page_shift);
}
