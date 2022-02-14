
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {char* data; } ;
struct net_device {long base_addr; } ;
typedef int __le16 ;
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
 int VAR_14 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_15 ;
 char FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,char*,int) ;
 int FUNC_3 (scalar_t__,char*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct net_device*,char*,int,int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_16, int VAR_17,
     struct sk_buff *VAR_18, int VAR_19)
{
 long VAR_20 = VAR_16->base_addr;
 char *VAR_21 = VAR_18->data;


 if (VAR_15.dmaing) {
  FUNC_5(VAR_16, "DMAing conflict in ne2k_pci_block_input "
      "[DMAstat:%d][irqlock:%d].\n",
      VAR_15.dmaing, VAR_15.irqlock);
  return;
 }
 VAR_15.dmaing |= 0x01;
 if (VAR_15.ne2k_flags & VAR_14)
  VAR_17 = (VAR_17 + 3) & 0xFFFC;
 FUNC_6(VAR_0+VAR_1+VAR_3, VAR_20+ VAR_11);
 FUNC_6(VAR_17 & 0xff, VAR_20 + VAR_6);
 FUNC_6(VAR_17 >> 8, VAR_20 + VAR_5);
 FUNC_6(VAR_19 & 0xff, VAR_20 + VAR_8);
 FUNC_6(VAR_19 >> 8, VAR_20 + VAR_7);
 FUNC_6(VAR_2+VAR_3, VAR_20 + VAR_11);

 if (VAR_15.ne2k_flags & VAR_13) {
  FUNC_3(VAR_10 + VAR_12,VAR_21,VAR_17>>1);
  if (VAR_17 & 0x01) {
   VAR_21[VAR_17-1] = FUNC_1(VAR_10 + VAR_12);
  }
 } else {
  FUNC_2(VAR_10 + VAR_12, VAR_21, VAR_17>>2);
  if (VAR_17 & 3) {
   VAR_21 += VAR_17 & ~3;
   if (VAR_17 & 2) {
    __le16 *VAR_22 = (__le16 *)VAR_21;

    *VAR_22++ = FUNC_0(FUNC_4(VAR_10 + VAR_12));
    VAR_21 = (char *)VAR_22;
   }
   if (VAR_17 & 1)
    *VAR_21 = FUNC_1(VAR_10 + VAR_12);
  }
 }

 FUNC_6(VAR_9, VAR_20 + VAR_4);
 VAR_15.dmaing &= ~0x01;
}
