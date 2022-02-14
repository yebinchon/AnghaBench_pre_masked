
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int const u16 ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static u16 FUNC_2(int VAR_0)
{
 static const u8 VAR_1[16] = {
  0, 1, 2, 3, 3, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7
 };

 VAR_0 = FUNC_1(VAR_0, 1, (int)FUNC_0(VAR_1));

 return VAR_1[VAR_0 - 1];
}
