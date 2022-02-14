
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int completion_queues_count; } ;
struct hl_device {int pdev; int * completion_queue; int dev; int event_queue; TYPE_1__ asic_prop; struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int,int *) ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct hl_device *VAR_7)
{
 struct goya_device *VAR_8 = VAR_7->asic_specific;
 int VAR_9 = VAR_7->asic_prop.completion_queues_count;
 int VAR_10, VAR_11, VAR_12, VAR_13;

 if (VAR_8->hw_cap_initialized & VAR_2)
  return 0;

 VAR_10 = FUNC_2(VAR_7->pdev, VAR_1,
    VAR_1, VAR_3);
 if (VAR_10 < 0) {
  FUNC_0(VAR_7->dev,
   "MSI-X: Failed to enable support -- %d/%d\n",
   VAR_1, VAR_10);
  return VAR_10;
 }

 for (VAR_11 = 0, VAR_12 = 0 ; VAR_11 < VAR_9 ; VAR_11++, VAR_12++) {
  VAR_13 = FUNC_4(VAR_7->pdev, VAR_11);
  VAR_10 = FUNC_5(VAR_13, VAR_5, 0, VAR_4[VAR_11],
    &VAR_7->completion_queue[VAR_11]);
  if (VAR_10) {
   FUNC_0(VAR_7->dev, "Failed to request IRQ %d", VAR_13);
   goto free_irqs;
  }
 }

 VAR_13 = FUNC_4(VAR_7->pdev, VAR_0);

 VAR_10 = FUNC_5(VAR_13, VAR_6, 0,
   VAR_4[VAR_0],
   &VAR_7->event_queue);
 if (VAR_10) {
  FUNC_0(VAR_7->dev, "Failed to request IRQ %d", VAR_13);
  goto free_irqs;
 }

 VAR_8->hw_cap_initialized |= VAR_2;
 return 0;

free_irqs:
 for (VAR_11 = 0 ; VAR_11 < VAR_12 ; VAR_11++)
  FUNC_1(FUNC_4(VAR_7->pdev, VAR_11),
   &VAR_7->completion_queue[VAR_11]);

 FUNC_3(VAR_7->pdev);
 return VAR_10;
}
