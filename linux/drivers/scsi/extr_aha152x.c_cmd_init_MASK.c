
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {scalar_t__ sent_command; } ;
struct TYPE_5__ {TYPE_1__ SCp; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct Scsi_Host*,int) ;
 int FUNC_1 (int ,TYPE_2__*,char*) ;

__attribute__((used)) static void FUNC_2(struct Scsi_Host *VAR_4)
{
 if (VAR_1->SCp.sent_command) {
  FUNC_1(VAR_3, VAR_1,
       "command already sent\n");
  FUNC_0(VAR_4, VAR_2 << 16);
  return;
 }

 VAR_0=0;
}
