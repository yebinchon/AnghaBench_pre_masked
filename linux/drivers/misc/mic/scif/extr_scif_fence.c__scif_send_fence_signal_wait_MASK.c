
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scif_fence_info {scalar_t__ state; int comp; } ;
struct TYPE_2__ {int rma_lock; } ;
struct scif_endpt {TYPE_1__ rma_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct scif_endpt*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct scif_endpt *VAR_5,
     struct scif_fence_info *VAR_6)
{
 int VAR_7;

retry:

 VAR_7 = FUNC_3(&VAR_6->comp,
       VAR_4);
 if (!VAR_7 && FUNC_2(VAR_5))
  goto retry;
 if (!VAR_7)
  VAR_7 = -VAR_0;
 if (VAR_7 > 0)
  VAR_7 = 0;
 if (VAR_7 < 0) {
  FUNC_0(&VAR_5->rma_info.rma_lock);
  if (VAR_6->state == VAR_3)
   VAR_6->state = VAR_2;
  FUNC_1(&VAR_5->rma_info.rma_lock);
 }
 if (VAR_6->state == VAR_2 && !VAR_7)
  VAR_7 = -VAR_1;
 return VAR_7;
}
