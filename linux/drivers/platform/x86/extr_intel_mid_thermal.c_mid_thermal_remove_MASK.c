
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_info {TYPE_1__** tzd; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int devdata; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct platform_info* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 int VAR_2;
 struct platform_info *VAR_3 = FUNC_2(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_1(VAR_3->tzd[VAR_2]->devdata);
  FUNC_3(VAR_3->tzd[VAR_2]);
 }


 return FUNC_0(0);
}
