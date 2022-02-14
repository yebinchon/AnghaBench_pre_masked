
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
typedef int u_char ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(u_int VAR_1, u_long VAR_2, u_char VAR_3)
{
    int VAR_4, VAR_5;

    VAR_5 = VAR_3 << 2;
    for (VAR_4=0; VAR_4<6; VAR_4++, VAR_5 <<= 1) {
 FUNC_1(VAR_1 | ((VAR_5 & 0x80) ? VAR_0 : 0), VAR_2);
    }
    FUNC_2(1);

    VAR_4 = (FUNC_0(VAR_2) >> 3) & 0x01;
}
