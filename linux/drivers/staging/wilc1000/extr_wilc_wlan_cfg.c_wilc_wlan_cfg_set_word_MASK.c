
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_1, u32 VAR_2, u16 VAR_3, u32 VAR_4)
{
 if ((VAR_2 + 7) >= VAR_0)
  return 0;

 FUNC_0(VAR_3, &VAR_1[VAR_2]);
 FUNC_0(4, &VAR_1[VAR_2 + 2]);
 FUNC_1(VAR_4, &VAR_1[VAR_2 + 4]);

 return 8;
}
