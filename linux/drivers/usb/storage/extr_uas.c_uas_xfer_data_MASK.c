
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct uas_cmd_info {unsigned int state; } ;
struct scsi_cmnd {TYPE_1__* device; int SCp; } ;
struct TYPE_2__ {int hostdata; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct uas_cmd_info*) ;
 int FUNC_1 (struct scsi_cmnd*,int ) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_1, struct scsi_cmnd *VAR_2,
     unsigned VAR_3)
{
 struct uas_cmd_info *VAR_4 = (void *)&VAR_2->SCp;
 int VAR_5;

 VAR_4->state |= VAR_3 | VAR_0;
 VAR_5 = FUNC_1(VAR_2, VAR_2->device->hostdata);
 if (VAR_5) {
  FUNC_0(VAR_4);
 }
}
