
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visor_device {int visorchannel; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct visor_device*) ;
 struct visor_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct visor_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->visorchannel);
 FUNC_0(VAR_1);
}
