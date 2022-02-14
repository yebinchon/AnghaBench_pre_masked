
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sdhci_host {int quirks; TYPE_2__* mmc; } ;
struct esdhc_platform_data {scalar_t__ wp_type; int cd_type; int max_bus_width; } ;
struct pltfm_imx_data {struct esdhc_platform_data boarddata; } ;
struct platform_device {int dummy; } ;
struct TYPE_6__ {int caps; int caps2; TYPE_1__* parent; } ;
struct TYPE_5__ {scalar_t__ platform_data; } ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char*,int ,int,int ,int *) ;
 int FUNC_3 (TYPE_2__*,char*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_8,
    struct sdhci_host *VAR_9,
    struct pltfm_imx_data *VAR_10)
{
 struct esdhc_platform_data *VAR_11 = &VAR_10->boarddata;
 int VAR_12;

 if (!VAR_9->mmc->parent->platform_data) {
  FUNC_0(FUNC_1(VAR_9->mmc), "no board data!\n");
  return -VAR_0;
 }

 VAR_10->boarddata = *((struct esdhc_platform_data *)
    VAR_9->mmc->parent->platform_data);

 if (VAR_11->wp_type == VAR_1) {
  VAR_12 = FUNC_3(VAR_9->mmc, "wp", 0, 0, ((void*)0));
  if (VAR_12) {
   FUNC_0(FUNC_1(VAR_9->mmc),
    "failed to request write-protect gpio!\n");
   return VAR_12;
  }
  VAR_9->mmc->caps2 |= VAR_2;
 }


 switch (VAR_11->cd_type) {
 case 130:
  VAR_12 = FUNC_2(VAR_9->mmc, "cd", 0, 0, 0, ((void*)0));
  if (VAR_12) {
   FUNC_0(FUNC_1(VAR_9->mmc),
    "failed to request card-detect gpio!\n");
   return VAR_12;
  }


 case 131:

  VAR_9->quirks &= ~VAR_6;
  break;

 case 128:
  VAR_9->mmc->caps |= VAR_5;
  break;

 case 129:
  break;
 }

 switch (VAR_11->max_bus_width) {
 case 8:
  VAR_9->mmc->caps |= VAR_4 | VAR_3;
  break;
 case 4:
  VAR_9->mmc->caps |= VAR_3;
  break;
 case 1:
 default:
  VAR_9->quirks |= VAR_7;
  break;
 }

 return 0;
}
