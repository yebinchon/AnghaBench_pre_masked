
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct meson_canvas {int lock; scalar_t__* used; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct meson_canvas *VAR_1, u8 VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_1->lock, VAR_3);
 if (!VAR_1->used[VAR_2]) {
  FUNC_0(VAR_1->dev,
   "Trying to free unused canvas %u\n", VAR_2);
  FUNC_2(&VAR_1->lock, VAR_3);
  return -VAR_0;
 }
 VAR_1->used[VAR_2] = 0;
 FUNC_2(&VAR_1->lock, VAR_3);

 return 0;
}
