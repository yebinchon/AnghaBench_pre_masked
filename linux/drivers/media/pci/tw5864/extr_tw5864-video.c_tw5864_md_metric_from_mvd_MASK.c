
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static unsigned int FUNC_0(u32 VAR_0)
{
 unsigned int VAR_1 = (VAR_0 >> 10) & 0x3ff;
 unsigned int VAR_2 = VAR_0 & 0x3ff;


 VAR_2 &= 0x0f;
 VAR_1 &= 0x0f;

 return VAR_1 + VAR_2;
}
