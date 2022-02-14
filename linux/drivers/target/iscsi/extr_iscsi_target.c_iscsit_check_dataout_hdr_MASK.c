
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_data {int itt; int dlength; } ;
struct iscsi_conn {TYPE_1__* conn_ops; } ;
struct iscsi_cmd {int dummy; } ;
struct TYPE_2__ {int MaxXmitDataSegmentLength; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_conn*,void*,struct iscsi_cmd*,int ,int*) ;
 int FUNC_1 (struct iscsi_conn*,int ,void*) ;
 struct iscsi_cmd* FUNC_2 (struct iscsi_conn*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*) ;

int
FUNC_6(struct iscsi_conn *VAR_1, void *VAR_2,
    struct iscsi_cmd **VAR_3)
{
 struct iscsi_data *VAR_4 = VAR_2;
 struct iscsi_cmd *VAR_5;
 u32 VAR_6 = FUNC_3(VAR_4->dlength);
 int VAR_7;
 bool VAR_8 = 0;

 if (!VAR_6) {
  FUNC_5("DataOUT payload is ZERO, ignoring.\n");
  return 0;
 }

 if (VAR_6 > VAR_1->conn_ops->MaxXmitDataSegmentLength) {
  FUNC_4("DataSegmentLength: %u is greater than"
   " MaxXmitDataSegmentLength: %u\n", VAR_6,
   VAR_1->conn_ops->MaxXmitDataSegmentLength);
  return FUNC_1(VAR_1, VAR_0, VAR_2);
 }

 VAR_5 = FUNC_2(VAR_1, VAR_4->itt, VAR_6);
 if (!VAR_5)
  return 0;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_5, VAR_6, &VAR_8);

 if (VAR_8)
  *VAR_3 = VAR_5;

 return VAR_7;
}
