
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cvm_mmc_host {scalar_t__ base; } ;


 scalar_t__ FUNC_0 (struct cvm_mmc_host*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct cvm_mmc_host*) ;
 int FUNC_2 (struct cvm_mmc_host*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct cvm_mmc_host *VAR_1, u64 VAR_2)
{
 int VAR_3 = 100;
 u64 VAR_4;
 int VAR_5;





 VAR_5 = FUNC_4(VAR_2);
 FUNC_3(&VAR_2);
 FUNC_8(VAR_2, VAR_1->base + FUNC_1(VAR_1));

 FUNC_6(&VAR_2, VAR_5);
 FUNC_8(VAR_2, VAR_1->base + FUNC_1(VAR_1));


 do {
  VAR_4 = FUNC_5(VAR_1->base + FUNC_0(VAR_1));
  if (!(VAR_4 & VAR_0))
   break;
  FUNC_7(10);
 } while (--VAR_3);

 FUNC_2(VAR_1);
}
