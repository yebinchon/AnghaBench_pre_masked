
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_9__ {char* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_8__ {int clear_wbl_overflow; int select_ccdc_source; int enable_clock; } ;
struct TYPE_10__ {scalar_t__ platform; int vpss_lock; TYPE_1__ hw_ops; void* vpss_regs_base1; void* vpss_regs_base0; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*,char*) ;
 void* FUNC_5 (TYPE_2__*,struct resource*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;
 TYPE_4__ VAR_31 ;
 struct resource* FUNC_8 (struct platform_device*,int ,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,char*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_32)
{
 struct resource *VAR_33;
 char *VAR_34;

 if (!VAR_32->dev.platform_data) {
  FUNC_3(&VAR_32->dev, "no platform data\n");
  return -VAR_24;
 }

 VAR_34 = VAR_32->dev.platform_data;
 if (!FUNC_12(VAR_34, "dm355_vpss"))
  VAR_31.platform = VAR_0;
 else if (!FUNC_12(VAR_34, "dm365_vpss"))
  VAR_31.platform = VAR_5;
 else if (!FUNC_12(VAR_34, "dm644x_vpss"))
  VAR_31.platform = VAR_22;
 else {
  FUNC_3(&VAR_32->dev, "vpss driver not supported on this platform\n");
  return -VAR_23;
 }

 FUNC_4(&VAR_32->dev, "%s vpss probed\n", VAR_34);
 VAR_33 = FUNC_8(VAR_32, VAR_25, 0);

 VAR_31.vpss_regs_base0 = FUNC_5(&VAR_32->dev, VAR_33);
 if (FUNC_0(VAR_31.vpss_regs_base0))
  return FUNC_1(VAR_31.vpss_regs_base0);

 if (VAR_31.platform == VAR_0 || VAR_31.platform == VAR_5) {
  VAR_33 = FUNC_8(VAR_32, VAR_25, 1);

  VAR_31.vpss_regs_base1 = FUNC_5(&VAR_32->dev,
         VAR_33);
  if (FUNC_0(VAR_31.vpss_regs_base1))
   return FUNC_1(VAR_31.vpss_regs_base1);
 }

 if (VAR_31.platform == VAR_0) {
  VAR_31.hw_ops.enable_clock = VAR_26;
  VAR_31.hw_ops.select_ccdc_source = VAR_27;

  FUNC_2(VAR_4, VAR_3);
  FUNC_2(VAR_2, VAR_1);
 } else if (VAR_31.platform == VAR_5) {
  VAR_31.hw_ops.enable_clock = VAR_28;
  VAR_31.hw_ops.select_ccdc_source = VAR_29;

  FUNC_7((FUNC_6(VAR_14) |
          VAR_15 |
          VAR_19 |
          VAR_16 |
          VAR_21 |
          VAR_18 |
          VAR_17 |
          VAR_20), VAR_14);
  FUNC_7((FUNC_6(VAR_6) |
       VAR_7), VAR_6);
  FUNC_7(VAR_9, VAR_8);
  FUNC_7(VAR_11, VAR_10);
  FUNC_7(VAR_13, VAR_12);
 } else
  VAR_31.hw_ops.clear_wbl_overflow = VAR_30;

 FUNC_9(&VAR_32->dev);

 FUNC_10(&VAR_32->dev);

 FUNC_11(&VAR_31.vpss_lock);
 FUNC_4(&VAR_32->dev, "%s vpss probe success\n", VAR_34);

 return 0;
}
