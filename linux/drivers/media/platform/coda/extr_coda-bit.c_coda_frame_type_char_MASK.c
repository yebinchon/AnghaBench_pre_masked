
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static char FUNC_0(u32 VAR_3)
{
 return (VAR_3 & VAR_1) ? 'I' :
        (VAR_3 & VAR_2) ? 'P' :
        (VAR_3 & VAR_0) ? 'B' : '?';
}
