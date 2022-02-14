
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(char *VAR_1, u16 *VAR_2)
{
 int VAR_3, VAR_4;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1);

 VAR_3 = VAR_5 >> 30;
 VAR_4 = (VAR_5 >> 26) & 15;

 VAR_2[VAR_3] |= 1 << VAR_4;
}
