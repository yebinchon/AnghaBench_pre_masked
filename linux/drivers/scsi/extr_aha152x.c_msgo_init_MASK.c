
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_5__ {int phase; } ;
struct TYPE_7__ {TYPE_2__* device; TYPE_1__ SCp; } ;
struct TYPE_6__ {int lun; } ;


 int FUNC_0 (int ) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,TYPE_3__*,char*) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_3(struct Scsi_Host *VAR_8)
{
 if(VAR_3==0) {
  if((VAR_0->SCp.phase & VAR_7) && VAR_5==2 && VAR_6==0) {
   FUNC_0(FUNC_1(VAR_4, VAR_0->device->lun));
  } else {
   FUNC_2(VAR_1, VAR_0,
        "unexpected MESSAGE OUT phase; rejecting\n");
   FUNC_0(VAR_2);
  }
 }

}
