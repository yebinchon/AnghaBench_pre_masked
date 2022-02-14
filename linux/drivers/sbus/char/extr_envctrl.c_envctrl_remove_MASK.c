
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int * resource; } ;
struct TYPE_2__ {int tables; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_5)
{
 int VAR_6;

 FUNC_1(VAR_4);

 FUNC_3(&VAR_5->resource[0], VAR_2, 0x2);
 FUNC_2(&VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_0 * 2; VAR_6++)
  FUNC_0(VAR_3[VAR_6].tables);

 return 0;
}
