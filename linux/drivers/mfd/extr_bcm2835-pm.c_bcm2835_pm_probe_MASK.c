
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct bcm2835_pm {void* asb; void* base; struct device* dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_3 (struct device*,struct resource*) ;
 struct bcm2835_pm* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int,int ,int ,int *,int ,int *) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int) ;
 int FUNC_7 (struct platform_device*,struct bcm2835_pm*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct resource *VAR_6;
 struct device *VAR_7 = &VAR_5->dev;
 struct bcm2835_pm *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(VAR_7, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 FUNC_7(VAR_5, VAR_8);

 VAR_8->dev = VAR_7;

 VAR_6 = FUNC_6(VAR_5, VAR_2, 0);
 VAR_8->base = FUNC_3(VAR_7, VAR_6);
 if (FUNC_1(VAR_8->base))
  return FUNC_2(VAR_8->base);

 VAR_9 = FUNC_5(VAR_7, -1,
       VAR_3, FUNC_0(VAR_3),
       ((void*)0), 0, ((void*)0));
 if (VAR_9)
  return VAR_9;





 VAR_6 = FUNC_6(VAR_5, VAR_2, 1);
 if (VAR_6) {
  VAR_8->asb = FUNC_3(VAR_7, VAR_6);
  if (FUNC_1(VAR_8->asb))
   return FUNC_2(VAR_8->asb);

  VAR_9 = FUNC_5(VAR_7, -1,
        VAR_4,
        FUNC_0(VAR_4),
        ((void*)0), 0, ((void*)0));
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
