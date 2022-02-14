
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct queue_set {int cq_len; struct cmp_queue* cq; } ;
struct nicvf {int dummy; } ;
struct cq_cfg {int ena; scalar_t__ avg_con; int qsize; scalar_t__ caching; scalar_t__ reset; } ;
struct TYPE_2__ {scalar_t__ phys_base; } ;
struct cmp_queue {int enable; int thresh; TYPE_1__ dmem; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cq_cfg*,int ,int) ;
 int FUNC_2 (struct nicvf*,int ,int,int ) ;
 int FUNC_3 (struct nicvf*,struct queue_set*,int) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct nicvf *VAR_6, struct queue_set *VAR_7,
       int VAR_8, bool VAR_9)
{
 struct cmp_queue *VAR_10;
 struct cq_cfg VAR_11;

 VAR_10 = &VAR_7->cq[VAR_8];
 VAR_10->enable = VAR_9;

 if (!VAR_10->enable) {
  FUNC_3(VAR_6, VAR_7, VAR_8);
  return;
 }


 FUNC_2(VAR_6, VAR_3, VAR_8, VAR_1);

 if (!VAR_10->enable)
  return;

 FUNC_4(&VAR_10->lock);

 FUNC_2(VAR_6, VAR_2,
         VAR_8, (u64)(VAR_10->dmem.phys_base));


 FUNC_1(&VAR_11, 0, sizeof(struct cq_cfg));
 VAR_11.ena = 1;
 VAR_11.reset = 0;
 VAR_11.caching = 0;
 VAR_11.qsize = FUNC_0(VAR_7->cq_len >> 10);
 VAR_11.avg_con = 0;
 FUNC_2(VAR_6, VAR_3, VAR_8, *(u64 *)&VAR_11);


 FUNC_2(VAR_6, VAR_5, VAR_8, VAR_10->thresh);
 FUNC_2(VAR_6, VAR_4,
         VAR_8, VAR_0);
}
