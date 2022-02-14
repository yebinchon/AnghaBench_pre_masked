
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rcsi2_mbps_reg {int mbps; int reg; } ;
struct rcar_csi2 {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct rcar_csi2*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct rcar_csi2 *VAR_1, unsigned int VAR_2,
     const struct rcsi2_mbps_reg *VAR_3, u16 VAR_4)
{
 const struct rcsi2_mbps_reg *VAR_5;

 for (VAR_5 = VAR_3; VAR_5->mbps; VAR_5++)
  if (VAR_5->mbps >= VAR_2)
   break;

 if (!VAR_5->mbps) {
  FUNC_0(VAR_1->dev, "Unsupported PHY speed (%u Mbps)", VAR_2);
  return -VAR_0;
 }

 return FUNC_1(VAR_1, VAR_5->reg, VAR_4);
}
