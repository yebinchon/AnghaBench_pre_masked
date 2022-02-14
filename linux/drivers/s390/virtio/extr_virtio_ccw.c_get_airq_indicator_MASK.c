
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u64 ;
struct virtqueue {int dummy; } ;
struct airq_info {int lock; TYPE_1__* aiv; } ;
struct TYPE_3__ {scalar_t__ vector; } ;


 int VAR_0 ;
 struct airq_info** VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,unsigned long,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct airq_info* FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_7(struct virtqueue *VAR_3[], int VAR_4,
     u64 *VAR_5, void **VAR_6)
{
 int VAR_7, VAR_8;
 struct airq_info *VAR_9;
 unsigned long VAR_10 = 0;
 unsigned long VAR_11, VAR_12;

 for (VAR_7 = 0; VAR_7 < VAR_0 && !VAR_10; VAR_7++) {
  FUNC_2(&VAR_2);
  if (!VAR_1[VAR_7])
   VAR_1[VAR_7] = FUNC_4(VAR_7);
  VAR_9 = VAR_1[VAR_7];
  FUNC_3(&VAR_2);
  if (!VAR_9)
   return 0;
  FUNC_5(&VAR_9->lock, VAR_12);
  VAR_11 = FUNC_0(VAR_9->aiv, VAR_4);
  if (VAR_11 == -1UL) {

   FUNC_6(&VAR_9->lock, VAR_12);
   continue;
  }
  *VAR_5 = VAR_11;
  *VAR_6 = VAR_9;
  VAR_10 = (unsigned long)VAR_9->aiv->vector;
  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   FUNC_1(VAR_9->aiv, VAR_11 + VAR_8,
     (unsigned long)VAR_3[VAR_8]);
  }
  FUNC_6(&VAR_9->lock, VAR_12);
 }
 return VAR_10;
}
