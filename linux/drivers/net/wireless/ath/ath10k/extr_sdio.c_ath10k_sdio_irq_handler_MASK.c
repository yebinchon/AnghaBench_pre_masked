
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct ath10k_sdio {int func; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*,int*) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 unsigned long VAR_2 ;
 int FUNC_3 (int ) ;
 struct ath10k_sdio* FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct sdio_func *VAR_3)
{
 struct ath10k_sdio *VAR_4 = FUNC_4(VAR_3);
 struct ath10k *VAR_5 = VAR_4->ar;
 unsigned long VAR_6;
 bool VAR_7 = 0;
 int VAR_8;




 FUNC_5(VAR_4->func);

 VAR_6 = VAR_2 + VAR_0;
 do {
  VAR_8 = FUNC_1(VAR_5, &VAR_7);
  if (VAR_8)
   break;
 } while (FUNC_6(VAR_2, VAR_6) && !VAR_7);

 FUNC_0(VAR_5);

 FUNC_3(VAR_4->func);

 if (VAR_8 && VAR_8 != -VAR_1)
  FUNC_2(VAR_5, "failed to process pending SDIO interrupts: %d\n",
       VAR_8);
}
