
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mmc_host {scalar_t__ f_max; scalar_t__ f_min; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*,unsigned int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, u64 VAR_2)
{
 struct mmc_host *VAR_3 = VAR_1;


 if (VAR_2 != 0 && (VAR_2 > VAR_3->f_max || VAR_2 < VAR_3->f_min))
  return -VAR_0;

 FUNC_0(VAR_3);
 FUNC_2(VAR_3, (unsigned int) VAR_2);
 FUNC_1(VAR_3);

 return 0;
}
