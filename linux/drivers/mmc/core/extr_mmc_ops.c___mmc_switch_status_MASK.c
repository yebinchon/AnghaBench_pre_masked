
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_card {int host; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_card*,int *) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct mmc_card *VAR_1, bool VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_3);
 if (!VAR_2 && VAR_4 == -VAR_0)
  return 0;
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_1->host, VAR_3);
}
