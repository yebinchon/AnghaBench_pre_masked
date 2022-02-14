
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct enic {unsigned int rq_count; unsigned int wq_count; unsigned int intr_count; int * rq; int * intr; int * napi; int vdev; int * wq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (struct enic*,unsigned int) ;
 int FUNC_1 (struct enic*) ;
 int FUNC_2 (struct enic*) ;
 int FUNC_3 (struct enic*) ;
 int FUNC_4 (struct enic*) ;
 int FUNC_5 (struct enic*) ;
 int VAR_2 ;
 int FUNC_6 (struct enic*) ;
 int FUNC_7 (struct enic*) ;
 int FUNC_8 (struct enic*) ;
 int FUNC_9 (struct enic*) ;
 int FUNC_10 (struct enic*) ;
 int FUNC_11 (struct enic*) ;
 int VAR_3 ;
 int FUNC_12 (struct enic*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct enic*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct net_device*,char*) ;
 struct enic* FUNC_17 (struct net_device*) ;
 int FUNC_18 (struct net_device*) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ) ;
 scalar_t__ FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (int *) ;

__attribute__((used)) static int FUNC_27(struct net_device *VAR_4)
{
 struct enic *VAR_5 = FUNC_17(VAR_4);
 unsigned int VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_10(VAR_5);
 if (VAR_7) {
  FUNC_16(VAR_4, "Unable to request irq.\n");
  return VAR_7;
 }
 FUNC_6(VAR_5);
 FUNC_12(VAR_5);

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7) {
  FUNC_16(VAR_4,
   "Failed to alloc notify buffer, aborting.\n");
  goto err_out_free_intr;
 }

 for (VAR_6 = 0; VAR_6 < VAR_5->rq_count; VAR_6++) {

  FUNC_24(&VAR_5->rq[VAR_6]);
  FUNC_25(&VAR_5->rq[VAR_6], VAR_3);

  if (FUNC_22(&VAR_5->rq[VAR_6]) == 0) {
   FUNC_16(VAR_4, "Unable to alloc receive buffers\n");
   VAR_7 = -VAR_0;
   goto err_out_free_rq;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_5->wq_count; VAR_6++)
  FUNC_26(&VAR_5->wq[VAR_6]);

 if (!FUNC_7(VAR_5) && !FUNC_8(VAR_5))
  FUNC_1(VAR_5);

 FUNC_13(VAR_4);

 FUNC_18(VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_5->rq_count; VAR_6++)
  FUNC_15(&VAR_5->napi[VAR_6]);

 if (FUNC_19(VAR_5->vdev) == VAR_1)
  for (VAR_6 = 0; VAR_6 < VAR_5->wq_count; VAR_6++)
   FUNC_15(&VAR_5->napi[FUNC_0(VAR_5, VAR_6)]);
 FUNC_2(VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_5->intr_count; VAR_6++)
  FUNC_20(&VAR_5->intr[VAR_6]);

 FUNC_9(VAR_5);
 FUNC_11(VAR_5);

 return 0;

err_out_free_rq:
 for (VAR_6 = 0; VAR_6 < VAR_5->rq_count; VAR_6++) {
  VAR_8 = FUNC_23(&VAR_5->rq[VAR_6]);
  if (!VAR_8)
   FUNC_21(&VAR_5->rq[VAR_6], VAR_2);
 }
 FUNC_4(VAR_5);
err_out_free_intr:
 FUNC_14(VAR_5);
 FUNC_5(VAR_5);

 return VAR_7;
}
