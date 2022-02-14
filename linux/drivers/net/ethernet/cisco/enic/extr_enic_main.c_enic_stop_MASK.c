
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct enic {unsigned int intr_count; unsigned int rq_count; unsigned int wq_count; unsigned int cq_count; int * intr; int * cq; int * rq; int * wq; int * napi; int vdev; int notify_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (struct enic*,unsigned int) ;
 int FUNC_2 (struct enic*) ;
 int FUNC_3 (struct enic*) ;
 int FUNC_4 (struct enic*) ;
 int FUNC_5 (struct enic*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct enic*) ;
 int FUNC_7 (struct enic*) ;
 int FUNC_8 (struct enic*) ;
 int FUNC_9 (struct enic*) ;
 int FUNC_10 (struct enic*) ;
 int FUNC_11 (int *) ;
 struct enic* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static int FUNC_24(struct net_device *VAR_3)
{
 struct enic *VAR_4 = FUNC_12(VAR_3);
 unsigned int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4->intr_count; VAR_5++) {
  FUNC_18(&VAR_4->intr[VAR_5]);
  (void)FUNC_19(&VAR_4->intr[VAR_5]);
 }

 FUNC_9(VAR_4);

 FUNC_0(&VAR_4->notify_timer);
 FUNC_8(VAR_4);

 FUNC_3(VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_4->rq_count; VAR_5++)
  FUNC_11(&VAR_4->napi[VAR_5]);

 FUNC_13(VAR_3);
 FUNC_14(VAR_3);
 if (FUNC_16(VAR_4->vdev) == VAR_0)
  for (VAR_5 = 0; VAR_5 < VAR_4->wq_count; VAR_5++)
   FUNC_11(&VAR_4->napi[FUNC_1(VAR_4, VAR_5)]);

 if (!FUNC_6(VAR_4) && !FUNC_7(VAR_4))
  FUNC_2(VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_4->wq_count; VAR_5++) {
  VAR_6 = FUNC_23(&VAR_4->wq[VAR_5]);
  if (VAR_6)
   return VAR_6;
 }
 for (VAR_5 = 0; VAR_5 < VAR_4->rq_count; VAR_5++) {
  VAR_6 = FUNC_21(&VAR_4->rq[VAR_5]);
  if (VAR_6)
   return VAR_6;
 }

 FUNC_4(VAR_4);
 FUNC_10(VAR_4);
 FUNC_5(VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_4->wq_count; VAR_5++)
  FUNC_22(&VAR_4->wq[VAR_5], VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_4->rq_count; VAR_5++)
  FUNC_20(&VAR_4->rq[VAR_5], VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_4->cq_count; VAR_5++)
  FUNC_15(&VAR_4->cq[VAR_5]);
 for (VAR_5 = 0; VAR_5 < VAR_4->intr_count; VAR_5++)
  FUNC_17(&VAR_4->intr[VAR_5]);

 return 0;
}
