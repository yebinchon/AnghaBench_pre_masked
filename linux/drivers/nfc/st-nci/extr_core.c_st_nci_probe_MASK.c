
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct st_nci_se_status {int dummy; } ;
struct st_nci_info {struct llt_ndlc* ndlc; } ;
struct llt_ndlc {int ndev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct st_nci_info* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *,int,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct st_nci_info*) ;
 int FUNC_5 (char*) ;
 int VAR_9 ;
 int FUNC_6 (int ,struct st_nci_se_status*) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct llt_ndlc *VAR_10, int VAR_11,
   int VAR_12, struct st_nci_se_status *VAR_13)
{
 struct st_nci_info *VAR_14;
 int VAR_15;
 u32 VAR_16;

 VAR_14 = FUNC_0(VAR_10->dev,
   sizeof(struct st_nci_info), VAR_1);
 if (!VAR_14)
  return -VAR_0;

 VAR_16 = VAR_6
  | VAR_7
  | VAR_2
  | VAR_4
  | VAR_3
  | VAR_5
  | VAR_8;

 VAR_10->ndev = FUNC_1(&VAR_9, VAR_16,
     VAR_11, VAR_12);
 if (!VAR_10->ndev) {
  FUNC_5("Cannot allocate nfc ndev\n");
  return -VAR_0;
 }
 VAR_14->ndlc = VAR_10;

 FUNC_4(VAR_10->ndev, VAR_14);

 VAR_15 = FUNC_7(VAR_10->ndev);
 if (VAR_15) {
  FUNC_5("Cannot register proprietary vendor cmds\n");
  goto err_reg_dev;
 }

 VAR_15 = FUNC_3(VAR_10->ndev);
 if (VAR_15) {
  FUNC_5("Cannot register nfc device to nci core\n");
  goto err_reg_dev;
 }

 return FUNC_6(VAR_10->ndev, VAR_13);

err_reg_dev:
 FUNC_2(VAR_10->ndev);
 return VAR_15;
}
