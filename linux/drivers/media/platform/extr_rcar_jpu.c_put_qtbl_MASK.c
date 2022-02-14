
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 unsigned int FUNC_0 (int*) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_1(u8 *VAR_1, const u8 *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  VAR_1[VAR_3] = *(VAR_2 + VAR_0[VAR_3]);
}
