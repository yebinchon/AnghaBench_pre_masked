
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcsi2_mbps_reg {unsigned int mbps; int reg; } ;
struct rcar_csi2 {int dev; TYPE_1__* info; } ;
struct TYPE_2__ {struct rcsi2_mbps_reg* hsfreqrange; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (struct rcar_csi2*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rcar_csi2 *VAR_2, unsigned int VAR_3)
{
 const struct rcsi2_mbps_reg *VAR_4;

 for (VAR_4 = VAR_2->info->hsfreqrange; VAR_4->mbps != 0; VAR_4++)
  if (VAR_4->mbps >= VAR_3)
   break;

 if (!VAR_4->mbps) {
  FUNC_1(VAR_2->dev, "Unsupported PHY speed (%u Mbps)", VAR_3);
  return -VAR_0;
 }

 FUNC_2(VAR_2, VAR_1, FUNC_0(VAR_4->reg));

 return 0;
}
