
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct megasas_instance {scalar_t__ adapter_type; int consumer_h; scalar_t__ consumer; TYPE_1__* pdev; int producer_h; scalar_t__ producer; int reply_map; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct megasas_instance*) ;

__attribute__((used)) static inline void FUNC_3(struct megasas_instance *VAR_1)
{
 FUNC_1(VAR_1->reply_map);
 if (VAR_1->adapter_type == VAR_0) {
  if (VAR_1->producer)
   FUNC_0(&VAR_1->pdev->dev, sizeof(u32),
         VAR_1->producer,
         VAR_1->producer_h);
  if (VAR_1->consumer)
   FUNC_0(&VAR_1->pdev->dev, sizeof(u32),
         VAR_1->consumer,
         VAR_1->consumer_h);
 } else {
  FUNC_2(VAR_1);
 }
}
