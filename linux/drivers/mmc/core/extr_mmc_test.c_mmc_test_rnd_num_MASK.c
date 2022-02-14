
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;


 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_1)
{
 uint64_t VAR_2;

 VAR_0 = VAR_0 * 1103515245 + 12345;
 VAR_2 = (VAR_0 >> 16) & 0x7fff;
 return (VAR_2 * VAR_1) >> 15;
}
