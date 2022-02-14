
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta2x11_mfd {int * regmap; int * regs; int lock; } ;
struct resource {int start; } ;
struct regmap_config {int cache_type; int * lock_arg; } ;
struct platform_device {int dev; } ;
struct pci_dev {int dummy; } ;
typedef enum sta2x11_mfd_plat_dev { ____Placeholder_sta2x11_mfd_plat_dev } sta2x11_mfd_plat_dev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 struct pci_dev** FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,struct regmap_config*) ;
 int FUNC_4 (int ,int ) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,char const*) ;
 int FUNC_8 (struct resource*) ;
 struct sta2x11_mfd* FUNC_9 (struct pci_dev*) ;
 char** VAR_5 ;
 struct regmap_config** VAR_6 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_7,
          enum sta2x11_mfd_plat_dev VAR_8)
{
 struct pci_dev **VAR_9;
 struct sta2x11_mfd *VAR_10;
 struct resource *VAR_11;
 const char *VAR_12 = VAR_5[VAR_8];
 struct regmap_config *VAR_13 = VAR_6[VAR_8];

 VAR_9 = FUNC_2(&VAR_7->dev);
 VAR_10 = FUNC_9(*VAR_9);
 if (!VAR_10)
  return -VAR_1;
 if (!VAR_13)
  return -VAR_1;

 VAR_11 = FUNC_5(VAR_7, VAR_3, 0);
 if (!VAR_11)
  return -VAR_2;

 if (!FUNC_7(VAR_11->start, FUNC_8(VAR_11), VAR_12))
  return -VAR_0;

 VAR_10->regs[VAR_8] = FUNC_4(VAR_11->start, FUNC_8(VAR_11));
 if (!VAR_10->regs[VAR_8]) {
  FUNC_6(VAR_11->start, FUNC_8(VAR_11));
  return -VAR_2;
 }
 VAR_13->lock_arg = &VAR_10->lock;




 VAR_13->cache_type = VAR_4;
 VAR_10->regmap[VAR_8] = FUNC_3(&VAR_7->dev, VAR_10->regs[VAR_8],
         VAR_13);
 FUNC_1(FUNC_0(VAR_10->regmap[VAR_8]));

 return 0;
}
