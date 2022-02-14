
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
 int FUNC_0 (struct isp_device*,int ,int ) ;
 int FUNC_1 (struct isp_device*,int,int ,int ) ;
 int FUNC_2 () ;
 struct isp_device* FUNC_3 (struct isp_ccdc_device*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct isp_ccdc_device *VAR_4)
{
 struct isp_device *VAR_5 = FUNC_3(VAR_4);
 unsigned int VAR_6;

 FUNC_1(VAR_5, VAR_1,
         VAR_3, VAR_2);


 for (VAR_6 = 0; VAR_6 < 1000; VAR_6++) {
  if (FUNC_0(VAR_5, VAR_3, VAR_2) &
      VAR_1) {
   FUNC_1(VAR_5, VAR_1,
           VAR_3, VAR_2);
   return 0;
  }

  FUNC_2();
  FUNC_4(1);
 }

 return -VAR_0;
}
