
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int dummy; } ;
struct pxa27x_ohci {int* vbus_enabled; struct regulator** vbus; } ;


 scalar_t__ FUNC_0 (struct regulator*) ;
 int FUNC_1 (struct regulator*) ;
 int FUNC_2 (struct regulator*) ;

__attribute__((used)) static int FUNC_3(struct pxa27x_ohci *VAR_0,
          unsigned int VAR_1, bool VAR_2)
{
 struct regulator *VAR_3 = VAR_0->vbus[VAR_1];
 int VAR_4 = 0;

 if (FUNC_0(VAR_3))
  return 0;

 if (VAR_2 && !VAR_0->vbus_enabled[VAR_1])
  VAR_4 = FUNC_2(VAR_3);
 else if (!VAR_2 && VAR_0->vbus_enabled[VAR_1])
  VAR_4 = FUNC_1(VAR_3);

 if (VAR_4 < 0)
  return VAR_4;

 VAR_0->vbus_enabled[VAR_1] = VAR_2;

 return 0;
}
