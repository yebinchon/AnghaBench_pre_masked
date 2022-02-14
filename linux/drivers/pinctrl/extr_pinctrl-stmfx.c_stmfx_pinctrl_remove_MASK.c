
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmfx {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct stmfx* FUNC_0 (int ) ;
 int FUNC_1 (struct stmfx*,int) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_3)
{
 struct stmfx *VAR_4 = FUNC_0(VAR_3->dev.parent);

 return FUNC_1(VAR_4,
          VAR_2 |
          VAR_1 |
          VAR_0);
}
