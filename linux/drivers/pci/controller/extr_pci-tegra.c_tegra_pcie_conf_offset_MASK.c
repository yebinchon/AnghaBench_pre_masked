
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(u8 VAR_0, unsigned int VAR_1,
        unsigned int VAR_2)
{
 return ((VAR_2 & 0xf00) << 16) | (VAR_0 << 16) | (FUNC_1(VAR_1) << 11) |
        (FUNC_0(VAR_1) << 8) | (VAR_2 & 0xff);
}
