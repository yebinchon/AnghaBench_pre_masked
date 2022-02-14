
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imgu_mmu {int dev; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (scalar_t__,int,int,int,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct imgu_mmu *VAR_2, bool VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 FUNC_2(VAR_3, VAR_2->base + VAR_0);
 VAR_4 = FUNC_1(VAR_2->base + VAR_1,
     VAR_5, (VAR_5 & 1) == VAR_3, 1000, 100000);

 if (VAR_4)
  FUNC_0(VAR_2->dev, "failed to %s CIO gate halt\n",
   VAR_3 ? "set" : "clear");
}
