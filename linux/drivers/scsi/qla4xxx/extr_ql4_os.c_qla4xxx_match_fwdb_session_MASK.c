
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_qla_host {int dummy; } ;
struct iscsi_session {int * targetname; } ;
struct iscsi_conn {int persistent_port; int * persistent_address; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct ddb_entry {scalar_t__ ddb_type; TYPE_2__* conn; TYPE_1__* sess; } ;
struct TYPE_4__ {struct iscsi_conn* dd_data; } ;
struct TYPE_3__ {struct iscsi_session* dd_data; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 struct iscsi_cls_session* FUNC_2 (struct iscsi_cls_conn*) ;
 int FUNC_3 (int ,struct scsi_qla_host*,char*,...) ;
 struct ddb_entry* FUNC_4 (struct scsi_qla_host*,int) ;
 int FUNC_5 (struct scsi_qla_host*,struct ddb_entry*,int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(struct scsi_qla_host *VAR_6,
          struct iscsi_cls_conn *VAR_7)
{
 int VAR_8 = 0, VAR_9, VAR_10;
 struct iscsi_cls_session *VAR_11 = FUNC_2(VAR_7);
 struct iscsi_session *VAR_12, *VAR_13;
 struct iscsi_conn *VAR_14, *VAR_15;
 struct ddb_entry *VAR_16;

 VAR_12 = VAR_11->dd_data;
 VAR_14 = VAR_7->dd_data;

 if (VAR_12->targetname == ((void*)0) ||
     VAR_14->persistent_address == ((void*)0) ||
     VAR_14->persistent_port == 0)
  return VAR_4;

 VAR_9 = FUNC_1(VAR_6) ? VAR_3 :
         VAR_2;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_16 = FUNC_4(VAR_6, VAR_8);
  if (VAR_16 == ((void*)0))
   continue;

  if (VAR_16->ddb_type != VAR_0)
   continue;

  VAR_13 = VAR_16->sess->dd_data;
  VAR_15 = VAR_16->conn->dd_data;

  if (VAR_13->targetname == ((void*)0) ||
      VAR_15->persistent_address == ((void*)0) ||
      VAR_15->persistent_port == 0)
   continue;

  FUNC_0(FUNC_3(VAR_1, VAR_6,
      "IQN = %s User IQN = %s\n",
      VAR_13->targetname,
      VAR_12->targetname));

  FUNC_0(FUNC_3(VAR_1, VAR_6,
      "IP = %s User IP = %s\n",
      VAR_15->persistent_address,
      VAR_14->persistent_address));

  FUNC_0(FUNC_3(VAR_1, VAR_6,
      "Port = %d User Port = %d\n",
      VAR_15->persistent_port,
      VAR_14->persistent_port));

  if (FUNC_6(VAR_13->targetname, VAR_12->targetname))
   continue;
  VAR_10 = FUNC_5(VAR_6, VAR_16,
     VAR_15->persistent_address,
     VAR_14->persistent_address);
  if (VAR_10 == VAR_4)
   continue;
  if (VAR_15->persistent_port != VAR_14->persistent_port)
   continue;
  break;
 }

 if (VAR_8 == VAR_9)
  return VAR_4;

 FUNC_0(FUNC_3(VAR_1, VAR_6,
     "Match found in fwdb sessions\n"));
 return VAR_5;
}
