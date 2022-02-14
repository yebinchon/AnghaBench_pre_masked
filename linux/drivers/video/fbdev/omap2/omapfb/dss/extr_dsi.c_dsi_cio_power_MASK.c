
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
typedef enum dsi_cio_power_state { ____Placeholder_dsi_cio_power_state } dsi_cio_power_state ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct platform_device*,int ,int,int,int) ;
 int FUNC_3 (struct platform_device*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2,
  enum dsi_cio_power_state VAR_3)
{
 int VAR_4 = 0;


 FUNC_2(VAR_2, VAR_0, VAR_3, 28, 27);


 while (FUNC_1(FUNC_3(VAR_2, VAR_0),
   26, 25) != VAR_3) {
  if (++VAR_4 > 1000) {
   FUNC_0("failed to set complexio power state to "
     "%d\n", VAR_3);
   return -VAR_1;
  }
  FUNC_4(1);
 }

 return 0;
}
