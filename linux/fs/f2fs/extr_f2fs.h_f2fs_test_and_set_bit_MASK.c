
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(unsigned int VAR_0, char *VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_1 += (VAR_0 >> 3);
 VAR_2 = 1 << (7 - (VAR_0 & 0x07));
 VAR_3 = VAR_2 & *VAR_1;
 *VAR_1 |= VAR_2;
 return VAR_3;
}
