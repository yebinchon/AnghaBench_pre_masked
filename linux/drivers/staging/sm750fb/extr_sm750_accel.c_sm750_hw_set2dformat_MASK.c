
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lynx_accel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lynx_accel*,int ) ;
 int FUNC_1 (struct lynx_accel*,int ,int) ;

void FUNC_2(struct lynx_accel *VAR_3, int VAR_4)
{
 u32 VAR_5;


 VAR_5 = FUNC_0(VAR_3, VAR_0);
 VAR_5 &= ~VAR_1;
 VAR_5 |= ((VAR_4 << VAR_2) &
  VAR_1);
 FUNC_1(VAR_3, VAR_0, VAR_5);
}
