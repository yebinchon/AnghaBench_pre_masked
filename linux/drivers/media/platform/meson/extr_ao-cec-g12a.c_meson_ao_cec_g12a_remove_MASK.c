
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct meson_ao_cec_g12a_device {int adap; int notify; int core; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct meson_ao_cec_g12a_device* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct meson_ao_cec_g12a_device *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_1->core);

 FUNC_0(VAR_1->notify);

 FUNC_1(VAR_1->adap);

 return 0;
}
