
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct meson_canvas {int* used; int dev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct meson_canvas *VAR_2, u8 *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_2->lock, VAR_5);
 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
  if (!VAR_2->used[VAR_4]) {
   VAR_2->used[VAR_4] = 1;
   FUNC_2(&VAR_2->lock, VAR_5);
   *VAR_3 = VAR_4;
   return 0;
  }
 }
 FUNC_2(&VAR_2->lock, VAR_5);

 FUNC_0(VAR_2->dev, "No more canvas available\n");
 return -VAR_0;
}
