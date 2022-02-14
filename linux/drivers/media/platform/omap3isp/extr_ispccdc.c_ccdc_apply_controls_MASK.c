
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_ccdc_device {int update; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct isp_ccdc_device*) ;
 int FUNC_1 (struct isp_ccdc_device*) ;
 int FUNC_2 (struct isp_ccdc_device*) ;
 int FUNC_3 (struct isp_ccdc_device*) ;

__attribute__((used)) static void FUNC_4(struct isp_ccdc_device *VAR_4)
{
 if (VAR_4->update & VAR_0) {
  FUNC_0(VAR_4);
  VAR_4->update &= ~VAR_0;
 }

 if (VAR_4->update & VAR_3) {
  FUNC_3(VAR_4);
  VAR_4->update &= ~VAR_3;
 }

 if (VAR_4->update & VAR_2) {
  FUNC_2(VAR_4);
  VAR_4->update &= ~VAR_2;
 }

 if (VAR_4->update & VAR_1) {
  FUNC_1(VAR_4);
  VAR_4->update &= ~VAR_1;
 }
}
