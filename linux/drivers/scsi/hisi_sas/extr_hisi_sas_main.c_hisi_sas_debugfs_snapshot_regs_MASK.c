
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_hba {TYPE_1__* hw; } ;
struct TYPE_2__ {int (* snapshot_restore ) (struct hisi_hba*) ;int (* snapshot_prepare ) (struct hisi_hba*) ;} ;


 int FUNC_0 (struct hisi_hba*) ;
 int FUNC_1 (struct hisi_hba*) ;
 int FUNC_2 (struct hisi_hba*) ;
 int FUNC_3 (struct hisi_hba*) ;
 int FUNC_4 (struct hisi_hba*) ;
 int FUNC_5 (struct hisi_hba*) ;
 int FUNC_6 (struct hisi_hba*) ;
 int FUNC_7 (struct hisi_hba*) ;
 int FUNC_8 (struct hisi_hba*) ;
 int FUNC_9 (struct hisi_hba*) ;
 int FUNC_10 (struct hisi_hba*) ;

__attribute__((used)) static void FUNC_11(struct hisi_hba *VAR_0)
{
 VAR_0->hw->snapshot_prepare(VAR_0);

 FUNC_4(VAR_0);
 FUNC_7(VAR_0);
 FUNC_1(VAR_0);
 FUNC_8(VAR_0);
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
 FUNC_6(VAR_0);
 FUNC_5(VAR_0);

 FUNC_0(VAR_0);

 VAR_0->hw->snapshot_restore(VAR_0);
}
