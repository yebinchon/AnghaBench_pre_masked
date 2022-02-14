
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_ccdc_device {int update; } ;
struct isp_device {struct isp_ccdc_device isp_ccdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct isp_ccdc_device*) ;
 int FUNC_1 (struct isp_ccdc_device*) ;
 int FUNC_2 (struct isp_device*,int ,int ,int ) ;

void FUNC_3(struct isp_device *VAR_7)
{
 struct isp_ccdc_device *VAR_8 = &VAR_7->isp_ccdc;

 FUNC_2(VAR_7, VAR_6, VAR_0, VAR_1);

 VAR_8->update = VAR_2 | VAR_5
       | VAR_4 | VAR_3;
 FUNC_0(VAR_8);
 FUNC_1(VAR_8);
}
