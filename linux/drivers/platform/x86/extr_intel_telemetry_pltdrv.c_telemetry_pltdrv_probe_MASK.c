
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct x86_cpu_id {scalar_t__ driver_data; } ;
struct TYPE_4__ {int ssram_size; void* regmap; int ssram_base_addr; } ;
struct TYPE_3__ {int ssram_size; void* regmap; int ssram_base_addr; } ;
struct telemetry_plt_config {TYPE_2__ ioss_config; TYPE_1__ pss_config; int telem_trace_lock; int telem_lock; } ;
struct resource {int start; } ;
struct platform_device {int dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,int,int ) ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct resource*) ;
 int VAR_5 ;
 int FUNC_8 (int *,struct telemetry_plt_config*) ;
 int FUNC_9 (struct platform_device*) ;
 struct telemetry_plt_config* VAR_6 ;
 int VAR_7 ;
 struct x86_cpu_id* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_8)
{
 struct resource *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 const struct x86_cpu_id *VAR_11;
 int VAR_12, VAR_13 = -VAR_3;

 VAR_11 = FUNC_10(VAR_5);
 if (!VAR_11)
  return -VAR_2;

 VAR_6 = (struct telemetry_plt_config *)VAR_11->driver_data;

 VAR_9 = FUNC_5(VAR_8, VAR_4, 0);
 if (!VAR_9) {
  VAR_13 = -VAR_1;
  goto out;
 }
 VAR_12 = FUNC_7(VAR_9);
 if (!FUNC_1(&VAR_8->dev, VAR_9->start, VAR_12,
         VAR_8->name)) {
  VAR_13 = -VAR_0;
  goto out;
 }
 VAR_6->pss_config.ssram_base_addr = VAR_9->start;
 VAR_6->pss_config.ssram_size = VAR_12;

 VAR_10 = FUNC_5(VAR_8, VAR_4, 1);
 if (!VAR_10) {
  VAR_13 = -VAR_1;
  goto out;
 }
 VAR_12 = FUNC_7(VAR_10);
 if (!FUNC_1(&VAR_8->dev, VAR_10->start, VAR_12,
         VAR_8->name)) {
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_6->ioss_config.ssram_base_addr = VAR_10->start;
 VAR_6->ioss_config.ssram_size = VAR_12;

 VAR_6->pss_config.regmap = FUNC_2(
     VAR_6->pss_config.ssram_base_addr,
     VAR_6->pss_config.ssram_size);
 if (!VAR_6->pss_config.regmap) {
  VAR_13 = -VAR_3;
  goto out;
 }

 VAR_6->ioss_config.regmap = FUNC_2(
    VAR_6->ioss_config.ssram_base_addr,
    VAR_6->ioss_config.ssram_size);
 if (!VAR_6->ioss_config.regmap) {
  VAR_13 = -VAR_3;
  goto out;
 }

 FUNC_4(&VAR_6->telem_lock);
 FUNC_4(&VAR_6->telem_trace_lock);

 VAR_13 = FUNC_9(VAR_8);
 if (VAR_13)
  goto out;

 VAR_13 = FUNC_8(&VAR_7, VAR_6);
 if (VAR_13) {
  FUNC_0(&VAR_8->dev, "TELEMETRY Set Pltops Failed.\n");
  goto out;
 }

 return 0;

out:
 if (VAR_9)
  FUNC_6(VAR_9->start, FUNC_7(VAR_9));
 if (VAR_10)
  FUNC_6(VAR_10->start, FUNC_7(VAR_10));
 if (VAR_6->pss_config.regmap)
  FUNC_3(VAR_6->pss_config.regmap);
 if (VAR_6->ioss_config.regmap)
  FUNC_3(VAR_6->ioss_config.regmap);
 FUNC_0(&VAR_8->dev, "TELEMETRY Setup Failed.\n");

 return VAR_13;
}
