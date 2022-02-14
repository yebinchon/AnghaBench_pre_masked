
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(unsigned char *VAR_0, int VAR_1, unsigned int VAR_2)
{
 switch (VAR_1) {
 case 4: VAR_0[3] = VAR_2 >> 24;

 case 3: VAR_0[2] = VAR_2 >> 16;

 case 2: VAR_0[1] = VAR_2 >> 8;

 default: VAR_0[0] = VAR_2;
 }
}
