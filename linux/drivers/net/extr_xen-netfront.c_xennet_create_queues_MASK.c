
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netfront_queue {unsigned int id; int napi; struct netfront_info* info; } ;
struct netfront_info {TYPE_1__* xbdev; int netdev; struct netfront_queue* queues; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 struct netfront_queue* FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (struct netfront_queue*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct netfront_info *VAR_4,
    unsigned int *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_4->queues = FUNC_2(*VAR_5, sizeof(struct netfront_queue),
          VAR_2);
 if (!VAR_4->queues)
  return -VAR_1;

 for (VAR_6 = 0; VAR_6 < *VAR_5; VAR_6++) {
  struct netfront_queue *VAR_8 = &VAR_4->queues[VAR_6];

  VAR_8->id = VAR_6;
  VAR_8->info = VAR_4;

  VAR_7 = FUNC_7(VAR_8);
  if (VAR_7 < 0) {
   FUNC_1(&VAR_4->xbdev->dev,
     "only created %d queues\n", VAR_6);
   *VAR_5 = VAR_6;
   break;
  }

  FUNC_4(VAR_8->info->netdev, &VAR_8->napi,
          VAR_3, 64);
  if (FUNC_5(VAR_4->netdev))
   FUNC_3(&VAR_8->napi);
 }

 FUNC_6(VAR_4->netdev, *VAR_5);

 if (*VAR_5 == 0) {
  FUNC_0(&VAR_4->xbdev->dev, "no queues\n");
  return -VAR_0;
 }
 return 0;
}
