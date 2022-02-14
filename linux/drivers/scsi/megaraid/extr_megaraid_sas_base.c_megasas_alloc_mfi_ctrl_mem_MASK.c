
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct megasas_instance {scalar_t__* consumer; scalar_t__* producer; TYPE_1__* pdev; int consumer_h; int producer_h; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,int,int *,int ) ;

__attribute__((used)) static inline int FUNC_2(struct megasas_instance *VAR_1)
{
 VAR_1->producer = FUNC_1(&VAR_1->pdev->dev,
   sizeof(u32), &VAR_1->producer_h, VAR_0);
 VAR_1->consumer = FUNC_1(&VAR_1->pdev->dev,
   sizeof(u32), &VAR_1->consumer_h, VAR_0);

 if (!VAR_1->producer || !VAR_1->consumer) {
  FUNC_0(&VAR_1->pdev->dev,
   "Failed to allocate memory for producer, consumer\n");
  return -1;
 }

 *VAR_1->producer = 0;
 *VAR_1->consumer = 0;
 return 0;
}
