
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,int) ;
 int FUNC_4 (unsigned int,int,int) ;

__attribute__((used)) static unsigned
FUNC_5(unsigned int VAR_0, u_char VAR_1, u_char VAR_2)
{
    int VAR_3;
    unsigned VAR_4=0, VAR_5;

    FUNC_0(2);
    for (VAR_3=0; VAR_3 < 32; VAR_3++)
 FUNC_3(VAR_0, 1);
    FUNC_4(VAR_0, 0x06, 4);
    FUNC_4(VAR_0, VAR_1, 5);
    FUNC_4(VAR_0, VAR_2, 5);
    FUNC_2(VAR_0);
    FUNC_1(VAR_0);

    for (VAR_5 = 1<<15; VAR_5; VAR_5 >>= 1)
 if (FUNC_1(VAR_0))
     VAR_4 |= VAR_5;
    FUNC_2(VAR_0);
    return VAR_4;
}
