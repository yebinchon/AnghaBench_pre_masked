
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int *) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_1,
        int VAR_2, u8 *VAR_3)
{
 if (!VAR_1->dev.of_node)
  return -VAR_0;

 return FUNC_0(&VAR_1->dev, VAR_2, VAR_3);
}
