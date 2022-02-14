
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_5__ {int enb; int eit; void* mis; void* rdata; void* ie; void* dir; void* wdata; } ;
struct TYPE_4__ {void* ngpio; } ;
struct plgpio {int p2o_regs; TYPE_2__ regs; TYPE_1__ chip; int o2p; int p2o; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (struct device_node*,char*,void**) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_8, struct plgpio *VAR_9)
{
 struct device_node *VAR_10 = VAR_8->dev.of_node;
 int VAR_11 = -VAR_0;
 u32 VAR_12;

 if (FUNC_1("st,spear310")) {
  VAR_9->p2o = VAR_7;
  VAR_9->o2p = VAR_6;
  VAR_9->p2o_regs = VAR_5 | VAR_1 | VAR_2 |
   VAR_4 | VAR_3;
 }

 if (!FUNC_2(VAR_10, "st-plgpio,ngpio", &VAR_12)) {
  VAR_9->chip.ngpio = VAR_12;
 } else {
  FUNC_0(&VAR_8->dev, "DT: Invalid ngpio field\n");
  goto end;
 }

 if (!FUNC_2(VAR_10, "st-plgpio,enb-reg", &VAR_12))
  VAR_9->regs.enb = VAR_12;
 else
  VAR_9->regs.enb = -1;

 if (!FUNC_2(VAR_10, "st-plgpio,wdata-reg", &VAR_12)) {
  VAR_9->regs.wdata = VAR_12;
 } else {
  FUNC_0(&VAR_8->dev, "DT: Invalid wdata reg\n");
  goto end;
 }

 if (!FUNC_2(VAR_10, "st-plgpio,dir-reg", &VAR_12)) {
  VAR_9->regs.dir = VAR_12;
 } else {
  FUNC_0(&VAR_8->dev, "DT: Invalid dir reg\n");
  goto end;
 }

 if (!FUNC_2(VAR_10, "st-plgpio,ie-reg", &VAR_12)) {
  VAR_9->regs.ie = VAR_12;
 } else {
  FUNC_0(&VAR_8->dev, "DT: Invalid ie reg\n");
  goto end;
 }

 if (!FUNC_2(VAR_10, "st-plgpio,rdata-reg", &VAR_12)) {
  VAR_9->regs.rdata = VAR_12;
 } else {
  FUNC_0(&VAR_8->dev, "DT: Invalid rdata reg\n");
  goto end;
 }

 if (!FUNC_2(VAR_10, "st-plgpio,mis-reg", &VAR_12)) {
  VAR_9->regs.mis = VAR_12;
 } else {
  FUNC_0(&VAR_8->dev, "DT: Invalid mis reg\n");
  goto end;
 }

 if (!FUNC_2(VAR_10, "st-plgpio,eit-reg", &VAR_12))
  VAR_9->regs.eit = VAR_12;
 else
  VAR_9->regs.eit = -1;

 return 0;

end:
 return VAR_11;
}
