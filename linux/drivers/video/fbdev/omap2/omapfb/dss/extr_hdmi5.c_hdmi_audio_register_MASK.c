
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_hdmi_audio_pdata {int version; int * ops; int audio_dma_addr; struct device* dev; } ;
struct device {int dummy; } ;
typedef int pdata ;
struct TYPE_3__ {int base; } ;
struct TYPE_4__ {TYPE_1__ wp; int wp_idlemode; int audio_pdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct device*,char*,int ,struct omap_hdmi_audio_pdata*,int) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_4)
{
 struct omap_hdmi_audio_pdata VAR_5 = {
  .dev = VAR_4,
  .version = 5,
  .audio_dma_addr = FUNC_5(&VAR_2.wp),
  .ops = &VAR_3,
 };

 VAR_2.audio_pdev = FUNC_6(
  VAR_4, "omap-hdmi-audio", VAR_1,
  &VAR_5, sizeof(VAR_5));

 if (FUNC_0(VAR_2.audio_pdev))
  return FUNC_1(VAR_2.audio_pdev);

 FUNC_3();
 VAR_2.wp_idlemode =
  FUNC_2(VAR_2.wp.base, VAR_0, 3, 2);
 FUNC_4();

 return 0;
}
