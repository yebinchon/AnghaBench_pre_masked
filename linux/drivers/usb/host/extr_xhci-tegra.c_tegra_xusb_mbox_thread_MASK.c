
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_xusb_mbox_msg {int cmd; } ;
struct tegra_xusb {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tegra_xusb*,int ) ;
 int FUNC_1 (struct tegra_xusb*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tegra_xusb*,struct tegra_xusb_mbox_msg*) ;
 int FUNC_6 (struct tegra_xusb_mbox_msg*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 struct tegra_xusb *VAR_8 = VAR_7;
 struct tegra_xusb_mbox_msg VAR_9;
 u32 VAR_10;

 FUNC_2(&VAR_8->lock);

 VAR_10 = FUNC_0(VAR_8, VAR_4);
 FUNC_6(&VAR_9, VAR_10);

 VAR_10 = FUNC_0(VAR_8, VAR_3);
 VAR_10 &= ~VAR_1;
 FUNC_1(VAR_8, VAR_10, VAR_3);


 if (!FUNC_4(VAR_9.cmd))
  FUNC_1(VAR_8, VAR_2, VAR_5);

 FUNC_5(VAR_8, &VAR_9);

 FUNC_3(&VAR_8->lock);
 return VAR_0;
}
