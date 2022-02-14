
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int FUNC_3 (struct platform_device*,int ,int,int ,int ) ;
 int FUNC_4 (struct platform_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1, int VAR_2,
  bool VAR_3)
{
 FUNC_1("dsi_vc_enable channel %d, enable %d\n",
   VAR_2, VAR_3);

 VAR_3 = VAR_3 ? 1 : 0;

 FUNC_3(VAR_1, FUNC_0(VAR_2), VAR_3, 0, 0);

 if (FUNC_4(VAR_1, FUNC_0(VAR_2),
  0, VAR_3) != VAR_3) {
   FUNC_2("Failed to set dsi_vc_enable to %d\n", VAR_3);
   return -VAR_0;
 }

 return 0;
}
