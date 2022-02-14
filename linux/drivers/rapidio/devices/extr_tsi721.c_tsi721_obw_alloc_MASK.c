
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct tsi721_obw_bar {scalar_t__ base; scalar_t__ size; int free; } ;
struct tsi721_ob_win {int active; scalar_t__ base; scalar_t__ size; struct tsi721_obw_bar* pbar; } ;
struct tsi721_device {int obwin_cnt; TYPE_1__* pdev; struct tsi721_ob_win* ob_win; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int
FUNC_2(struct tsi721_device *VAR_4, struct tsi721_obw_bar *VAR_5,
   u32 VAR_6, int *VAR_7)
{
 u64 VAR_8;
 u64 VAR_9;
 u64 VAR_10;
 u32 VAR_11;
 struct tsi721_ob_win *VAR_12;
 struct tsi721_ob_win *VAR_13 = ((void*)0);
 int VAR_14 = -1;
 int VAR_15 = 0;

 VAR_9 = VAR_5->base;
 VAR_10 = VAR_9 + VAR_5->size;
 VAR_8 = VAR_9;
 VAR_11 = VAR_6/VAR_3;

 while (VAR_15 < VAR_2) {
  for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
   if (!VAR_4->ob_win[VAR_15].active) {
    if (VAR_13 == ((void*)0)) {
     VAR_13 = &VAR_4->ob_win[VAR_15];
     VAR_14 = VAR_15;
    }
    continue;
   }





   VAR_12 = &VAR_4->ob_win[VAR_15];

   if (VAR_12->base >= VAR_9 && VAR_12->base < VAR_10) {
    if (VAR_8 < (VAR_12->base + VAR_12->size) &&
      (VAR_8 + VAR_6) > VAR_12->base) {

     VAR_8 = VAR_12->base + VAR_12->size;
     VAR_8 = FUNC_0(VAR_8, VAR_11);
     break;
    }
   }
  }
 }

 if (VAR_8 + VAR_6 > VAR_10)
  return -VAR_1;

 if (!VAR_13) {
  FUNC_1(&VAR_4->pdev->dev, "OBW count tracking failed");
  return -VAR_0;
 }

 VAR_13->active = 1;
 VAR_13->base = VAR_8;
 VAR_13->size = VAR_6;
 VAR_13->pbar = VAR_5;
 VAR_4->obwin_cnt--;
 VAR_5->free -= VAR_6;
 *VAR_7 = VAR_14;
 return 0;
}
