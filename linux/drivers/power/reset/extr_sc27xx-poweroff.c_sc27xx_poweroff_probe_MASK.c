
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_6)
{
 if (VAR_4)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_6->dev.parent, ((void*)0));
 if (!VAR_4)
  return -VAR_1;

 VAR_2 = VAR_5;
 FUNC_1(&VAR_3);
 return 0;
}
