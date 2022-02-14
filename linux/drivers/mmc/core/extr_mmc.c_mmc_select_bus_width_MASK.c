
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int caps; } ;
struct TYPE_2__ {int generic_cmd6_time; } ;
struct mmc_card {TYPE_1__ ext_csd; struct mmc_host* host; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;


 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mmc_card*,unsigned int) ;
 int FUNC_2 (struct mmc_card*) ;
 int FUNC_3 (struct mmc_card*,unsigned int) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*,unsigned int) ;
 int FUNC_6 (struct mmc_card*,int ,int ,unsigned int,int ) ;
 int FUNC_7 (char*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct mmc_card *VAR_5)
{
 static unsigned VAR_6[] = {
  130,
  131,
 };
 static unsigned VAR_7[] = {
  128,
  129,
 };
 struct mmc_host *VAR_8 = VAR_5->host;
 unsigned VAR_9, VAR_10 = 0;
 int VAR_11 = 0;

 if (!FUNC_2(VAR_5) ||
     !(VAR_8->caps & (VAR_2 | VAR_3)))
  return 0;

 VAR_9 = (VAR_8->caps & VAR_3) ? 0 : 1;







 for (; VAR_9 < FUNC_0(VAR_7); VAR_9++) {







  VAR_11 = FUNC_6(VAR_5, VAR_1,
     VAR_0,
     VAR_6[VAR_9],
     VAR_5->ext_csd.generic_cmd6_time);
  if (VAR_11)
   continue;

  VAR_10 = VAR_7[VAR_9];
  FUNC_5(VAR_8, VAR_10);






  if (!(VAR_8->caps & VAR_4))
   VAR_11 = FUNC_3(VAR_5, VAR_10);
  else
   VAR_11 = FUNC_1(VAR_5, VAR_10);

  if (!VAR_11) {
   VAR_11 = VAR_10;
   break;
  } else {
   FUNC_7("%s: switch to bus width %d failed\n",
    FUNC_4(VAR_8), 1 << VAR_10);
  }
 }

 return VAR_11;
}
