
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int const,unsigned int) ;

__attribute__((used)) static u8 FUNC_1(unsigned int VAR_0, unsigned int VAR_1,
      const u8 *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
  FUNC_0(VAR_2[VAR_4], VAR_0 + VAR_4);
  VAR_3 += VAR_2[VAR_4];
 }


 return VAR_3;
}
