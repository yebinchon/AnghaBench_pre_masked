
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {int dummy; } ;
struct flchip_shared {int lock; struct flchip* erasing; struct flchip* writing; } ;
struct flchip {scalar_t__ state; unsigned long start; int oldstate; int mutex; int wq; struct flchip_shared* priv; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct map_info*,struct flchip*,unsigned long,int) ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct map_info*,struct flchip*,unsigned long) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_10(struct map_info *VAR_9, struct flchip *VAR_10, unsigned long VAR_11, int VAR_12)
{
 int VAR_13;
 FUNC_0(VAR_8, VAR_7);

 retry:
 if (VAR_10->priv &&
     (VAR_12 == VAR_5 || VAR_12 == VAR_1 || VAR_12 == VAR_2
     || VAR_12 == VAR_3) && VAR_10->state != VAR_4) {
  struct flchip_shared *VAR_14 = VAR_10->priv;
  struct flchip *VAR_15;
  FUNC_3(&VAR_14->lock);
  VAR_15 = VAR_14->writing;
  if (VAR_15 && VAR_15 != VAR_10) {
   VAR_13 = FUNC_4(&VAR_15->mutex);
   FUNC_5(&VAR_14->lock);
   if (!VAR_13)
    goto retry;
   FUNC_5(&VAR_10->mutex);
   VAR_13 = FUNC_2(VAR_9, VAR_15, VAR_15->start, VAR_12);
   FUNC_3(&VAR_10->mutex);

   if (VAR_13 == -VAR_0) {
    FUNC_5(&VAR_15->mutex);
    goto retry;
   }
   if (VAR_13) {
    FUNC_5(&VAR_15->mutex);
    return VAR_13;
   }
   FUNC_3(&VAR_14->lock);



   if (VAR_10->state == VAR_4) {
    FUNC_6(VAR_9, VAR_15, VAR_15->start);
    FUNC_5(&VAR_15->mutex);
    goto retry;
   }
   FUNC_5(&VAR_15->mutex);
  }



  if (VAR_12 == VAR_1 && VAR_14->erasing
      && VAR_14->erasing->oldstate == VAR_1) {
   FUNC_5(&VAR_14->lock);
   FUNC_9(VAR_6);
   FUNC_1(&VAR_10->wq, &VAR_8);
   FUNC_5(&VAR_10->mutex);
   FUNC_8();
   FUNC_7(&VAR_10->wq, &VAR_8);
   FUNC_3(&VAR_10->mutex);
   goto retry;
  }


  VAR_14->writing = VAR_10;
  if (VAR_12 == VAR_1)
   VAR_14->erasing = VAR_10;
  FUNC_5(&VAR_14->lock);
 }
 VAR_13 = FUNC_2(VAR_9, VAR_10, VAR_11, VAR_12);
 if (VAR_13 == -VAR_0)
  goto retry;

 return VAR_13;
}
