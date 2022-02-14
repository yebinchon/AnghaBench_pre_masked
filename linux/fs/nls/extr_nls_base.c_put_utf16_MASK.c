
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef enum utf16_endian { ____Placeholder_utf16_endian } utf16_endian ;




 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static inline void FUNC_2(wchar_t *VAR_0, unsigned VAR_1, enum utf16_endian VAR_2)
{
 switch (VAR_2) {
 default:
  *VAR_0 = (wchar_t) VAR_1;
  break;
 case 128:
  *VAR_0 = FUNC_1(VAR_1);
  break;
 case 129:
  *VAR_0 = FUNC_0(VAR_1);
  break;
 }
}
