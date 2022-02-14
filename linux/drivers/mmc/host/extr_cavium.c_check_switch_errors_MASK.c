
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cvm_mmc_host {int dev; scalar_t__ base; } ;


 scalar_t__ FUNC_0 (struct cvm_mmc_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct cvm_mmc_host *VAR_3)
{
 u64 VAR_4;

 VAR_4 = FUNC_2(VAR_3->base + FUNC_0(VAR_3));
 if (VAR_4 & VAR_0)
  FUNC_1(VAR_3->dev, "Switch power class error\n");
 if (VAR_4 & VAR_1)
  FUNC_1(VAR_3->dev, "Switch hs timing error\n");
 if (VAR_4 & VAR_2)
  FUNC_1(VAR_3->dev, "Switch bus width error\n");
}
