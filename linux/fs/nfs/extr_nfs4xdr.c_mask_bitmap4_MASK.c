
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;



__attribute__((used)) static size_t FUNC_0(const __u32 *VAR_0, const __u32 *VAR_1,
  __u32 *VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 __u32 VAR_5;

 while (VAR_3 > 0 && (VAR_0[VAR_3-1] == 0 || VAR_1[VAR_3-1] == 0))
  VAR_3--;
 for (VAR_4 = VAR_3; VAR_4-- > 0;) {
  VAR_5 = VAR_0[VAR_4] & VAR_1[VAR_4];
  VAR_2[VAR_4] = VAR_5;
 }
 return VAR_3;
}
