
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned long base_addr; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,unsigned char const*,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2, int VAR_3,
          const unsigned char *VAR_4, int VAR_5)
{
    unsigned long VAR_6 = VAR_2->base_addr;
    unsigned long VAR_7 = VAR_6 - VAR_0;

    if (VAR_3&1)
 VAR_3++;

    FUNC_0(VAR_7+((VAR_5 - VAR_1)<<8), VAR_4, VAR_3);
}
