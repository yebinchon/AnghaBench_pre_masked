
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {scalar_t__* time; scalar_t__* count_trans; scalar_t__* count; scalar_t__ busfree_with_check_condition; scalar_t__ busfree_without_done_command; scalar_t__ busfree_without_new_command; scalar_t__ busfree_without_old_command; scalar_t__ busfree_without_any_action; scalar_t__ disconnections; scalar_t__ total_commands; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct Scsi_Host*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct Scsi_Host*,char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct Scsi_Host *VAR_4, char *VAR_5, int VAR_6)
{
 if(!VAR_4 || !VAR_5 || VAR_6<8 || FUNC_2("aha152x ", VAR_5, 8)!=0)
  return -VAR_0;
 {
  return -VAR_0;
 }


 return VAR_6;
}
