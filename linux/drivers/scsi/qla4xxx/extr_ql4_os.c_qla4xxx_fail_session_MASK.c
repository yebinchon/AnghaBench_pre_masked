
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {struct ddb_entry* dd_data; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct ddb_entry {scalar_t__ ddb_type; int sess; int fw_ddb_device_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iscsi_session*,int ) ;

__attribute__((used)) static void FUNC_2(struct iscsi_cls_session *VAR_3)
{
 struct iscsi_session *VAR_4;
 struct ddb_entry *VAR_5;

 VAR_4 = VAR_3->dd_data;
 VAR_5 = VAR_4->dd_data;
 VAR_5->fw_ddb_device_state = VAR_0;

 if (VAR_5->ddb_type == VAR_1)
  FUNC_0(VAR_5->sess);
 else
  FUNC_1(VAR_3->dd_data,
          VAR_2);
}
