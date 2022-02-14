
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int linear_tbl1_addr; int linear_tbl0_addr; int base_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 struct resource* FUNC_1 (struct platform_device*,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct resource *VAR_4;
 int VAR_5 = 0;

 FUNC_0(VAR_1.base_addr);
 FUNC_0(VAR_1.linear_tbl0_addr);
 FUNC_0(VAR_1.linear_tbl1_addr);
 while (VAR_5 < 3) {
  VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_5);
  if (VAR_4)
   FUNC_2(VAR_4->start, FUNC_3(VAR_4));
  VAR_5++;
 }
 FUNC_4(&VAR_2);
 return 0;
}
