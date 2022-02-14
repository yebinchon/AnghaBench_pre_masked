
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_1)
{
 u32 VAR_2, VAR_3;

 if (VAR_1 == VAR_0)
  return VAR_1;





 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = FUNC_0(VAR_1);


 if (VAR_3 == VAR_2)
  return VAR_1;





 for (VAR_3--; VAR_1 & (1 << (VAR_3 - 1)); VAR_3--);

 return VAR_1 & ~((1 << VAR_3) - 1);
}
