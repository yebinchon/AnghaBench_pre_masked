
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_sas_phy {int timer; } ;
struct hisi_hba {struct device* dev; struct hisi_sas_phy* phy; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int FUNC_2 (struct hisi_hba*,int,int) ;
 int FUNC_3 (struct hisi_hba*,int,int ) ;
 int FUNC_4 (struct hisi_hba*,int,int ,int) ;
 int FUNC_5 (struct hisi_hba*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_9, struct hisi_hba *VAR_10)
{
 struct hisi_sas_phy *VAR_11 = &VAR_10->phy[VAR_9];
 u32 VAR_12, VAR_13, VAR_14;
 struct device *VAR_15 = VAR_10->dev;

 FUNC_0(&VAR_11->timer);
 FUNC_4(VAR_10, VAR_9, VAR_4, 1);

 VAR_12 = FUNC_5(VAR_10, VAR_5);
 FUNC_1(VAR_15, "phydown: phy%d phy_state=0x%x\n", VAR_9, VAR_12);
 FUNC_2(VAR_10, VAR_9, (VAR_12 & 1 << VAR_9) ? 1 : 0);

 VAR_13 = FUNC_3(VAR_10, VAR_9, VAR_6);
 FUNC_4(VAR_10, VAR_9, VAR_6,
      VAR_13&(~VAR_7));

 VAR_14 = FUNC_3(VAR_10, VAR_9, VAR_8);
 FUNC_4(VAR_10, VAR_9, VAR_8,
      VAR_14 | VAR_2);

 FUNC_4(VAR_10, VAR_9, VAR_0, VAR_1);
 FUNC_4(VAR_10, VAR_9, VAR_4, 0);

 return VAR_3;
}
