
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap3isp_ccdc_lsc_config {int offset; int gain_mode_n; int gain_mode_m; int gain_format; int initial_x; int initial_y; } ;
struct isp_device {int dummy; } ;
struct isp_ccdc_device {int dummy; } ;


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
 int FUNC_0 (struct isp_device*,int,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_ccdc_device*) ;

__attribute__((used)) static void FUNC_2(struct isp_ccdc_device *VAR_11,
    struct omap3isp_ccdc_lsc_config *VAR_12)
{
 struct isp_device *VAR_13 = FUNC_1(VAR_11);
 int VAR_14;

 FUNC_0(VAR_13, VAR_12->offset, VAR_10,
         VAR_9);

 VAR_14 = 0;
 VAR_14 |= VAR_12->gain_mode_n << VAR_3;
 VAR_14 |= VAR_12->gain_mode_m << VAR_2;
 VAR_14 |= VAR_12->gain_format << VAR_1;
 FUNC_0(VAR_13, VAR_14, VAR_10, VAR_0);

 VAR_14 = 0;
 VAR_14 &= ~VAR_5;
 VAR_14 |= VAR_12->initial_x << VAR_6;
 VAR_14 &= ~VAR_7;
 VAR_14 |= VAR_12->initial_y << VAR_8;
 FUNC_0(VAR_13, VAR_14, VAR_10,
         VAR_4);
}
