
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dsi_data {int framedone_data; int (* framedone_callback ) (int,int ) ;scalar_t__ te_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*,int ,int,int,int) ;
 int FUNC_1 () ;
 struct dsi_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,char*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_1, int VAR_2)
{
 struct dsi_data *VAR_3 = FUNC_2(VAR_1);


 FUNC_1();

 if (VAR_3->te_enabled) {

  FUNC_0(VAR_1, VAR_0, 1, 15, 15);
 }

 VAR_3->framedone_callback(VAR_2, VAR_3->framedone_data);

 if (!VAR_2)
  FUNC_3(VAR_1, "DISPC");
}
