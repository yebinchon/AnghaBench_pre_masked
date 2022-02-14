
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct platform_device*,int ,int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static unsigned FUNC_3(struct platform_device *VAR_2)
{
 int VAR_3;





 if (!FUNC_2(VAR_1))
  return 1023 * 3;

 VAR_3 = FUNC_1(VAR_2, VAR_0, 14, 12);

 switch (VAR_3) {
 case 1:
  return 512 * 3;
 case 2:
  return 682 * 3;
 case 3:
  return 853 * 3;
 case 4:
  return 1024 * 3;
 case 5:
  return 1194 * 3;
 case 6:
  return 1365 * 3;
 case 7:
  return 1920 * 3;
 default:
  FUNC_0();
  return 0;
 }
}
