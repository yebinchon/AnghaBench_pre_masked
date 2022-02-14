
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct gem {TYPE_1__* pdev; scalar_t__ regs; } ;
struct TYPE_3__ {scalar_t__ vendor; scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct net_device*,char*,...) ;
 int FUNC_1 (TYPE_1__*,int ,int*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_13, struct gem *VAR_14, u32 VAR_15)
{
 u32 VAR_16 = FUNC_4(VAR_14->regs + VAR_0);

 if (VAR_14->pdev->vendor == VAR_12 &&
     VAR_14->pdev->device == VAR_4) {
  FUNC_0(VAR_13, "PCI error [%04x]", VAR_16);

  if (VAR_16 & VAR_1)
   FUNC_3(" <No ACK64# during ABS64 cycle>");
  if (VAR_16 & VAR_2)
   FUNC_3(" <Delayed transaction timeout>");
  if (VAR_16 & VAR_3)
   FUNC_3(" <other>");
  FUNC_3("\n");
 } else {
  VAR_16 |= VAR_3;
  FUNC_0(VAR_13, "PCI error\n");
 }

 if (VAR_16 & VAR_3) {
  u16 VAR_17;




  FUNC_1(VAR_14->pdev, VAR_5,
         &VAR_17);
  FUNC_0(VAR_13, "Read PCI cfg space status [%04x]\n",
      VAR_17);
  if (VAR_17 & VAR_7)
   FUNC_0(VAR_13, "PCI parity error detected\n");
  if (VAR_17 & VAR_11)
   FUNC_0(VAR_13, "PCI target abort\n");
  if (VAR_17 & VAR_9)
   FUNC_0(VAR_13, "PCI master acks target abort\n");
  if (VAR_17 & VAR_8)
   FUNC_0(VAR_13, "PCI master abort\n");
  if (VAR_17 & VAR_10)
   FUNC_0(VAR_13, "PCI system error SERR#\n");
  if (VAR_17 & VAR_6)
   FUNC_0(VAR_13, "PCI parity error\n");


  VAR_17 &= (VAR_7 |
     VAR_11 |
     VAR_9 |
     VAR_8 |
     VAR_10 |
     VAR_6);
  FUNC_2(VAR_14->pdev,
          VAR_5, VAR_17);
 }


 return 1;
}
