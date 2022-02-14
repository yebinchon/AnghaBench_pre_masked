
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_5, int VAR_6, int VAR_7)
{
    u_int VAR_8 = (0xf6<<10)|(VAR_6<<5)|VAR_7;
    int VAR_9, VAR_10 = 0;

    FUNC_1(VAR_5);
    for (VAR_9 = 14; VAR_9 >= 0; VAR_9--) {
 int VAR_11 = (VAR_8&(1<<VAR_9)) ? VAR_2 : VAR_1;
 FUNC_2(VAR_11, VAR_5);
 FUNC_2(VAR_11 | VAR_4, VAR_5);
    }
    for (VAR_9 = 19; VAR_9 > 0; VAR_9--) {
 FUNC_2(VAR_3, VAR_5);
 VAR_10 = (VAR_10 << 1) | ((FUNC_0(VAR_5) & VAR_0) != 0);
 FUNC_2(VAR_3 | VAR_4, VAR_5);
    }
    return (VAR_10>>1) & 0xffff;
}
