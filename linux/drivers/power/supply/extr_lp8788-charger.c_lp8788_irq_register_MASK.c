
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct lp8788_charger {scalar_t__ num_irqs; int charger_work; } ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 scalar_t__ VAR_3 ;
 char const* VAR_4 ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (int *,char*,char const*) ;
 int VAR_5 ;
 int FUNC_4 (struct platform_device*,struct lp8788_charger*,char const*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_6,
    struct lp8788_charger *VAR_7)
{
 const char *VAR_8[] = {
  VAR_2, VAR_4, VAR_1
 };
 int VAR_9;
 int VAR_10;

 FUNC_1(&VAR_7->charger_work, VAR_5);
 VAR_7->num_irqs = 0;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_8); VAR_9++) {
  VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_8[VAR_9]);
  if (VAR_10) {
   FUNC_3(&VAR_6->dev, "irq setup failed: %s\n", VAR_8[VAR_9]);
   return VAR_10;
  }
 }

 if (VAR_7->num_irqs > VAR_3) {
  FUNC_2(&VAR_6->dev, "invalid total number of irqs: %d\n",
   VAR_7->num_irqs);
  return -VAR_0;
 }


 return 0;
}
