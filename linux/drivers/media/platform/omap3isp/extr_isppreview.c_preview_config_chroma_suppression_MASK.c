
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap3isp_prev_csup {int gain; int thres; int hypf_en; } ;
struct prev_params {struct omap3isp_prev_csup csup; } ;
struct isp_prev_device {int dummy; } ;
struct isp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct isp_device*,int,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_prev_device*) ;

__attribute__((used)) static void
FUNC_2(struct isp_prev_device *VAR_4,
      const struct prev_params *VAR_5)
{
 struct isp_device *VAR_6 = FUNC_1(VAR_4);
 const struct omap3isp_prev_csup *VAR_7 = &VAR_5->csup;

 FUNC_0(VAR_6,
         VAR_7->gain | (VAR_7->thres << VAR_2) |
         (VAR_7->hypf_en << VAR_1),
         VAR_3, VAR_0);
}
