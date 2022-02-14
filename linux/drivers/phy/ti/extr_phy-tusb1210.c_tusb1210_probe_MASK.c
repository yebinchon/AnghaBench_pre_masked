
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ulpi {int dev; } ;
struct tusb1210 {int vendor_specific2; void* phy; struct ulpi* ulpi; void* gpio_cs; void* gpio_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char*,int*) ;
 void* FUNC_3 (int *,char*,int ) ;
 struct tusb1210* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (void*,int) ;
 int VAR_7 ;
 int FUNC_6 (void*,struct tusb1210*) ;
 void* FUNC_7 (struct ulpi*,int *) ;
 int FUNC_8 (struct ulpi*,struct tusb1210*) ;
 int FUNC_9 (struct ulpi*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct ulpi *VAR_8)
{
 struct tusb1210 *VAR_9;
 u8 VAR_10, VAR_11;

 VAR_9 = FUNC_4(&VAR_8->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->gpio_reset = FUNC_3(&VAR_8->dev, "reset",
         VAR_2);
 if (FUNC_0(VAR_9->gpio_reset))
  return FUNC_1(VAR_9->gpio_reset);

 FUNC_5(VAR_9->gpio_reset, 1);

 VAR_9->gpio_cs = FUNC_3(&VAR_8->dev, "cs",
      VAR_2);
 if (FUNC_0(VAR_9->gpio_cs))
  return FUNC_1(VAR_9->gpio_cs);

 FUNC_5(VAR_9->gpio_cs, 1);







 FUNC_2(&VAR_8->dev, "ihstx", &VAR_10);
 VAR_11 = VAR_10 << VAR_5;


 FUNC_2(&VAR_8->dev, "zhsdrv", &VAR_10);
 VAR_11 |= VAR_10 << VAR_6;


 FUNC_2(&VAR_8->dev, "datapolarity", &VAR_10);
 VAR_11 |= VAR_10 << VAR_4;

 if (VAR_11) {
  FUNC_9(VAR_8, VAR_3, VAR_11);
  VAR_9->vendor_specific2 = VAR_11;
 }

 VAR_9->phy = FUNC_7(VAR_8, &VAR_7);
 if (FUNC_0(VAR_9->phy))
  return FUNC_1(VAR_9->phy);

 VAR_9->ulpi = VAR_8;

 FUNC_6(VAR_9->phy, VAR_9);
 FUNC_8(VAR_8, VAR_9);
 return 0;
}
