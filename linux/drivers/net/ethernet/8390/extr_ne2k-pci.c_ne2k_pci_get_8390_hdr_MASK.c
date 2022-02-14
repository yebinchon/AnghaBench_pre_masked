
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {long base_addr; } ;
struct e8390_pkt_hdr {int count; } ;
struct TYPE_2__ {int dmaing; int ne2k_flags; int irqlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 TYPE_1__ VAR_14 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,struct e8390_pkt_hdr*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*,char*,int,int ) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_15, struct e8390_pkt_hdr *VAR_16, int VAR_17)
{

 long VAR_18 = VAR_15->base_addr;


 if (VAR_14.dmaing) {
  FUNC_4(VAR_15, "DMAing conflict in ne2k_pci_get_8390_hdr "
      "[DMAstat:%d][irqlock:%d].\n",
      VAR_14.dmaing, VAR_14.irqlock);
  return;
 }

 VAR_14.dmaing |= 0x01;
 FUNC_5(VAR_0+VAR_1+VAR_3, VAR_18+ VAR_11);
 FUNC_5(sizeof(struct e8390_pkt_hdr), VAR_18 + VAR_6);
 FUNC_5(0, VAR_18 + VAR_5);
 FUNC_5(0, VAR_18 + VAR_8);
 FUNC_5(VAR_17, VAR_18 + VAR_7);
 FUNC_5(VAR_2+VAR_3, VAR_18 + VAR_11);

 if (VAR_14.ne2k_flags & VAR_13) {
  FUNC_1(VAR_10 + VAR_12, VAR_16, sizeof(struct e8390_pkt_hdr)>>1);
 } else {
  *(u32*)VAR_16 = FUNC_3(FUNC_0(VAR_10 + VAR_12));
  FUNC_2(&VAR_16->count);
 }

 FUNC_5(VAR_9, VAR_18 + VAR_4);
 VAR_14.dmaing &= ~0x01;
}
