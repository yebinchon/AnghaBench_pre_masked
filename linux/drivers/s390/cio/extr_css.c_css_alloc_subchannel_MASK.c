
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct subchannel_id {int dummy; } ;
struct TYPE_4__ {void** dma_mask; void* coherent_dma_mask; int * release; } ;
struct TYPE_3__ {int st; } ;
struct schib {TYPE_1__ pmcw; } ;
struct subchannel {void* dma_mask; TYPE_2__ dev; int todo_work; int st; struct schib schib; struct subchannel_id schid; } ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 struct subchannel* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct subchannel*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct subchannel_id,struct schib*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct subchannel*) ;
 struct subchannel* FUNC_7 (int,int) ;

struct subchannel *FUNC_8(struct subchannel_id VAR_5,
     struct schib *VAR_6)
{
 struct subchannel *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_5, VAR_6);
 if (VAR_8 < 0)
  return FUNC_1(VAR_8);

 VAR_7 = FUNC_7(sizeof(*VAR_7), VAR_2 | VAR_1);
 if (!VAR_7)
  return FUNC_1(-VAR_0);

 VAR_7->schid = VAR_5;
 VAR_7->schib = *VAR_6;
 VAR_7->st = VAR_6->pmcw.st;

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8)
  goto err;

 FUNC_2(&VAR_7->todo_work, VAR_3);
 VAR_7->dev.release = &VAR_4;
 FUNC_5(&VAR_7->dev);




 VAR_7->dev.coherent_dma_mask = FUNC_0(31);




 VAR_7->dma_mask = FUNC_0(64);
 VAR_7->dev.dma_mask = &VAR_7->dma_mask;
 return VAR_7;

err:
 FUNC_6(VAR_7);
 return FUNC_1(VAR_8);
}
