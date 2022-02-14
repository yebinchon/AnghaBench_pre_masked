
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {struct rdac_dh_data* handler_data; } ;
struct rdac_dh_data {TYPE_1__* ctlr; scalar_t__ lun_state; scalar_t__ mode; int lun; int state; } ;
struct TYPE_2__ {int kref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct scsi_device*,struct rdac_dh_data*) ;
 int FUNC_1 (struct scsi_device*,struct rdac_dh_data*,char*,char*) ;
 int FUNC_2 (struct scsi_device*,struct rdac_dh_data*,char*,char*) ;
 int FUNC_3 (struct rdac_dh_data*) ;
 int FUNC_4 (int *,int ) ;
 struct rdac_dh_data* FUNC_5 (int,int ) ;
 int VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int ,struct scsi_device*,char*,int ,int ,int ,int ) ;
 int FUNC_7 (struct scsi_device*,struct rdac_dh_data*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct scsi_device *VAR_13)
{
 struct rdac_dh_data *VAR_14;
 int VAR_15;
 char VAR_16[VAR_0];
 char VAR_17[VAR_8];

 VAR_14 = FUNC_5(sizeof(*VAR_14) , VAR_1);
 if (!VAR_14)
  return VAR_5;
 VAR_14->lun = VAR_7;
 VAR_14->state = VAR_4;

 VAR_15 = FUNC_1(VAR_13, VAR_14, VAR_16, VAR_17);
 if (VAR_15 != VAR_6)
  goto failed;

 VAR_15 = FUNC_2(VAR_13, VAR_14, VAR_16, VAR_17);
 if (VAR_15 != VAR_6)
  goto failed;

 VAR_15 = FUNC_0(VAR_13, VAR_14);
 if (VAR_15 != VAR_6)
  goto clean_ctlr;

 VAR_15 = FUNC_7(VAR_13, VAR_14);
 if (VAR_15 != VAR_6)
  goto clean_ctlr;

 FUNC_6(VAR_2, VAR_13,
      "%s: LUN %d (%s) (%s)\n",
      VAR_3, VAR_14->lun, VAR_11[(int)VAR_14->mode],
      VAR_10[(int)VAR_14->lun_state]);

 VAR_13->handler_data = VAR_14;
 return VAR_6;

clean_ctlr:
 FUNC_8(&VAR_9);
 FUNC_4(&VAR_14->ctlr->kref, VAR_12);
 FUNC_9(&VAR_9);

failed:
 FUNC_3(VAR_14);
 return VAR_15;
}
