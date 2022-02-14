
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int dummy; } ;
struct mmc_card {int dummy; } ;


 int FUNC_0 (struct mmc_card*) ;
 int FUNC_1 (struct mmc_card*) ;
 int FUNC_2 (struct mmc_card*) ;
 scalar_t__ FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_card*) ;
 int FUNC_6 (struct mmc_card*) ;
 int FUNC_7 (struct mmc_card*) ;
 int FUNC_8 (struct mmc_host*) ;
 int FUNC_9 (struct mmc_host*,int ) ;
 int FUNC_10 (char*,int ) ;
 int VAR_0 ;

int FUNC_11(struct mmc_host *VAR_1, struct mmc_card *VAR_2,
 bool VAR_3)
{
 int VAR_4;

 if (!VAR_3) {



  VAR_4 = FUNC_0(VAR_2);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4)
   return VAR_4;




  VAR_4 = FUNC_6(VAR_2);
  if (VAR_4)
   return VAR_4;


  FUNC_5(VAR_2);




  VAR_4 = FUNC_7(VAR_2);
  if (VAR_4)
   return VAR_4;
 }







 if (FUNC_3(VAR_1)) {
  VAR_4 = FUNC_9(VAR_1, VAR_0);
  if (VAR_4)
   return VAR_4;
 }




 if (!VAR_3) {
  int VAR_5 = FUNC_8(VAR_1);

  if (VAR_5 < 0) {
   FUNC_10("%s: host does not support reading read-only switch, assuming write-enable\n",
    FUNC_4(VAR_1));
  } else if (VAR_5 > 0) {
   FUNC_1(VAR_2);
  }
 }

 return 0;
}
