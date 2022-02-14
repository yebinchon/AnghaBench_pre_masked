
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos_srom {scalar_t__ reg_base; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*,int*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct exynos_srom *VAR_13,
          struct device_node *VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17 = 0;
 u32 VAR_18[6];
 u32 VAR_19, VAR_20;

 if (FUNC_2(VAR_14, "reg", &VAR_15))
  return -VAR_0;
 if (FUNC_2(VAR_14, "reg-io-width", &VAR_16))
  VAR_16 = 1;
 if (FUNC_1(VAR_14, "samsung,srom-page-mode"))
  VAR_17 = 1 << VAR_2;
 if (FUNC_3(VAR_14, "samsung,srom-timing", VAR_18,
           FUNC_0(VAR_18)))
  return -VAR_0;

 VAR_15 *= 4;

 VAR_19 = 1 << VAR_10;
 if (VAR_16 == 2)
  VAR_19 |= 1 << VAR_12;

 VAR_20 = FUNC_4(VAR_13->reg_base + VAR_9);
 VAR_20 = (VAR_20 & ~(VAR_11 << VAR_15)) | (VAR_19 << VAR_15);
 FUNC_5(VAR_20, VAR_13->reg_base + VAR_9);

 FUNC_5(VAR_17 | (VAR_18[0] << VAR_4) |
         (VAR_18[1] << VAR_6) |
         (VAR_18[2] << VAR_7) |
         (VAR_18[3] << VAR_3) |
         (VAR_18[4] << VAR_8) |
         (VAR_18[5] << VAR_5),
         VAR_13->reg_base + VAR_1 + VAR_15);

 return 0;
}
