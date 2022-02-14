
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cvm_mmc_host {scalar_t__ base; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct cvm_mmc_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct cvm_mmc_host *VAR_2, u64 VAR_3)
{
 u64 VAR_4;

 VAR_4 = FUNC_3(VAR_2->base + FUNC_1(VAR_2));
 VAR_4 |= FUNC_0(VAR_1, 1) |
     FUNC_0(VAR_0, 1);
 FUNC_4(&VAR_4, FUNC_2(VAR_3));
 FUNC_5(VAR_4, VAR_2->base + FUNC_1(VAR_2));
}
