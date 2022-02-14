
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvme_queue {int flags; int delete_done; } ;
struct nvme_dev {int online_queues; struct nvme_queue* queues; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nvme_queue*,int ) ;
 int FUNC_1 (struct nvme_queue*,int) ;
 int FUNC_2 (int ,int *) ;
 unsigned long FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_4(struct nvme_dev *VAR_3, u8 VAR_4)
{
 int VAR_5 = VAR_3->online_queues - 1, VAR_6 = 0;
 unsigned long VAR_7;

 retry:
 VAR_7 = VAR_0;
 while (VAR_5 > 0) {
  if (FUNC_0(&VAR_3->queues[VAR_5], VAR_4))
   break;
  VAR_5--;
  VAR_6++;
 }
 while (VAR_6) {
  struct nvme_queue *VAR_8 = &VAR_3->queues[VAR_5 + VAR_6];

  VAR_7 = FUNC_3(&VAR_8->delete_done,
    VAR_7);
  if (VAR_7 == 0)
   return 0;


  if (VAR_4 == VAR_2 &&
      !FUNC_2(VAR_1, &VAR_8->flags))
   FUNC_1(VAR_8, -1);

  VAR_6--;
  if (VAR_5)
   goto retry;
 }
 return 1;
}
