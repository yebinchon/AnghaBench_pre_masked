
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mmc_card {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct mmc_card*,int ,int ,int) ;

int FUNC_1(struct mmc_card *VAR_6, u8 VAR_7)
{
 int VAR_8;

 if (VAR_7 == VAR_5)
  VAR_8 = 8;
 else if (VAR_7 == VAR_4)
  VAR_8 = 4;
 else if (VAR_7 == VAR_3)
  return 0;
 else
  return -VAR_0;





 FUNC_0(VAR_6, VAR_6->host, VAR_2, VAR_8);
 return FUNC_0(VAR_6, VAR_6->host, VAR_1, VAR_8);
}
