
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int pcierr_recovery; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct tg3* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct pci_dev*) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct tg3*,int ) ;
 int FUNC_10 (struct tg3*) ;
 int FUNC_11 (struct tg3*,int ,int ) ;
 int FUNC_12 (struct tg3*) ;
 int FUNC_13 (struct tg3*) ;
 int FUNC_14 (struct tg3*) ;
 int FUNC_15 (struct tg3*) ;
 int FUNC_16 (struct tg3*) ;

__attribute__((used)) static pci_ers_result_t FUNC_17(struct pci_dev *VAR_5,
           pci_channel_state_t VAR_6)
{
 struct net_device *VAR_7 = FUNC_6(VAR_5);
 struct tg3 *VAR_8 = FUNC_2(VAR_7);
 pci_ers_result_t VAR_9 = VAR_1;

 FUNC_1(VAR_7, "PCI I/O error detected\n");

 FUNC_7();


 if (!VAR_7 || !FUNC_4(VAR_7))
  goto done;


 if (VAR_6 == VAR_3)
  VAR_8->pcierr_recovery = 1;

 FUNC_14(VAR_8);

 FUNC_13(VAR_8);

 FUNC_16(VAR_8);


 FUNC_15(VAR_8);

 FUNC_3(VAR_7);


 FUNC_9(VAR_8, 0);
 FUNC_11(VAR_8, VAR_2, 0);
 FUNC_10(VAR_8);

done:
 if (VAR_6 == VAR_4) {
  if (VAR_7) {
   FUNC_12(VAR_8);
   FUNC_0(VAR_7);
  }
  VAR_9 = VAR_0;
 } else {
  FUNC_5(VAR_5);
 }

 FUNC_8();

 return VAR_9;
}
