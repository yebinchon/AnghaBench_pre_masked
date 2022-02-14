
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int clk_list_head; int dev_ref_clk_freq; struct device* dev; struct Scsi_Host* host; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 struct Scsi_Host* FUNC_2 (int *,int) ;
 struct ufs_hba* FUNC_3 (struct Scsi_Host*) ;
 int VAR_3 ;

int FUNC_4(struct device *VAR_4, struct ufs_hba **VAR_5)
{
 struct Scsi_Host *VAR_6;
 struct ufs_hba *VAR_7;
 int VAR_8 = 0;

 if (!VAR_4) {
  FUNC_1(VAR_4,
  "Invalid memory reference for dev is NULL\n");
  VAR_8 = -VAR_0;
  goto out_error;
 }

 VAR_6 = FUNC_2(&VAR_3,
    sizeof(struct ufs_hba));
 if (!VAR_6) {
  FUNC_1(VAR_4, "scsi_host_alloc failed\n");
  VAR_8 = -VAR_1;
  goto out_error;
 }
 VAR_7 = FUNC_3(VAR_6);
 VAR_7->host = VAR_6;
 VAR_7->dev = VAR_4;
 *VAR_5 = VAR_7;
 VAR_7->dev_ref_clk_freq = VAR_2;

 FUNC_0(&VAR_7->clk_list_head);

out_error:
 return VAR_8;
}
