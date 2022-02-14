
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ mem_start; } ;
struct e8390_pkt_hdr {int count; } ;


 int VAR_0 ;
 int FUNC_0 (struct e8390_pkt_hdr*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1,
       struct e8390_pkt_hdr *VAR_2,
       int VAR_3)
{
 unsigned long VAR_4 = (VAR_3 - VAR_0)<<8;
 FUNC_0(VAR_2, VAR_1->mem_start + VAR_4, 4);

 VAR_2->count = (VAR_2->count&0xFF)<<8|(VAR_2->count>>8);
}
