
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap3isp_prev_dcor {scalar_t__ couplet_mode_en; int * detect_correct; } ;
struct prev_params {struct omap3isp_prev_dcor dcor; } ;
struct isp_prev_device {int dummy; } ;
struct isp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct isp_device*,int ,int ,int ,int ) ;
 int FUNC_1 (struct isp_device*,int ,int ,int ) ;
 struct isp_device* FUNC_2 (struct isp_prev_device*) ;

__attribute__((used)) static void
FUNC_3(struct isp_prev_device *VAR_7,
      const struct prev_params *VAR_8)
{
 struct isp_device *VAR_9 = FUNC_2(VAR_7);
 const struct omap3isp_prev_dcor *VAR_10 = &VAR_8->dcor;

 FUNC_1(VAR_9, VAR_10->detect_correct[0],
         VAR_6, VAR_0);
 FUNC_1(VAR_9, VAR_10->detect_correct[1],
         VAR_6, VAR_1);
 FUNC_1(VAR_9, VAR_10->detect_correct[2],
         VAR_6, VAR_2);
 FUNC_1(VAR_9, VAR_10->detect_correct[3],
         VAR_6, VAR_3);
 FUNC_0(VAR_9, VAR_6, VAR_4,
   VAR_5,
   VAR_10->couplet_mode_en ? VAR_5 : 0);
}
