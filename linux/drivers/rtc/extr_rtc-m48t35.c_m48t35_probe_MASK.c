
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; int name; } ;
struct m48t35_priv {int rtc; int lock; int reg; int size; int baseaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ) ;
 struct m48t35_priv* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int VAR_6 ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct m48t35_priv*) ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 struct resource *VAR_8;
 struct m48t35_priv *VAR_9;

 VAR_8 = FUNC_5(VAR_7, VAR_4, 0);
 if (!VAR_8)
  return -VAR_1;
 VAR_9 = FUNC_2(&VAR_7->dev, sizeof(struct m48t35_priv), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->size = FUNC_7(VAR_8);





 if (!FUNC_3(&VAR_7->dev, VAR_8->start, VAR_9->size,
         VAR_7->name))
  return -VAR_0;

 VAR_9->baseaddr = VAR_8->start;
 VAR_9->reg = FUNC_1(&VAR_7->dev, VAR_9->baseaddr, VAR_9->size);
 if (!VAR_9->reg)
  return -VAR_2;

 FUNC_8(&VAR_9->lock);

 FUNC_6(VAR_7, VAR_9);

 VAR_9->rtc = FUNC_4(&VAR_7->dev, "m48t35",
      &VAR_6, VAR_5);
 return FUNC_0(VAR_9->rtc);
}
