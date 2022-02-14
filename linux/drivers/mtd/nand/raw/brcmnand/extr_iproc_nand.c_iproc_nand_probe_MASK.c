
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct brcmnand_soc {int prepare_data_bus; int ctlrdy_set_enabled; int ctlrdy_ack; } ;
struct iproc_nand_soc {void* ext_base; void* idm_base; int idm_lock; struct brcmnand_soc soc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct platform_device*,struct brcmnand_soc*) ;
 void* FUNC_3 (struct device*,struct resource*) ;
 struct iproc_nand_soc* FUNC_4 (struct device*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct resource* FUNC_5 (struct platform_device*,int ,char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct iproc_nand_soc *VAR_8;
 struct brcmnand_soc *VAR_9;
 struct resource *VAR_10;

 VAR_8 = FUNC_4(VAR_7, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 VAR_9 = &VAR_8->soc;

 FUNC_6(&VAR_8->idm_lock);

 VAR_10 = FUNC_5(VAR_6, VAR_2, "iproc-idm");
 VAR_8->idm_base = FUNC_3(VAR_7, VAR_10);
 if (FUNC_0(VAR_8->idm_base))
  return FUNC_1(VAR_8->idm_base);

 VAR_10 = FUNC_5(VAR_6, VAR_2, "iproc-ext");
 VAR_8->ext_base = FUNC_3(VAR_7, VAR_10);
 if (FUNC_0(VAR_8->ext_base))
  return FUNC_1(VAR_8->ext_base);

 VAR_9->ctlrdy_ack = VAR_4;
 VAR_9->ctlrdy_set_enabled = VAR_5;
 VAR_9->prepare_data_bus = VAR_3;

 return FUNC_2(VAR_6, VAR_9);
}
