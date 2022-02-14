
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct isp_device {int dummy; } ;
struct TYPE_2__ {int obgain; int oblen; int oblines; int obstpixel; int dcsubval; } ;
struct isp_ccdc_device {scalar_t__ obclamp; TYPE_1__ clamp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct isp_device*,int ,int ,int ,int ) ;
 int FUNC_1 (struct isp_device*,int,int ,int ) ;
 struct isp_device* FUNC_2 (struct isp_ccdc_device*) ;

__attribute__((used)) static void FUNC_3(struct isp_ccdc_device *VAR_8)
{
 struct isp_device *VAR_9 = FUNC_2(VAR_8);
 u32 VAR_10;

 if (VAR_8->obclamp) {
  VAR_10 = VAR_8->clamp.obgain << VAR_2;
  VAR_10 |= VAR_8->clamp.oblen << VAR_3;
  VAR_10 |= VAR_8->clamp.oblines << VAR_4;
  VAR_10 |= VAR_8->clamp.obstpixel << VAR_5;
  FUNC_1(VAR_9, VAR_10, VAR_7, VAR_0);
 } else {
  FUNC_1(VAR_9, VAR_8->clamp.dcsubval,
          VAR_7, VAR_6);
 }

 FUNC_0(VAR_9, VAR_7, VAR_0,
   VAR_1,
   VAR_8->obclamp ? VAR_1 : 0);
}
