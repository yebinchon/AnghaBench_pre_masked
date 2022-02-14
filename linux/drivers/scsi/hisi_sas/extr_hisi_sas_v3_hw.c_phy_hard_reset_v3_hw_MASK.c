
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ device_type; } ;
struct hisi_sas_phy {TYPE_1__ identify; } ;
struct hisi_hba {struct hisi_sas_phy* phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hisi_hba*,int,int) ;
 int FUNC_1 (struct hisi_hba*,int,int ) ;
 int FUNC_2 (struct hisi_hba*,int,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct hisi_hba *VAR_3, int VAR_4)
{
 struct hisi_sas_phy *VAR_5 = &VAR_3->phy[VAR_4];
 u32 VAR_6;

 FUNC_0(VAR_3, VAR_4, 0);
 if (VAR_5->identify.device_type == VAR_0) {
  VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_1);
  FUNC_2(VAR_3, VAR_4, VAR_1,
     VAR_6 | VAR_2);
 }
 FUNC_3(100);
 FUNC_0(VAR_3, VAR_4, 1);
}
