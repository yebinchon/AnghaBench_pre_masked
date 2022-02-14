
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;


 size_t FUNC_0 (size_t,int,size_t) ;

__attribute__((used)) static u32 FUNC_1(void *VAR_0,
        u32 *VAR_1,
        u32 VAR_2, u8 VAR_3)
{
 u8 VAR_4, *VAR_5, *VAR_6 = (u8 *)VAR_0;
 u32 VAR_7 = 0;

 VAR_5 = (u8 *)&VAR_7;




 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5[VAR_4] = VAR_6[*VAR_1];
  *VAR_1 = FUNC_0(*VAR_1, 1, VAR_2);
 }

 return VAR_7;
}
