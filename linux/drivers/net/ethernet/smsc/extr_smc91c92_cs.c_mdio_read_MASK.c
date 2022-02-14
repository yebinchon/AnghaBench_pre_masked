
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct net_device {unsigned int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5, int VAR_6, int VAR_7)
{
    unsigned int VAR_8 = VAR_5->base_addr + VAR_4;
    u_int VAR_9 = (0x06<<10)|(VAR_6<<5)|VAR_7;
    int VAR_10, VAR_11 = 0;

    FUNC_1(VAR_8);
    for (VAR_10 = 13; VAR_10 >= 0; VAR_10--) {
 int VAR_12 = (VAR_9&(1<<VAR_10)) ? VAR_2 : VAR_1;
 FUNC_2(VAR_12, VAR_8);
 FUNC_2(VAR_12 | VAR_3, VAR_8);
    }
    for (VAR_10 = 19; VAR_10 > 0; VAR_10--) {
 FUNC_2(0, VAR_8);
 VAR_11 = (VAR_11 << 1) | ((FUNC_0(VAR_8) & VAR_0) != 0);
 FUNC_2(VAR_3, VAR_8);
    }
    return (VAR_11>>1) & 0xffff;
}
