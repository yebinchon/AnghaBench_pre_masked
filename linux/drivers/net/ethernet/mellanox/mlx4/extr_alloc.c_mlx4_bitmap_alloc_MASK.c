
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_bitmap {int max; int last; int top; int reserved_top; int mask; int lock; int avail; int table; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

u32 FUNC_5(struct mlx4_bitmap *VAR_0)
{
 u32 VAR_1;

 FUNC_3(&VAR_0->lock);

 VAR_1 = FUNC_1(VAR_0->table, VAR_0->max, VAR_0->last);
 if (VAR_1 >= VAR_0->max) {
  VAR_0->top = (VAR_0->top + VAR_0->max + VAR_0->reserved_top)
    & VAR_0->mask;
  VAR_1 = FUNC_0(VAR_0->table, VAR_0->max);
 }

 if (VAR_1 < VAR_0->max) {
  FUNC_2(VAR_1, VAR_0->table);
  VAR_0->last = (VAR_1 + 1);
  if (VAR_0->last == VAR_0->max)
   VAR_0->last = 0;
  VAR_1 |= VAR_0->top;
 } else
  VAR_1 = -1;

 if (VAR_1 != -1)
  --VAR_0->avail;

 FUNC_4(&VAR_0->lock);

 return VAR_1;
}
