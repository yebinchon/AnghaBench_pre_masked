
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct cas {int cas_flags; int pdev; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct net_device*,char*,...) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_15, struct cas *VAR_16,
        u32 VAR_17)
{
 u32 VAR_18 = FUNC_4(VAR_16->regs + VAR_14);

 if (!VAR_18)
  return 0;

 FUNC_0(VAR_15, "PCI error [%04x:%04x]",
     VAR_18, FUNC_4(VAR_16->regs + VAR_13));


 if ((VAR_18 & VAR_1) &&
     ((VAR_16->cas_flags & VAR_0) == 0))
  FUNC_3(" <No ACK64# during ABS64 cycle>");

 if (VAR_18 & VAR_4)
  FUNC_3(" <Delayed transaction timeout>");
 if (VAR_18 & VAR_5)
  FUNC_3(" <other>");
 if (VAR_18 & VAR_3)
  FUNC_3(" <BIM DMA 0 write req>");
 if (VAR_18 & VAR_2)
  FUNC_3(" <BIM DMA 0 read req>");
 FUNC_3("\n");

 if (VAR_18 & VAR_5) {
  u16 VAR_19;




  FUNC_1(VAR_16->pdev, VAR_6, &VAR_19);
  FUNC_0(VAR_15, "Read PCI cfg space status [%04x]\n", VAR_19);
  if (VAR_19 & VAR_8)
   FUNC_0(VAR_15, "PCI parity error detected\n");
  if (VAR_19 & VAR_12)
   FUNC_0(VAR_15, "PCI target abort\n");
  if (VAR_19 & VAR_10)
   FUNC_0(VAR_15, "PCI master acks target abort\n");
  if (VAR_19 & VAR_9)
   FUNC_0(VAR_15, "PCI master abort\n");
  if (VAR_19 & VAR_11)
   FUNC_0(VAR_15, "PCI system error SERR#\n");
  if (VAR_19 & VAR_7)
   FUNC_0(VAR_15, "PCI parity error\n");


  VAR_19 &= (VAR_8 |
   VAR_12 |
   VAR_10 |
   VAR_9 |
   VAR_11 |
   VAR_7);
  FUNC_2(VAR_16->pdev, VAR_6, VAR_19);
 }


 return 1;
}
