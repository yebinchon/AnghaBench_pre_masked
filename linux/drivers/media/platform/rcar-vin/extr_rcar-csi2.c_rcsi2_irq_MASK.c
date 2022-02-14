
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_csi2 {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rcar_csi2*,int ) ;
 int FUNC_2 (struct rcar_csi2*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct rcar_csi2 *VAR_6 = VAR_5;
 u32 VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_6, VAR_1);
 VAR_8 = FUNC_1(VAR_6, VAR_0);

 if (!VAR_7)
  return VAR_2;

 FUNC_2(VAR_6, VAR_1, VAR_7);

 if (!VAR_8)
  return VAR_2;

 FUNC_2(VAR_6, VAR_0, VAR_8);

 FUNC_0(VAR_6->dev, "Transfer error, restarting CSI-2 receiver\n");

 return VAR_3;
}
