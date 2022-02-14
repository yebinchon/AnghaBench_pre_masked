
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dummy; } ;
struct dsi_data {int isr_tables_copy; int irq_lock; int isr_tables; int te_timer; int is_enabled; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct platform_device*,int,int*,int) ;
 struct dsi_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int,int*,int) ;
 int FUNC_5 (int *,int,int*,int) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (struct platform_device*,int ,int) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_7, void *VAR_8)
{
 struct platform_device *VAR_9;
 struct dsi_data *VAR_10;
 u32 VAR_11, VAR_12[4], VAR_13;
 int VAR_14;

 VAR_9 = (struct platform_device *) VAR_8;
 VAR_10 = FUNC_3(VAR_9);

 if (!VAR_10->is_enabled)
  return VAR_6;

 FUNC_9(&VAR_10->irq_lock);

 VAR_11 = FUNC_6(VAR_9, VAR_1);


 if (!VAR_11) {
  FUNC_10(&VAR_10->irq_lock);
  return VAR_6;
 }

 FUNC_7(VAR_9, VAR_1, VAR_11 & ~VAR_2);

 FUNC_6(VAR_9, VAR_1);

 for (VAR_14 = 0; VAR_14 < 4; ++VAR_14) {
  if ((VAR_11 & (1 << VAR_14)) == 0) {
   VAR_12[VAR_14] = 0;
   continue;
  }

  VAR_12[VAR_14] = FUNC_6(VAR_9, FUNC_0(VAR_14));

  FUNC_7(VAR_9, FUNC_0(VAR_14), VAR_12[VAR_14]);

  FUNC_6(VAR_9, FUNC_0(VAR_14));
 }

 if (VAR_11 & VAR_3) {
  VAR_13 = FUNC_6(VAR_9, VAR_0);

  FUNC_7(VAR_9, VAR_0, VAR_13);

  FUNC_6(VAR_9, VAR_0);
 } else {
  VAR_13 = 0;
 }
 FUNC_8(&VAR_10->isr_tables_copy, &VAR_10->isr_tables,
  sizeof(VAR_10->isr_tables));

 FUNC_10(&VAR_10->irq_lock);

 FUNC_5(&VAR_10->isr_tables_copy, VAR_11, VAR_12, VAR_13);

 FUNC_4(VAR_9, VAR_11, VAR_12, VAR_13);

 FUNC_2(VAR_9, VAR_11, VAR_12, VAR_13);

 return VAR_5;
}
