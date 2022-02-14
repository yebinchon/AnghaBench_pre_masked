
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_1(unsigned int VAR_0, unsigned VAR_1, int VAR_2)
{
    unsigned VAR_3 = 1 << (VAR_2-1);
    for (; VAR_3; VAR_3 >>= 1)
 FUNC_0(VAR_0, VAR_1 & VAR_3);
}
