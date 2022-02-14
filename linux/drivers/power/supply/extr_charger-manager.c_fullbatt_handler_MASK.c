
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct charger_manager {scalar_t__ fullbatt_vchk_jiffies_at; int dev; int fullbatt_vchk_work; struct charger_desc* desc; } ;
struct charger_desc {int fullbatt_vchkdrop_ms; int fullbatt_vchkdrop_uV; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct charger_manager*,int ) ;

__attribute__((used)) static void FUNC_5(struct charger_manager *VAR_5)
{
 struct charger_desc *VAR_6 = VAR_5->desc;

 if (!VAR_6->fullbatt_vchkdrop_uV || !VAR_6->fullbatt_vchkdrop_ms)
  goto out;

 if (VAR_1)
  FUNC_1(VAR_5->dev, 1);

 FUNC_2(VAR_2, &VAR_5->fullbatt_vchk_work,
    FUNC_3(VAR_6->fullbatt_vchkdrop_ms));
 VAR_5->fullbatt_vchk_jiffies_at = VAR_4 + FUNC_3(
           VAR_6->fullbatt_vchkdrop_ms);

 if (VAR_5->fullbatt_vchk_jiffies_at == 0)
  VAR_5->fullbatt_vchk_jiffies_at = 1;

out:
 FUNC_0(VAR_5->dev, "EVENT_HANDLE: Battery Fully Charged\n");
 FUNC_4(VAR_5, VAR_3[VAR_0]);
}
