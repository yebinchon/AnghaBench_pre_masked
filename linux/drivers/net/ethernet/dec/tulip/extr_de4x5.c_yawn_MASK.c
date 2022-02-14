
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct pci_dev {int dummy; } ;
struct net_device {int base_addr; } ;
struct de4x5_private {scalar_t__ chipset; scalar_t__ bus; int gendev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int) ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int const,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pci_dev*,int ,int const) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_6, int VAR_7)
{
    struct de4x5_private *VAR_8 = FUNC_1(VAR_6);
    u_long VAR_9 = VAR_6->base_addr;

    if ((VAR_8->chipset == VAR_0) || (VAR_8->chipset == VAR_1)) return;

    if(VAR_8->bus == VAR_3) {
 switch(VAR_7) {
   case 128:
     FUNC_2(128, VAR_5);
     FUNC_0(10);
     break;

   case 129:
     FUNC_2(129, VAR_5);
     break;

   case 130:
     FUNC_3(0, VAR_2);
     FUNC_2(130, VAR_5);
     break;
 }
    } else {
 struct pci_dev *VAR_10 = FUNC_5 (VAR_8->gendev);
 switch(VAR_7) {
   case 128:
     FUNC_4(VAR_10, VAR_4, 128);
     FUNC_0(10);
     break;

   case 129:
     FUNC_4(VAR_10, VAR_4, 129);
     break;

   case 130:
     FUNC_3(0, VAR_2);
     FUNC_4(VAR_10, VAR_4, 130);
     break;
 }
    }
}
