
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*) ;
 scalar_t__ FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,int,int*) ;
 int FUNC_5 (struct mmc_host*,int*) ;
 int FUNC_6 (struct mmc_host*,int) ;
 int FUNC_7 (struct mmc_host*,int) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct mmc_host*) ;

int FUNC_10(struct mmc_host *VAR_4, u32 VAR_5, u32 *VAR_6, u32 *VAR_7)
{
 int VAR_8;
 u32 VAR_9;
 int VAR_10 = 10;
 u32 VAR_11 = VAR_5;

try_again:
 if (!VAR_10) {
  VAR_5 &= ~VAR_2;
  FUNC_8("%s: Skipping voltage switch\n", FUNC_3(VAR_4));
 }







 FUNC_0(VAR_4);







 VAR_8 = FUNC_6(VAR_4, VAR_5);
 if (!VAR_8)
  VAR_5 |= VAR_1;






 if (VAR_10 && FUNC_2(VAR_4))
  VAR_5 |= VAR_2;





 VAR_9 = FUNC_9(VAR_4);
 if (VAR_9 > 150)
  VAR_5 |= VAR_3;

 VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_7);
 if (VAR_8)
  return VAR_8;





 if (!FUNC_1(VAR_4) && VAR_7 &&
    ((*VAR_7 & 0x41000000) == 0x41000000)) {
  VAR_8 = FUNC_7(VAR_4, VAR_11);
  if (VAR_8 == -VAR_0) {
   VAR_10--;
   goto try_again;
  } else if (VAR_8) {
   VAR_10 = 0;
   goto try_again;
  }
 }

 VAR_8 = FUNC_5(VAR_4, VAR_6);
 return VAR_8;
}
