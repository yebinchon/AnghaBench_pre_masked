
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int
FUNC_1(u_long VAR_2)
{
    int VAR_3;
    s32 VAR_4 = 0;

    for (VAR_3=0; VAR_3<16; VAR_3++) {
 VAR_4 <<= 1;
 VAR_4 |= FUNC_0(VAR_0 | VAR_1, VAR_2);
    }

    return VAR_4;
}
