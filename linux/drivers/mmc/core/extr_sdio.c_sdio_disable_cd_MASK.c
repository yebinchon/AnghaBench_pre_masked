
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mmc_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mmc_card*) ;
 int FUNC_1 (struct mmc_card*,int,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct mmc_card *VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 if (!FUNC_0(VAR_2))
  return 0;

 VAR_3 = FUNC_1(VAR_2, 0, 0, VAR_1, 0, &VAR_4);
 if (VAR_3)
  return VAR_3;

 VAR_4 |= VAR_0;

 return FUNC_1(VAR_2, 1, 0, VAR_1, VAR_4, ((void*)0));
}
