
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_xusb_mbox_msg {scalar_t__ cmd; } ;
struct tegra_xusb {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct tegra_xusb*,int ) ;
 int FUNC_2 (struct tegra_xusb*,int,int ) ;
 unsigned long VAR_11 ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (struct tegra_xusb_mbox_msg const*) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct tegra_xusb *VAR_12,
    const struct tegra_xusb_mbox_msg *VAR_13)
{
 bool VAR_14 = 0;
 u32 VAR_15;





 if (!(VAR_13->cmd == VAR_2 || VAR_13->cmd == VAR_3)) {
  VAR_15 = FUNC_1(VAR_12, VAR_10);
  if (VAR_15 != VAR_6) {
   FUNC_0(VAR_12->dev, "mailbox is busy\n");
   return -VAR_0;
  }

  FUNC_2(VAR_12, VAR_7, VAR_10);

  VAR_15 = FUNC_1(VAR_12, VAR_10);
  if (VAR_15 != VAR_7) {
   FUNC_0(VAR_12->dev, "failed to acquire mailbox\n");
   return -VAR_0;
  }

  VAR_14 = 1;
 }

 VAR_15 = FUNC_4(VAR_13);
 FUNC_2(VAR_12, VAR_15, VAR_9);

 VAR_15 = FUNC_1(VAR_12, VAR_8);
 VAR_15 |= VAR_5 | VAR_4;
 FUNC_2(VAR_12, VAR_15, VAR_8);

 if (VAR_14) {
  unsigned long VAR_16 = VAR_11 + FUNC_3(250);

  while (FUNC_6(VAR_11, VAR_16)) {
   VAR_15 = FUNC_1(VAR_12, VAR_10);
   if (VAR_15 == VAR_6)
    break;

   FUNC_7(10, 20);
  }

  if (FUNC_5(VAR_11, VAR_16))
   VAR_15 = FUNC_1(VAR_12, VAR_10);

  if (VAR_15 != VAR_6)
   return -VAR_1;
 }

 return 0;
}
