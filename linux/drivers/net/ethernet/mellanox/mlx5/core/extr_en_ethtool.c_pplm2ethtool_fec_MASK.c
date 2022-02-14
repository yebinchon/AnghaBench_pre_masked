
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u32 ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int * VAR_1 ;

__attribute__((used)) static u32 FUNC_2(u_long VAR_2, unsigned long VAR_3)
{
 int VAR_4 = 0;

 if (!VAR_2)
  return VAR_0;

 VAR_4 = FUNC_1(&VAR_2, VAR_3);

 if (VAR_4 < FUNC_0(VAR_1))
  return VAR_1[VAR_4];

 return 0;
}
