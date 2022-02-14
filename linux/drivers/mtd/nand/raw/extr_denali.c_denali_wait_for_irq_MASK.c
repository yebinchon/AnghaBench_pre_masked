
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct denali_controller {int irq_status; int irq_mask; int dev; int complete; int irq_lock; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned long FUNC_5 (int *,int ) ;

__attribute__((used)) static u32 FUNC_6(struct denali_controller *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2, VAR_3;
 u32 VAR_4;

 FUNC_3(&VAR_0->irq_lock, VAR_3);

 VAR_4 = VAR_0->irq_status;

 if (VAR_1 & VAR_4) {

  FUNC_4(&VAR_0->irq_lock, VAR_3);
  return VAR_4;
 }

 VAR_0->irq_mask = VAR_1;
 FUNC_2(&VAR_0->complete);
 FUNC_4(&VAR_0->irq_lock, VAR_3);

 VAR_2 = FUNC_5(&VAR_0->complete,
      FUNC_1(1000));
 if (!VAR_2) {
  FUNC_0(VAR_0->dev, "timeout while waiting for irq 0x%x\n",
   VAR_1);
  return 0;
 }

 return VAR_0->irq_status;
}
