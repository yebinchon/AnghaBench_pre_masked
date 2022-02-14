
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct iproc_mdiomux_desc {int core_clk; int mii_bus; int mux_handle; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct iproc_mdiomux_desc* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct iproc_mdiomux_desc *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1->mux_handle);
 FUNC_2(VAR_1->mii_bus);
 FUNC_0(VAR_1->core_clk);

 return 0;
}
