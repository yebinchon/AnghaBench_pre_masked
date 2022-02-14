
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_device {int dummy; } ;
struct isp_ccdc_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct isp_device*,int ,int ) ;
 int FUNC_1 (struct isp_ccdc_device*) ;
 struct isp_device* FUNC_2 (struct isp_ccdc_device*) ;

__attribute__((used)) static int FUNC_3(struct isp_ccdc_device *VAR_6)
{
 struct isp_device *VAR_7 = FUNC_2(VAR_6);

 return FUNC_1(VAR_6)
  | (FUNC_0(VAR_7, VAR_5, VAR_0) &
     VAR_1)
  | (FUNC_0(VAR_7, VAR_5, VAR_2) &
     VAR_1)
  | (FUNC_0(VAR_7, VAR_5, VAR_3) &
     VAR_1)
  | (FUNC_0(VAR_7, VAR_5, VAR_4) &
     VAR_1);
}
