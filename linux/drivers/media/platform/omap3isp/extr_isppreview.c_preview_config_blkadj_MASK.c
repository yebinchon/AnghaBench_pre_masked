
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap3isp_prev_blkadj {int blue; int green; int red; } ;
struct prev_params {struct omap3isp_prev_blkadj blkadj; } ;
struct isp_prev_device {int dummy; } ;
struct isp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct isp_device*,int,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_prev_device*) ;

__attribute__((used)) static void
FUNC_2(struct isp_prev_device *VAR_5,
        const struct prev_params *VAR_6)
{
 struct isp_device *VAR_7 = FUNC_1(VAR_5);
 const struct omap3isp_prev_blkadj *VAR_8 = &VAR_6->blkadj;

 FUNC_0(VAR_7, (VAR_8->blue << VAR_1) |
         (VAR_8->green << VAR_2) |
         (VAR_8->red << VAR_3),
         VAR_4, VAR_0);
}
