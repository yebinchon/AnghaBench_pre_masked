
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int __le16 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, size_t VAR_1)
{
 __le16 *VAR_2 = VAR_0;
 u16 VAR_3 = 0;
 size_t VAR_4;

 if (VAR_1 % 2 != 0)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_1 / 2; VAR_4++)
  VAR_3 ^= FUNC_0(VAR_2[VAR_4]);

 return VAR_3 == 0xffff;
}
