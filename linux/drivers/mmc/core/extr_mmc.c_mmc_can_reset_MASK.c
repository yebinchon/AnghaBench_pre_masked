
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int rst_n_function; } ;
struct mmc_card {TYPE_1__ ext_csd; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct mmc_card *VAR_2)
{
 u8 VAR_3;

 VAR_3 = VAR_2->ext_csd.rst_n_function;
 if ((VAR_3 & VAR_1) != VAR_0)
  return 0;
 return 1;
}
