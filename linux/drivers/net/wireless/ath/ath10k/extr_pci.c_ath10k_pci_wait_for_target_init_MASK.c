
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_pci {scalar_t__ oper_irq_mode; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ath10k*,int ,char*,...) ;
 int FUNC_1 (struct ath10k*,char*,...) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*) ;
 struct ath10k_pci* FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*,int ) ;
 int FUNC_7 (struct ath10k*,char*) ;
 unsigned long VAR_9 ;
 int FUNC_8 (int) ;
 unsigned long FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;

int FUNC_11(struct ath10k *VAR_10)
{
 struct ath10k_pci *VAR_11 = FUNC_5(VAR_10);
 unsigned long VAR_12;
 u32 VAR_13;

 FUNC_0(VAR_10, VAR_0, "boot waiting target to initialise\n");

 VAR_12 = VAR_9 + FUNC_9(VAR_2);

 do {
  VAR_13 = FUNC_6(VAR_10, VAR_6);

  FUNC_0(VAR_10, VAR_0, "boot target indicator %x\n",
      VAR_13);


  if (VAR_13 == 0xffffffff)
   continue;


  if (VAR_13 & VAR_7)
   break;

  if (VAR_13 & VAR_8)
   break;

  if (VAR_11->oper_irq_mode == VAR_1)

   FUNC_3(VAR_10);

  FUNC_8(10);
 } while (FUNC_10(VAR_9, VAR_12));

 FUNC_2(VAR_10);
 FUNC_4(VAR_10);

 if (VAR_13 == 0xffffffff) {
  FUNC_1(VAR_10, "failed to read device register, device is gone\n");
  return -VAR_4;
 }

 if (VAR_13 & VAR_7) {
  FUNC_7(VAR_10, "device has crashed during init\n");
  return -VAR_3;
 }

 if (!(VAR_13 & VAR_8)) {
  FUNC_1(VAR_10, "failed to receive initialized event from target: %08x\n",
      VAR_13);
  return -VAR_5;
 }

 FUNC_0(VAR_10, VAR_0, "boot target initialised\n");
 return 0;
}
