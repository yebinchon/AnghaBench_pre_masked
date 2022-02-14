
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int dummy; } ;
struct cb710_slot {int dummy; } ;
struct cb710_mmc_reader {int irq_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cb710_slot*,int ,int ) ;
 int FUNC_1 (struct cb710_slot*,int ) ;
 int FUNC_2 (struct cb710_slot*) ;
 struct mmc_host* FUNC_3 (struct cb710_slot*) ;
 int FUNC_4 (struct cb710_slot*,int ,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct mmc_host*,int) ;
 struct cb710_mmc_reader* FUNC_7 (struct mmc_host*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct cb710_slot *VAR_9)
{
 struct mmc_host *VAR_10 = FUNC_3(VAR_9);
 struct cb710_mmc_reader *VAR_11 = FUNC_7(VAR_10);
 u32 VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_12 = FUNC_1(VAR_9, VAR_7);
 VAR_15 = FUNC_1(VAR_9, VAR_4);
 VAR_14 = FUNC_1(VAR_9, VAR_0);
 VAR_13 = FUNC_1(VAR_9, VAR_1);

 FUNC_5(FUNC_2(VAR_9), "interrupt; status: %08X, "
  "ie: %08X, c2: %08X, c1: %08X\n",
  VAR_12, VAR_15, VAR_14, VAR_13);

 if (VAR_12 & (VAR_5 << 8)) {

  FUNC_4(VAR_9, VAR_6,
   VAR_5);
  if ((VAR_15 & VAR_2)
      == VAR_2)
   FUNC_6(VAR_10, VAR_8/5);
 } else {
  FUNC_5(FUNC_2(VAR_9), "unknown interrupt (test)\n");
  FUNC_8(&VAR_11->irq_lock);
  FUNC_0(VAR_9, 0, VAR_3);
  FUNC_9(&VAR_11->irq_lock);
 }

 return 1;
}
