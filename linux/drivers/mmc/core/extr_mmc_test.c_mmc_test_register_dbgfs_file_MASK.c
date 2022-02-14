
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mmc_card*,char*,int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mmc_card *VAR_5)
{
 int VAR_6;

 FUNC_1(&VAR_3);

 VAR_6 = FUNC_0(VAR_5, "test", VAR_1 | VAR_0,
  &VAR_2);
 if (VAR_6)
  goto err;

 VAR_6 = FUNC_0(VAR_5, "testlist", VAR_0,
  &VAR_4);
 if (VAR_6)
  goto err;

err:
 FUNC_2(&VAR_3);

 return VAR_6;
}
