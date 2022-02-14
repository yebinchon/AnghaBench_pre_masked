
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 int VAR_5 = 10;
 u32 VAR_6;

 VAR_1 = 133;

 VAR_6 = FUNC_0();
 if (VAR_6 != -1)
  VAR_1 = VAR_6;


 VAR_3 = FUNC_4(VAR_4->dev.of_node, 0);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 FUNC_2(VAR_5);

 FUNC_1();

 return FUNC_3(&VAR_2);
}
