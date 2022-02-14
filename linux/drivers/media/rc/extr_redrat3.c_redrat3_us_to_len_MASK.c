
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;

 VAR_2 = (VAR_2 > VAR_0) ? VAR_0 : VAR_2;
 VAR_4 = (VAR_1 / 1000);
 VAR_3 = (u32)(VAR_2 * VAR_4) / 1000;


 return VAR_3 ? VAR_3 : 1;
}
