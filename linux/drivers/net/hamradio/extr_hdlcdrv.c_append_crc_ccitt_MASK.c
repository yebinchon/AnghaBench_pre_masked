
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,unsigned char*,int) ;

__attribute__((used)) static inline void FUNC_1(unsigned char *VAR_0, int VAR_1)
{
  unsigned int VAR_2 = FUNC_0(0xffff, VAR_0, VAR_1) ^ 0xffff;
 VAR_0 += VAR_1;
 *VAR_0++ = VAR_2;
 *VAR_0++ = VAR_2 >> 8;
}
