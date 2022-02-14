
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; } ;
struct e8390_pkt_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 short FUNC_0 (short) ;
 void* FUNC_1 (unsigned long) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
          struct e8390_pkt_hdr *VAR_3, int VAR_4)
{
    int VAR_5 = VAR_2->base_addr;
    short *VAR_6;
    unsigned long VAR_7= (VAR_5-VAR_0) +
        ((VAR_4 - VAR_1)<<8);
    VAR_6 = (short *)VAR_3;

    *(VAR_6++) = FUNC_1(VAR_7);
    *((short *)VAR_3) = FUNC_0(*((short *)VAR_3));
    VAR_7 += 2;
    *(VAR_6++) = FUNC_1(VAR_7);
    *((short *)VAR_3+1) = FUNC_0(*((short *)VAR_3+1));
}
