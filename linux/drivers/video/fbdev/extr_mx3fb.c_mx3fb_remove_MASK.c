
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct mx3fb_info {TYPE_1__* idmac_channel; } ;
struct mx3fb_data {int reg_base; struct fb_info* fbi; } ;
struct fb_info {struct mx3fb_info* par; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {struct dma_chan dma_chan; } ;


 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mx3fb_data*) ;
 struct mx3fb_data* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct fb_info*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct mx3fb_data *VAR_1 = FUNC_4(VAR_0);
 struct fb_info *VAR_2 = VAR_1->fbi;
 struct mx3fb_info *VAR_3 = VAR_2->par;
 struct dma_chan *VAR_4;

 VAR_4 = &VAR_3->idmac_channel->dma_chan;
 FUNC_5(VAR_2);

 FUNC_3(VAR_1);

 FUNC_0(VAR_4);
 FUNC_1();

 FUNC_2(VAR_1->reg_base);
 return 0;
}
