
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_ccdc_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct isp_ccdc_device*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct isp_ccdc_device *VAR_1,
         unsigned int VAR_2)
{
 unsigned int VAR_3 = 0;

 if (VAR_2 == 0)
  VAR_2 = 10000;

 for (VAR_3 = 0; VAR_3 <= VAR_2; VAR_3++) {
  if (!FUNC_0(VAR_1))
   return 0;

  FUNC_1();
  FUNC_2(1);
 }

 return -VAR_0;
}
