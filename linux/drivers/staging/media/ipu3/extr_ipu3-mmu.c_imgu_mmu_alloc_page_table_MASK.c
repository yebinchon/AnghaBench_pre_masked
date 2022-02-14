
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static u32 *FUNC_2(u32 VAR_3)
{
 u32 *VAR_4;
 int VAR_5;

 VAR_4 = (u32 *)FUNC_0(VAR_0);
 if (!VAR_4)
  return ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  VAR_4[VAR_5] = VAR_3;

 FUNC_1((unsigned long int)VAR_4, VAR_1);

 return VAR_4;
}
