
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;
struct netsec_priv {int freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2,
        struct netsec_priv *VAR_3, u32 *VAR_4)
{
 int VAR_5;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 VAR_5 = FUNC_2(&VAR_2->dev, "phy-channel", VAR_4);
 if (VAR_5) {
  FUNC_1(&VAR_2->dev,
   "missing required property 'phy-channel'\n");
  return VAR_5;
 }

 VAR_5 = FUNC_2(&VAR_2->dev,
           "socionext,phy-clock-frequency",
           &VAR_3->freq);
 if (VAR_5)
  FUNC_1(&VAR_2->dev,
   "missing required property 'socionext,phy-clock-frequency'\n");
 return VAR_5;
}
