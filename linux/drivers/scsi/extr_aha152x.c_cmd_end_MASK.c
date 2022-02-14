
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {int sent_command; } ;
struct TYPE_5__ {scalar_t__ cmd_len; TYPE_1__ SCp; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_2__*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct Scsi_Host *VAR_3)
{
 if(VAR_0<VAR_1->cmd_len)
  FUNC_0(VAR_2, VAR_1,
       "command sent incompletely (%d/%d)\n",
       VAR_0, VAR_1->cmd_len);
 else
  VAR_1->SCp.sent_command++;
}
