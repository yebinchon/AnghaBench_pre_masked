
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl172_data {int clk; } ;
struct amba_device {int dummy; } ;


 struct pl172_data* FUNC_0 (struct amba_device*) ;
 int FUNC_1 (struct amba_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct amba_device *VAR_0)
{
 struct pl172_data *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1->clk);
 FUNC_1(VAR_0);

 return 0;
}
