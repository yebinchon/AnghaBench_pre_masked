
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap3isp_prev_yclimit {int maxC; int maxY; int minC; int minY; } ;
struct prev_params {struct omap3isp_prev_yclimit yclimit; } ;
struct isp_prev_device {int dummy; } ;
struct isp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct isp_device*,int,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_prev_device*) ;

__attribute__((used)) static void
FUNC_2(struct isp_prev_device *VAR_6,
   const struct prev_params *VAR_7)
{
 struct isp_device *VAR_8 = FUNC_1(VAR_6);
 const struct omap3isp_prev_yclimit *VAR_9 = &VAR_7->yclimit;

 FUNC_0(VAR_8,
         VAR_9->maxC << VAR_1 |
         VAR_9->maxY << VAR_2 |
         VAR_9->minC << VAR_3 |
         VAR_9->minY << VAR_4,
         VAR_5, VAR_0);
}
