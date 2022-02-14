
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct isp_device {int dummy; } ;
struct TYPE_2__ {int b_mg; int gb_g; int gr_cy; int r_ye; } ;
struct isp_ccdc_device {TYPE_1__ blcomp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct isp_device*,int,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_ccdc_device*) ;

__attribute__((used)) static void FUNC_2(struct isp_ccdc_device *VAR_6)
{
 struct isp_device *VAR_7 = FUNC_1(VAR_6);
 u32 VAR_8;

 VAR_8 = VAR_6->blcomp.b_mg << VAR_1;
 VAR_8 |= VAR_6->blcomp.gb_g << VAR_2;
 VAR_8 |= VAR_6->blcomp.gr_cy << VAR_3;
 VAR_8 |= VAR_6->blcomp.r_ye << VAR_4;

 FUNC_0(VAR_7, VAR_8, VAR_5, VAR_0);
}
