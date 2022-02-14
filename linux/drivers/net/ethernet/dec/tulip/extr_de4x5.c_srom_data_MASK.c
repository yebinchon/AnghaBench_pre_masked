
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static short
FUNC_2(u_int VAR_1, u_long VAR_2)
{
    int VAR_3;
    short VAR_4 = 0;
    s32 VAR_5;

    for (VAR_3=0; VAR_3<16; VAR_3++) {
 FUNC_1(VAR_1 | VAR_0, VAR_2);
 VAR_5 = FUNC_0(VAR_2);
 FUNC_1(VAR_1, VAR_2);

 VAR_4 = (VAR_4 << 1) | ((VAR_5 >> 3) & 0x01);
    }

    FUNC_1(VAR_1 & 0x0000ff00, VAR_2);

    return VAR_4;
}
