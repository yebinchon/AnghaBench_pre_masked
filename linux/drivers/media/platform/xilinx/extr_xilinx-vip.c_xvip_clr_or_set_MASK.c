
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xvip_device {int dummy; } ;


 int FUNC_0 (struct xvip_device*,int) ;
 int FUNC_1 (struct xvip_device*,int,int) ;

void FUNC_2(struct xvip_device *VAR_0, u32 VAR_1, u32 VAR_2, bool VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 VAR_4 = VAR_3 ? VAR_4 | VAR_2 : VAR_4 & ~VAR_2;
 FUNC_1(VAR_0, VAR_1, VAR_4);
}
