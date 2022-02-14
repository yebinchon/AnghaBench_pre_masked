
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline u32
FUNC_0(const void *VAR_0, int VAR_1)
{
 unsigned char *VAR_2 = (unsigned char *) VAR_0;

 u32 VAR_3 = 0;
 while (VAR_1--) {
  VAR_3 *= 37;
  VAR_3 += *VAR_2++;
 }
 return VAR_3;
}
