
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {scalar_t__ scsi_sense_length; } ;
struct TYPE_2__ {int status; } ;
struct sbp_target_request {TYPE_1__ status; struct se_cmd se_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct sbp_target_request*) ;
 int FUNC_6 (struct sbp_target_request*) ;

__attribute__((used)) static int FUNC_7(struct sbp_target_request *VAR_2)
{
 struct se_cmd *VAR_3 = &VAR_2->se_cmd;

 if (VAR_3->scsi_sense_length) {
  FUNC_6(VAR_2);
 } else {
  VAR_2->status.status |= FUNC_4(
   FUNC_2(VAR_1) |
   FUNC_0(0) |
   FUNC_1(1) |
   FUNC_3(VAR_0));
 }

 return FUNC_5(VAR_2);
}
