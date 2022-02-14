
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_umac_scan_abort {int uid; } ;
struct iwl_mvm {int* scan_uid_status; int mutex; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct iwl_mvm*,int) ;
 int FUNC_5 (struct iwl_mvm*,int ,int ,int,struct iwl_umac_scan_abort*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iwl_mvm *VAR_3, int VAR_4)
{
 struct iwl_umac_scan_abort VAR_5 = {};
 int VAR_6, VAR_7;

 FUNC_6(&VAR_3->mutex);





 VAR_6 = FUNC_4(VAR_3, VAR_4);
 if (FUNC_1(VAR_6 < 0))
  return VAR_6;

 VAR_5.uid = FUNC_2(VAR_6);

 FUNC_0(VAR_3, "Sending scan abort, uid %u\n", VAR_6);

 VAR_7 = FUNC_5(VAR_3,
       FUNC_3(VAR_2,
           VAR_0, 0),
       0, sizeof(VAR_5), &VAR_5);
 if (!VAR_7)
  VAR_3->scan_uid_status[VAR_6] = VAR_4 << VAR_1;

 return VAR_7;
}
