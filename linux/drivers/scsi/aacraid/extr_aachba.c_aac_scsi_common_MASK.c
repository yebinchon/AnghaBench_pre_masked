
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scsi_cmnd {int sc_data_direction; int cmd_len; TYPE_2__* request; TYPE_1__* device; } ;
struct fib {int dummy; } ;
struct aac_srb {void* cdb_size; scalar_t__ retry_limit; void* timeout; void* flags; void* lun; void* id; void* channel; void* function; } ;
struct TYPE_4__ {int timeout; } ;
struct TYPE_3__ {int lun; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fib*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct fib*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;

__attribute__((used)) static struct aac_srb * FUNC_6(struct fib * VAR_5, struct scsi_cmnd * VAR_6)
{
 struct aac_srb * VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 FUNC_0(VAR_5);
 switch(VAR_6->sc_data_direction){
 case 128:
  VAR_8 = VAR_3;
  break;
 case 131:
  VAR_8 = VAR_2 | VAR_3;
  break;
 case 130:
  VAR_8 = VAR_2;
  break;
 case 129:
 default:
  VAR_8 = VAR_4;
  break;
 }

 VAR_7 = (struct aac_srb*) FUNC_3(VAR_5);
 VAR_7->function = FUNC_2(VAR_1);
 VAR_7->channel = FUNC_2(FUNC_1(FUNC_4(VAR_6)));
 VAR_7->id = FUNC_2(FUNC_5(VAR_6));
 VAR_7->lun = FUNC_2(VAR_6->device->lun);
 VAR_7->flags = FUNC_2(VAR_8);
 VAR_9 = VAR_6->request->timeout/VAR_0;
 if (VAR_9 == 0)
  VAR_9 = 1;
 VAR_7->timeout = FUNC_2(VAR_9);
 VAR_7->retry_limit = 0;
 VAR_7->cdb_size = FUNC_2(VAR_6->cmd_len);
 return VAR_7;
}
