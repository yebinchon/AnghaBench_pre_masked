
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tmio_mmc_host*,int) ;
 int FUNC_1 (struct tmio_mmc_host*,int) ;
 int FUNC_2 (struct tmio_mmc_host*,int) ;
 int FUNC_3 (struct tmio_mmc_host*) ;

__attribute__((used)) static bool FUNC_4(struct tmio_mmc_host *VAR_5, int VAR_6,
      int VAR_7)
{

 if (VAR_6 & (VAR_0 | VAR_1)) {
  FUNC_0(VAR_5, VAR_0 |
          VAR_1);
  FUNC_1(VAR_5, VAR_7);
  return 1;
 }


 if (VAR_6 & (VAR_3 | VAR_4)) {
  FUNC_0(VAR_5, VAR_3 | VAR_4);
  FUNC_3(VAR_5);
  return 1;
 }


 if (VAR_6 & VAR_2) {
  FUNC_0(VAR_5, VAR_2);
  FUNC_2(VAR_5, VAR_7);
  return 1;
 }

 return 0;
}
