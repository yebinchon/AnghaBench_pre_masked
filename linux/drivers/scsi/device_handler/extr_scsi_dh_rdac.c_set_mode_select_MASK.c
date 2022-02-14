
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {int dummy; } ;
struct c2_inquiry {scalar_t__ max_lun_supported; } ;
struct TYPE_3__ {struct c2_inquiry c2; } ;
struct rdac_dh_data {TYPE_2__* ctlr; TYPE_1__ inq; } ;
struct TYPE_4__ {int use_ms10; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_device*,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_3, struct rdac_dh_data *VAR_4)
{
 int VAR_5 = VAR_1;
 struct c2_inquiry *VAR_6 = &VAR_4->inq.c2;

 if (!FUNC_0(VAR_3, 0xC2, (unsigned char *)VAR_6,
          sizeof(struct c2_inquiry))) {




  if (VAR_6->max_lun_supported >= VAR_0)
   VAR_4->ctlr->use_ms10 = 1;
  else
   VAR_4->ctlr->use_ms10 = 0;
  VAR_5 = VAR_2;
 }
 return VAR_5;
}
