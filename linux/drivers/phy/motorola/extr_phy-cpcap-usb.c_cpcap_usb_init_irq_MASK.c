
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct cpcap_phy_ddata {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*,int) ;
 int FUNC_1 (int ,int,int *,int ,int ,char const*,struct cpcap_phy_ddata*) ;
 int FUNC_2 (struct platform_device*,char const*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3,
         struct cpcap_phy_ddata *VAR_4,
         const char *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_3, VAR_5);
 if (VAR_6 < 0)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_4->dev, VAR_6, ((void*)0),
       VAR_2,
       VAR_1,
       VAR_5, VAR_4);
 if (VAR_7) {
  FUNC_0(VAR_4->dev, "could not get irq %s: %i\n",
   VAR_5, VAR_7);

  return VAR_7;
 }

 return 0;
}
