
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xhci_hcd_histb {scalar_t__ ctrl; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct device_node*,char*,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct xhci_hcd_histb *VAR_10)
{
 struct device_node *VAR_11 = VAR_10->dev->of_node;
 u32 VAR_12;

 if (FUNC_0(VAR_11, "phys-names", "inno") >= 0) {

  VAR_12 = FUNC_1(VAR_10->ctrl + VAR_5);
  VAR_12 &= ~VAR_2;
  VAR_12 &= ~(VAR_1);
  VAR_12 &= ~VAR_0;
  FUNC_2(VAR_12, VAR_10->ctrl + VAR_5);
 }

 if (FUNC_0(VAR_11, "phys-names", "combo") >= 0) {







  VAR_12 = FUNC_1(VAR_10->ctrl + VAR_6);
  VAR_12 &= ~VAR_8;
  VAR_12 |= VAR_7;
  VAR_12 |= VAR_9;
  FUNC_2(VAR_12, VAR_10->ctrl + VAR_6);
 }

 FUNC_2(0x23100000, VAR_10->ctrl + VAR_4);
 FUNC_2(0x23100000, VAR_10->ctrl + VAR_3);

 return 0;
}
