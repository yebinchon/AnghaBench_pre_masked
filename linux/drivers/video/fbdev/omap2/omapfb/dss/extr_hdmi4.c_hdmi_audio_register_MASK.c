
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hdmi_audio_pdata {int version; int * ops; int audio_dma_addr; struct device* dev; } ;
struct device {int dummy; } ;
typedef int pdata ;
struct TYPE_2__ {int audio_pdev; int wp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int ,struct omap_hdmi_audio_pdata*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3)
{
 struct omap_hdmi_audio_pdata VAR_4 = {
  .dev = VAR_3,
  .version = 4,
  .audio_dma_addr = FUNC_1(&VAR_1.wp),
  .ops = &VAR_2,
 };

 VAR_1.audio_pdev = FUNC_2(
  VAR_3, "omap-hdmi-audio", VAR_0,
  &VAR_4, sizeof(VAR_4));

 return FUNC_0(VAR_1.audio_pdev);
}
