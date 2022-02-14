
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_sas_port {int id; } ;
struct hisi_sas_phy {int timer; struct hisi_sas_port* port; } ;
struct hisi_hba {int timer; struct device* dev; struct hisi_sas_phy* phy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct hisi_hba*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int,int) ;
 int FUNC_3 (struct hisi_hba*,int ) ;
 int FUNC_4 (struct hisi_hba*,int,int) ;
 int FUNC_5 (struct hisi_hba*,int,int ) ;
 int FUNC_6 (struct hisi_hba*,int,int ,int) ;
 int FUNC_7 (struct hisi_hba*,int ) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(int VAR_9, struct hisi_hba *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13;
 struct hisi_sas_phy *VAR_14 = &VAR_10->phy[VAR_9];
 struct hisi_sas_port *VAR_15 = VAR_14->port;
 struct device *VAR_16 = VAR_10->dev;

 FUNC_1(&VAR_14->timer);
 FUNC_6(VAR_10, VAR_9, VAR_3, 1);

 VAR_11 = FUNC_7(VAR_10, VAR_4);
 FUNC_2(VAR_16, "phydown: phy%d phy_state=0x%x\n", VAR_9, VAR_11);
 FUNC_4(VAR_10, VAR_9, (VAR_11 & 1 << VAR_9) ? 1 : 0);

 VAR_12 = FUNC_5(VAR_10, VAR_9, VAR_5);
 FUNC_6(VAR_10, VAR_9, VAR_5,
        VAR_12 & ~VAR_6);
 if (VAR_15 && !FUNC_3(VAR_10, VAR_15->id))
  if (!FUNC_0(VAR_10) &&
    FUNC_8(&VAR_10->timer))
   FUNC_1(&VAR_10->timer);

 VAR_13 = FUNC_5(VAR_10, VAR_9, VAR_7);
 FUNC_6(VAR_10, VAR_9, VAR_7,
        VAR_13 | VAR_8);

 FUNC_6(VAR_10, VAR_9, VAR_0, VAR_1);
 FUNC_6(VAR_10, VAR_9, VAR_3, 0);

 return VAR_2;
}
