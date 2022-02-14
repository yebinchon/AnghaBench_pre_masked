
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct net_device {unsigned int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    unsigned int VAR_8 = VAR_4->base_addr + VAR_3;
    u_int VAR_9 = (0x05<<28)|(VAR_5<<23)|(VAR_6<<18)|(1<<17)|VAR_7;
    int VAR_10;

    FUNC_0(VAR_8);
    for (VAR_10 = 31; VAR_10 >= 0; VAR_10--) {
 int VAR_11 = (VAR_9&(1<<VAR_10)) ? VAR_1 : VAR_0;
 FUNC_1(VAR_11, VAR_8);
 FUNC_1(VAR_11 | VAR_2, VAR_8);
    }
    for (VAR_10 = 1; VAR_10 >= 0; VAR_10--) {
 FUNC_1(0, VAR_8);
 FUNC_1(VAR_2, VAR_8);
    }
}
