
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_par {int dummy; } ;


 int FUNC_0 (struct nvidia_par*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_1 (
    struct nvidia_par *VAR_0,
    unsigned int *VAR_1,
    unsigned int *VAR_2
)
{
    unsigned int VAR_3, VAR_4;
    unsigned int VAR_5, VAR_6, VAR_7;

    VAR_5 = 2048;
    VAR_6 = 512;
    VAR_7 = VAR_5 - VAR_6;

    FUNC_0(VAR_0, &VAR_3, &VAR_4);

    *VAR_1 = 0;
    VAR_6 >>= 5;
    while(VAR_6 >>= 1) (*VAR_1)++;
    *VAR_2 = VAR_7 >> 3;
}
