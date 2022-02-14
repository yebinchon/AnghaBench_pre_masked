
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_scsi_req {int dummy; } ;
struct iscsi_conn {int dummy; } ;
struct iscsi_cmd {int immediate_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iscsi_cmd*) ;
 int FUNC_1 (struct iscsi_cmd*,struct iscsi_scsi_req*,int) ;
 int FUNC_2 (struct iscsi_conn*,struct iscsi_cmd*,struct iscsi_scsi_req*) ;
 int FUNC_3 (struct iscsi_cmd*,int ,unsigned char*) ;
 int FUNC_4 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*) ;

__attribute__((used)) static int
FUNC_5(struct iscsi_conn *VAR_1, struct iscsi_cmd *VAR_2,
      unsigned char *VAR_3)
{
 struct iscsi_scsi_req *VAR_4 = (struct iscsi_scsi_req *)VAR_3;
 int VAR_5, VAR_6;
 bool VAR_7 = 0;

 VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_3);
 if (VAR_5 < 0)
  return 0;




 if (FUNC_0(VAR_2) < 0) {
  return FUNC_3(VAR_2,
    VAR_0, VAR_3);
 }
 VAR_6 = VAR_2->immediate_data;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 else if (VAR_5 > 0)
  VAR_7 = 1;

 if (!VAR_6)
  return 0;

 return FUNC_1(VAR_2, VAR_4, VAR_7);
}
