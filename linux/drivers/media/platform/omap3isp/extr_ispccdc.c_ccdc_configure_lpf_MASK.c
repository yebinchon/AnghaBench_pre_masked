
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_device {int dummy; } ;
struct isp_ccdc_device {scalar_t__ lpf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct isp_device*,int ,int ,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_ccdc_device*) ;

__attribute__((used)) static void FUNC_2(struct isp_ccdc_device *VAR_3)
{
 struct isp_device *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_4, VAR_2, VAR_0,
   VAR_1,
   VAR_3->lpf ? VAR_1 : 0);
}
