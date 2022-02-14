
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isp_ccdc_device {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct isp_ccdc_device*) ;
 int FUNC_1 (struct isp_ccdc_device*,int) ;
 int FUNC_2 (struct isp_ccdc_device*) ;
 int FUNC_3 (struct isp_ccdc_device*) ;

int FUNC_4(struct isp_ccdc_device *VAR_4, u32 VAR_5)
{
 if (VAR_4->state == VAR_3)
  return 0;

 if (VAR_5 & VAR_1)
  FUNC_3(VAR_4);

 FUNC_1(VAR_4, VAR_5);

 if (VAR_5 & VAR_0)
  FUNC_2(VAR_4);

 if (VAR_5 & VAR_2)
  FUNC_0(VAR_4);

 return 0;
}
