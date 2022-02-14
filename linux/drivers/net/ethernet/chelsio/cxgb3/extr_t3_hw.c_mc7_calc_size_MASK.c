
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;

__attribute__((used)) static unsigned int FUNC_2(u32 VAR_2)
{
 unsigned int VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4 = !!(VAR_2 & VAR_0) + 1;
 unsigned int VAR_5 = !!(VAR_2 & VAR_1) + 1;
 unsigned int VAR_6 = FUNC_0(VAR_2);
 unsigned int VAR_7 = ((256 << VAR_6) * VAR_4) / (VAR_5 << VAR_3);

 return VAR_7 << 20;
}
