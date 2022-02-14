
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int __le32 ;


 int FUNC_0 (int ) ;

u64 FUNC_1(void *VAR_0, size_t VAR_1, bool VAR_2)
{
 u32 *VAR_3 = VAR_0;
 u32 VAR_4 = 0;
 u64 VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1 / sizeof(u32); VAR_6++) {
  VAR_4 += VAR_2 ? FUNC_0((__le32) VAR_3[VAR_6]) : VAR_3[VAR_6];
  VAR_5 += VAR_4;
 }

 return VAR_5 << 32 | VAR_4;
}
