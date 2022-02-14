
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct dsi_data {TYPE_1__* vc; } ;
typedef enum dsi_vc_source { ____Placeholder_dsi_vc_source } dsi_vc_source ;
struct TYPE_2__ {int source; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct platform_device*,int ,int,int,int) ;
 struct dsi_data* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int) ;
 int FUNC_6 (struct platform_device*,int,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct platform_device*,int ,int,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3, int VAR_4,
  enum dsi_vc_source VAR_5)
{
 struct dsi_data *VAR_6 = FUNC_4(VAR_3);

 if (VAR_6->vc[VAR_4].source == VAR_5)
  return 0;

 FUNC_1("Source config of virtual channel %d", VAR_4);

 FUNC_5(VAR_3, VAR_4);

 FUNC_6(VAR_3, VAR_4, 0);


 if (FUNC_8(VAR_3, FUNC_0(VAR_4), 15, 0) != 0) {
  FUNC_2("vc(%d) busy when trying to config for VP\n", VAR_4);
  return -VAR_1;
 }


 FUNC_3(VAR_3, FUNC_0(VAR_4), VAR_5, 1, 1);


 if (FUNC_7(VAR_2)) {
  bool VAR_7 = VAR_5 == VAR_0;
  FUNC_3(VAR_3, FUNC_0(VAR_4), VAR_7, 30, 30);
 }

 FUNC_6(VAR_3, VAR_4, 1);

 VAR_6->vc[VAR_4].source = VAR_5;

 return 0;
}
