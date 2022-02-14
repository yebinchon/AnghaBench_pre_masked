
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct scsi_device {int dummy; } ;
struct c4_inquiry {int* slot_id; } ;
struct TYPE_3__ {struct c4_inquiry c4; } ;
struct rdac_dh_data {struct scsi_device* sdev; TYPE_2__* ctlr; int node; TYPE_1__ inq; } ;
struct TYPE_4__ {int dh_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int,char*,int *,struct scsi_device*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_3 ;
 int FUNC_2 (struct scsi_device*,int,unsigned char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct scsi_device *VAR_4,
  struct rdac_dh_data *VAR_5, char *VAR_6, u8 *VAR_7)
{
 int VAR_8 = VAR_0, VAR_9;
 struct c4_inquiry *VAR_10 = &VAR_5->inq.c4;

 if (!FUNC_2(VAR_4, 0xC4, (unsigned char *)VAR_10,
          sizeof(struct c4_inquiry))) {

  if (VAR_10->slot_id[1] == 0x31)
   VAR_9 = 0;
  else
   VAR_9 = 1;

  FUNC_3(&VAR_3);
  VAR_5->ctlr = FUNC_0(VAR_9, VAR_6, VAR_7, VAR_4);
  if (!VAR_5->ctlr)
   VAR_8 = VAR_2;
  else {
   FUNC_1(&VAR_5->node, &VAR_5->ctlr->dh_list);
   VAR_5->sdev = VAR_4;
  }
  FUNC_4(&VAR_3);
  VAR_8 = VAR_1;
 }
 return VAR_8;
}
