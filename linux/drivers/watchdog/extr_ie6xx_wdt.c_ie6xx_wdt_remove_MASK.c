
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ sch_wdtba; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 struct resource* FUNC_2 (struct platform_device*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct resource *VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_0, 0);
 FUNC_1(((void*)0));
 FUNC_5(&VAR_2);
 FUNC_0();
 FUNC_3(VAR_4->start, FUNC_4(VAR_4));
 VAR_1.sch_wdtba = 0;

 return 0;
}
