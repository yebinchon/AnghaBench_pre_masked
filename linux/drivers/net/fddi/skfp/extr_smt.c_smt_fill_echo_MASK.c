
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef scalar_t__ u_char ;
struct TYPE_2__ {int p_len; } ;
struct smt_p_echo {scalar_t__* ec_data; TYPE_1__ para; } ;
struct s_smc {int dummy; } ;


 int FUNC_0 (struct s_smc*) ;
 int FUNC_1 (struct smt_p_echo*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct s_smc *VAR_1, struct smt_p_echo *VAR_2, u_long VAR_3,
     int VAR_4)
{
 u_char *VAR_5 ;

 FUNC_0(VAR_1) ;
 FUNC_1(VAR_2,VAR_0) ;
 VAR_2->para.p_len = VAR_4 ;
 for (VAR_5 = VAR_2->ec_data ; VAR_4 ; VAR_4--) {
  *VAR_5++ = (u_char) VAR_3 ;
  VAR_3 += 13 ;
 }
}
