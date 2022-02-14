
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int base; } ;
struct c67x00_device {TYPE_1__ hpi; int * sie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct c67x00_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct c67x00_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct c67x00_device*) ;
 struct c67x00_device* FUNC_5 (struct platform_device*) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct resource*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3)
{
 struct c67x00_device *VAR_4 = FUNC_5(VAR_3);
 struct resource *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_1(&VAR_4->sie[VAR_6]);

 FUNC_0(VAR_4);

 VAR_5 = FUNC_6(VAR_3, VAR_1, 0);
 if (VAR_5)
  FUNC_2(VAR_5->start, VAR_4);

 FUNC_3(VAR_4->hpi.base);

 VAR_5 = FUNC_6(VAR_3, VAR_2, 0);
 if (VAR_5)
  FUNC_7(VAR_5->start, FUNC_8(VAR_5));

 FUNC_4(VAR_4);

 return 0;
}
