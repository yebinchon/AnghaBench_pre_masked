
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uas_cmd_info {int state; int data_out_urb; int data_in_urb; int cmd_urb; } ;
struct scsi_cmnd {int SCp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct scsi_cmnd *VAR_3)
{
 struct uas_cmd_info *VAR_4;

 if (!VAR_3)
  return;

 VAR_4 = (void *)&VAR_3->SCp;

 if (VAR_4->state & VAR_2)
  FUNC_0(VAR_4->cmd_urb);


 if (!(VAR_4->state & VAR_0))
  FUNC_0(VAR_4->data_in_urb);
 if (!(VAR_4->state & VAR_1))
  FUNC_0(VAR_4->data_out_urb);
}
