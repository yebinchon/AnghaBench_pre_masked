
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap3isp_prev_wbal {int dgain; int coef0; int coef1; int coef2; int coef3; } ;
struct prev_params {struct omap3isp_prev_wbal wbal; } ;
struct isp_prev_device {int dummy; } ;
struct isp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct isp_device*,int,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_prev_device*) ;

__attribute__((used)) static void
FUNC_2(struct isp_prev_device *VAR_28,
       const struct prev_params *VAR_29)
{
 struct isp_device *VAR_30 = FUNC_1(VAR_28);
 const struct omap3isp_prev_wbal *VAR_31 = &VAR_29->wbal;
 u32 VAR_32;

 FUNC_0(VAR_30, VAR_31->dgain, VAR_27, VAR_26);

 VAR_32 = VAR_31->coef0 << VAR_1;
 VAR_32 |= VAR_31->coef1 << VAR_2;
 VAR_32 |= VAR_31->coef2 << VAR_3;
 VAR_32 |= VAR_31->coef3 << VAR_4;
 FUNC_0(VAR_30, VAR_32, VAR_27, VAR_0);

 FUNC_0(VAR_30,
         VAR_6 << VAR_10 |
         VAR_7 << VAR_11 |
         VAR_6 << VAR_12 |
         VAR_7 << VAR_13 |
         VAR_8 << VAR_14 |
         VAR_9 << VAR_15 |
         VAR_8 << VAR_16 |
         VAR_9 << VAR_17 |
         VAR_6 << VAR_18 |
         VAR_7 << VAR_19 |
         VAR_6 << VAR_20 |
         VAR_7 << VAR_21 |
         VAR_8 << VAR_22 |
         VAR_9 << VAR_23 |
         VAR_8 << VAR_24 |
         VAR_9 << VAR_25,
         VAR_27, VAR_5);
}
