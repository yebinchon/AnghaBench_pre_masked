
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct arm_ccn {scalar_t__ base; int dev; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(struct arm_ccn *VAR_3,
  const u32 *VAR_4)
{

 FUNC_0(VAR_3->dev, "Error reported in %08x%08x%08x%08x%08x%08x.\n",
   VAR_4[5], VAR_4[4], VAR_4[3],
   VAR_4[2], VAR_4[1], VAR_4[0]);
 FUNC_0(VAR_3->dev, "Disabling interrupt generation for all errors.\n");
 FUNC_1(VAR_1,
   VAR_3->base + VAR_0);

 return VAR_2;
}
