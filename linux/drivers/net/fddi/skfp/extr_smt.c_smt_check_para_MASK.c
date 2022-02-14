
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
struct smt_header {int dummy; } ;
struct s_smc {int dummy; } ;


 int FUNC_0 (char*,scalar_t__ const) ;
 int FUNC_1 (struct s_smc*,struct smt_header*,int) ;

int FUNC_2(struct s_smc *VAR_0, struct smt_header *VAR_1,
     const u_short VAR_2[])
{
 const u_short *VAR_3 = VAR_2 ;
 while (*VAR_3) {
  if (!FUNC_1(VAR_0,VAR_1,(int) *VAR_3)) {
   FUNC_0("SMT: smt_check_para - missing para %hx", *VAR_3);
   return -1;
  }
  VAR_3++ ;
 }
 return 0;
}
