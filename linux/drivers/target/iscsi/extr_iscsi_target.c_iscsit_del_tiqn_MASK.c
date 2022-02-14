
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tiqn {int tiqn; int tiqn_index; int tiqn_list; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct iscsi_tiqn*) ;
 int FUNC_2 (struct iscsi_tiqn*) ;
 int FUNC_3 (struct iscsi_tiqn*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_9(struct iscsi_tiqn *VAR_2)
{






 if (FUNC_1(VAR_2) < 0) {
  FUNC_6("iscsit_set_tiqn_shutdown() failed\n");
  return;
 }

 FUNC_2(VAR_2);

 FUNC_7(&VAR_1);
 FUNC_4(&VAR_2->tiqn_list);
 FUNC_0(&VAR_0, VAR_2->tiqn_index);
 FUNC_8(&VAR_1);

 FUNC_5("CORE[0] - Deleted iSCSI Target IQN: %s\n",
   VAR_2->tiqn);
 FUNC_3(VAR_2);
}
