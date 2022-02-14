
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ios {int dummy; } ;
struct dw_mci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dw_mci*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct dw_mci *VAR_2,
       struct mmc_ios *VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_0(VAR_2, 32, VAR_0);
 if (VAR_4 < 0)
  return -VAR_1;

 return 0;
}
