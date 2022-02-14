
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_3(u8 *VAR_3)
{
 if (!FUNC_1())
  return -1;


 *VAR_3 = FUNC_2(VAR_2[VAR_0]);
 *VAR_3 |= FUNC_2(VAR_2[VAR_1]) << 1;

 FUNC_0();

 return 0;
}
