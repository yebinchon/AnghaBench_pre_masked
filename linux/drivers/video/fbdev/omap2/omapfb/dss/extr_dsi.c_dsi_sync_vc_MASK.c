
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct dsi_data {TYPE_1__* vc; } ;
struct TYPE_2__ {int source; } ;


 int FUNC_0 () ;


 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct platform_device*) ;
 struct dsi_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int) ;
 int FUNC_5 (struct platform_device*,int) ;
 int FUNC_6 (struct platform_device*,int) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1, int VAR_2)
{
 struct dsi_data *VAR_3 = FUNC_3(VAR_1);

 FUNC_1(!FUNC_2(VAR_1));

 FUNC_1(FUNC_7());

 if (!FUNC_6(VAR_1, VAR_2))
  return 0;

 switch (VAR_3->vc[VAR_2].source) {
 case 128:
  return FUNC_5(VAR_1, VAR_2);
 case 129:
  return FUNC_4(VAR_1, VAR_2);
 default:
  FUNC_0();
  return -VAR_0;
 }
}
