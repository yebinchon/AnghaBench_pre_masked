
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sent_command; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_2__ SCp; } ;
struct fib {int flags; struct aac_dev* dev; scalar_t__ hw_fib_va; } ;
struct aac_hba_resp {int service_response; } ;
struct TYPE_3__ {struct aac_hba_resp err; } ;
struct aac_native_hba {TYPE_1__ resp; } ;
struct aac_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fib*) ;
 int FUNC_2 (struct scsi_cmnd*,struct fib*) ;
 int FUNC_3 (struct aac_dev*,struct scsi_cmnd*,struct aac_hba_resp*) ;
 int FUNC_4 (struct aac_dev*,struct scsi_cmnd*,struct aac_hba_resp*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;

void FUNC_7(void *VAR_7, struct fib *VAR_8)
{
 struct aac_dev *VAR_9;
 struct scsi_cmnd *VAR_10;

 struct aac_hba_resp *VAR_11 =
   &((struct aac_native_hba *)VAR_8->hw_fib_va)->resp.err;

 VAR_10 = (struct scsi_cmnd *) VAR_7;

 if (!FUNC_2(VAR_10, VAR_8))
  return;

 FUNC_0(VAR_8 == ((void*)0));
 VAR_9 = VAR_8->dev;

 if (!(VAR_8->flags & VAR_5))
  FUNC_5(VAR_10);

 if (VAR_8->flags & VAR_4) {

  VAR_10->result = VAR_3 << 16 | VAR_0 << 8;
  goto out;
 }

 switch (VAR_11->service_response) {
 case 132:
  FUNC_3(VAR_9, VAR_10, VAR_11);
  break;
 case 133:
  FUNC_4(VAR_9, VAR_10, VAR_11);
  break;
 case 129:
  VAR_10->result = VAR_1 << 16 | VAR_6 << 8;
  break;
 case 130:
  VAR_10->result = VAR_2 << 16 | VAR_0 << 8;
  break;
 case 131:
 case 128:
  VAR_10->result = VAR_3 << 16 | VAR_0 << 8;
  break;
 default:
  VAR_10->result = VAR_1 << 16 | VAR_0 << 8;
  break;
 }

out:
 FUNC_1(VAR_8);

 if (VAR_8->flags & VAR_5)
  VAR_10->SCp.sent_command = 1;
 else
  VAR_10->scsi_done(VAR_10);
}
