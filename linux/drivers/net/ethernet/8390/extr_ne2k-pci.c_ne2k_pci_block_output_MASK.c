
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
typedef int __le16 ;
struct TYPE_2__ {int ne2k_flags; int dmaing; int irqlock; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int const VAR_10 ;
 long VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct net_device*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_1__ VAR_16 ;
 int const FUNC_1 (scalar_t__) ;
 unsigned long VAR_17 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*,int,int ) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (int const,scalar_t__) ;
 int FUNC_7 (scalar_t__,unsigned char const*,int) ;
 int FUNC_8 (scalar_t__,unsigned char const*,int) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_18, int VAR_19,
      const unsigned char *VAR_20, const int VAR_21)
{
 long VAR_22 = VAR_11;
 unsigned long VAR_23;



 if (VAR_16.ne2k_flags & VAR_15)
  VAR_19 = (VAR_19 + 3) & 0xFFFC;
 else
  if (VAR_19 & 0x01)
   VAR_19++;


 if (VAR_16.dmaing) {
  FUNC_4(VAR_18, "DMAing conflict in ne2k_pci_block_output."
      "[DMAstat:%d][irqlock:%d]\n",
      VAR_16.dmaing, VAR_16.irqlock);
  return;
 }
 VAR_16.dmaing |= 0x01;

 FUNC_6(VAR_1+VAR_4+VAR_0, VAR_22 + VAR_12);
 FUNC_6(VAR_10, VAR_22 + VAR_5);


 FUNC_6(VAR_19 & 0xff, VAR_22 + VAR_7);
 FUNC_6(VAR_19 >> 8, VAR_22 + VAR_6);
 FUNC_6(0x00, VAR_22 + VAR_9);
 FUNC_6(VAR_21, VAR_22 + VAR_8);
 FUNC_6(VAR_3+VAR_4, VAR_22 + VAR_12);
 if (VAR_16.ne2k_flags & VAR_14) {
  FUNC_8(VAR_11 + VAR_13, VAR_20, VAR_19>>1);
 } else {
  FUNC_7(VAR_11 + VAR_13, VAR_20, VAR_19>>2);
  if (VAR_19 & 3) {
   VAR_20 += VAR_19 & ~3;
   if (VAR_19 & 2) {
    __le16 *VAR_24 = (__le16 *)VAR_20;

    FUNC_9(FUNC_2(*VAR_24++), VAR_11 + VAR_13);
    VAR_20 = (char *)VAR_24;
   }
  }
 }

 VAR_23 = VAR_17;

 while ((FUNC_1(VAR_22 + VAR_5) & VAR_10) == 0)
  if (VAR_17 - VAR_23 > 2) {
   FUNC_5(VAR_18, "timeout waiting for Tx RDC.\n");
   FUNC_3(VAR_18);
   FUNC_0(VAR_18,1);
   break;
  }

 FUNC_6(VAR_10, VAR_22 + VAR_5);
 VAR_16.dmaing &= ~0x01;
}
