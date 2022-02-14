
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rockchip_iodomain {int dev; int grf; TYPE_1__* supplies; } ;
struct TYPE_2__ {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct rockchip_iodomain *VAR_3)
{
 int VAR_4;
 u32 VAR_5;


 if (!VAR_3->supplies[VAR_2].reg)
  return;





 VAR_5 = VAR_1 | (VAR_1 << 16);
 VAR_4 = FUNC_1(VAR_3->grf, VAR_0, VAR_5);
 if (VAR_4 < 0)
  FUNC_0(VAR_3->dev, "couldn't update flash0 ctrl\n");
}
