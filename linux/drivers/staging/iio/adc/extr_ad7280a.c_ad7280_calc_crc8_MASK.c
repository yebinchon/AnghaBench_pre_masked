
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned char FUNC_0(unsigned char *VAR_0, unsigned int VAR_1)
{
 unsigned char VAR_2;

 VAR_2 = VAR_0[VAR_1 >> 16 & 0xFF];
 VAR_2 = VAR_0[VAR_2 ^ (VAR_1 >> 8 & 0xFF)];

 return VAR_2 ^ (VAR_1 & 0xFF);
}
