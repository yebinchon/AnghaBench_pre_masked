
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_scsi_req {int cmdsn; } ;
struct TYPE_2__ {scalar_t__ data_length; } ;
struct iscsi_cmd {int i_state; int conn; scalar_t__ unsolicited_data; TYPE_1__ se_cmd; scalar_t__ sense_reason; int first_burst_len; scalar_t__ write_data_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iscsi_cmd*,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct iscsi_cmd*,struct iscsi_scsi_req*,int ) ;
 int FUNC_3 (int ,struct iscsi_cmd*,unsigned char*,int ) ;
 int FUNC_4 (struct iscsi_cmd*) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_8(struct iscsi_cmd *VAR_6, struct iscsi_scsi_req *VAR_7,
     bool VAR_8)
{
 int VAR_9 = 0, VAR_10 = VAR_4;
 int VAR_11;




 if (VAR_8) {
  u32 VAR_12 = FUNC_5(VAR_6->se_cmd.data_length - VAR_6->write_data_done,
     VAR_6->first_burst_len);

  FUNC_6("Dumping min(%d - %d, %d) = %d bytes of immediate data\n",
    VAR_6->se_cmd.data_length, VAR_6->write_data_done,
    VAR_6->first_burst_len, VAR_12);
  VAR_11 = FUNC_1(VAR_6->conn, VAR_12, 1);
  FUNC_6("Finished dumping immediate data\n");
  if (VAR_11 < 0)
   VAR_10 = VAR_2;
 } else {
  VAR_10 = FUNC_2(VAR_6, VAR_7,
        VAR_6->first_burst_len);
 }

 if (VAR_10 == VAR_4) {





  VAR_9 = FUNC_3(VAR_6->conn, VAR_6,
     (unsigned char *)VAR_7, VAR_7->cmdsn);
  if (VAR_9 == VAR_0)
   return -1;

  if (VAR_6->sense_reason || VAR_9 == VAR_1) {
   FUNC_7(&VAR_6->se_cmd);

   return 0;
  } else if (VAR_6->unsolicited_data)
   FUNC_4(VAR_6);

 } else if (VAR_10 == VAR_3) {
  VAR_6->i_state = VAR_5;
  FUNC_0(VAR_6, VAR_6->conn, VAR_6->i_state);
 } else
  return -1;

 return 0;
}
