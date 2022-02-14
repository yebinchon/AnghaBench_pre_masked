
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_card {int mmc_avail_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mmc_card*) ;
 int FUNC_1 (struct mmc_card*) ;
 int FUNC_2 (struct mmc_card*) ;
 int FUNC_3 (struct mmc_card*) ;
 int FUNC_4 (struct mmc_card*) ;

__attribute__((used)) static int FUNC_5(struct mmc_card *VAR_4)
{
 int VAR_5 = 0;

 if (!FUNC_0(VAR_4))
  goto bus_speed;

 if (VAR_4->mmc_avail_type & VAR_3)
  VAR_5 = FUNC_3(VAR_4);
 else if (VAR_4->mmc_avail_type & VAR_2)
  VAR_5 = FUNC_2(VAR_4);
 else if (VAR_4->mmc_avail_type & VAR_1)
  VAR_5 = FUNC_1(VAR_4);

 if (VAR_5 && VAR_5 != -VAR_0)
  return VAR_5;

bus_speed:




 FUNC_4(VAR_4);
 return 0;
}
