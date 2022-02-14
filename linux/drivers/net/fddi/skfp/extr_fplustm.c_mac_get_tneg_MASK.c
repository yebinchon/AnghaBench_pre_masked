
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct s_smc {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u_long FUNC_2(struct s_smc *VAR_2)
{
 u_long VAR_3 ;

 VAR_3 = (u_long)((long)FUNC_1(FUNC_0(VAR_1))<<5) ;
 return (u_long)((VAR_3 + ((FUNC_1(FUNC_0(VAR_0))>>10)&0x1f)) |
  0xffe00000L) ;
}
