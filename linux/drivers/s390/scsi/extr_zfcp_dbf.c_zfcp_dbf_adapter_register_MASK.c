
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_dbf_scsi {int dummy; } ;
struct zfcp_dbf_san {int dummy; } ;
struct zfcp_dbf_rec {int dummy; } ;
struct zfcp_dbf_pay {int dummy; } ;
struct zfcp_dbf_hba {int dummy; } ;
struct zfcp_dbf {void* scsi; void* san; void* pay; void* hba; void* rec; int rec_lock; int scsi_lock; int san_lock; int hba_lock; int pay_lock; } ;
struct zfcp_adapter {struct zfcp_dbf* dbf; TYPE_1__* ccw_device; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int *) ;
 struct zfcp_dbf* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,char*) ;
 void* FUNC_4 (char*,int,int) ;
 int FUNC_5 (struct zfcp_dbf*) ;

int FUNC_6(struct zfcp_adapter *VAR_4)
{
 char VAR_5[VAR_0];
 struct zfcp_dbf *VAR_6;

 VAR_6 = FUNC_1(sizeof(struct zfcp_dbf), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 FUNC_2(&VAR_6->pay_lock);
 FUNC_2(&VAR_6->hba_lock);
 FUNC_2(&VAR_6->san_lock);
 FUNC_2(&VAR_6->scsi_lock);
 FUNC_2(&VAR_6->rec_lock);


 FUNC_3(VAR_5, "zfcp_%s_rec", FUNC_0(&VAR_4->ccw_device->dev));
 VAR_6->rec = FUNC_4(VAR_5, VAR_3, sizeof(struct zfcp_dbf_rec));
 if (!VAR_6->rec)
  goto err_out;


 FUNC_3(VAR_5, "zfcp_%s_hba", FUNC_0(&VAR_4->ccw_device->dev));
 VAR_6->hba = FUNC_4(VAR_5, VAR_3, sizeof(struct zfcp_dbf_hba));
 if (!VAR_6->hba)
  goto err_out;


 FUNC_3(VAR_5, "zfcp_%s_pay", FUNC_0(&VAR_4->ccw_device->dev));
 VAR_6->pay = FUNC_4(VAR_5, VAR_3 * 2, sizeof(struct zfcp_dbf_pay));
 if (!VAR_6->pay)
  goto err_out;


 FUNC_3(VAR_5, "zfcp_%s_san", FUNC_0(&VAR_4->ccw_device->dev));
 VAR_6->san = FUNC_4(VAR_5, VAR_3, sizeof(struct zfcp_dbf_san));
 if (!VAR_6->san)
  goto err_out;


 FUNC_3(VAR_5, "zfcp_%s_scsi", FUNC_0(&VAR_4->ccw_device->dev));
 VAR_6->scsi = FUNC_4(VAR_5, VAR_3, sizeof(struct zfcp_dbf_scsi));
 if (!VAR_6->scsi)
  goto err_out;

 VAR_4->dbf = VAR_6;

 return 0;
err_out:
 FUNC_5(VAR_6);
 return -VAR_1;
}
