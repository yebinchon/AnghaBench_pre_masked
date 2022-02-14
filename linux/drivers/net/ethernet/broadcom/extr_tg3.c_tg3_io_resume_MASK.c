
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int pcierr_recovery; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct tg3* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct tg3*,int ) ;
 int FUNC_8 (struct tg3*,int ) ;
 int FUNC_9 (struct tg3*,int ) ;
 int FUNC_10 (struct tg3*) ;
 int FUNC_11 (struct tg3*) ;
 int FUNC_12 (struct tg3*) ;
 int FUNC_13 (struct tg3*,int) ;
 int FUNC_14 (struct tg3*) ;

__attribute__((used)) static void FUNC_15(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_4(VAR_2);
 struct tg3 *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 FUNC_5();

 if (!VAR_3 || !FUNC_3(VAR_3))
  goto done;

 FUNC_9(VAR_4, 0);
 FUNC_7(VAR_4, VAR_1);
 FUNC_8(VAR_4, VAR_0);
 VAR_5 = FUNC_13(VAR_4, 1);
 if (VAR_5) {
  FUNC_10(VAR_4);
  FUNC_0(VAR_3, "Cannot restart hardware after reset.\n");
  goto done;
 }

 FUNC_2(VAR_3);

 FUNC_14(VAR_4);

 FUNC_11(VAR_4);

 FUNC_10(VAR_4);

 FUNC_12(VAR_4);

done:
 VAR_4->pcierr_recovery = 0;
 FUNC_6();
}
