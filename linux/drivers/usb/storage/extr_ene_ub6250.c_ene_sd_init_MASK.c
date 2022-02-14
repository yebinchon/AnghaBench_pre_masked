
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct us_data {scalar_t__ extra; scalar_t__ iobuf; } ;
struct SD_STATUS {scalar_t__ WtP; scalar_t__ HiSpeed; scalar_t__ HiCapacity; scalar_t__ IsMMC; scalar_t__ Ready; scalar_t__ Insert; } ;
struct ene_ub6250_info {struct SD_STATUS SD_Status; scalar_t__* bbuf; } ;
struct bulk_cb_wrap {int* CDB; int DataTransferLength; void* Flags; void* Signature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct us_data*,scalar_t__*) ;
 int FUNC_2 (struct us_data*,int ) ;
 int FUNC_3 (struct us_data*,int ,scalar_t__*,int ) ;
 int FUNC_4 (struct bulk_cb_wrap*,int ,int) ;
 int FUNC_5 (struct us_data*,char*,...) ;

__attribute__((used)) static int FUNC_6(struct us_data *VAR_8)
{
 int VAR_9;
 struct bulk_cb_wrap *VAR_10 = (struct bulk_cb_wrap *) VAR_8->iobuf;
 struct ene_ub6250_info *VAR_11 = (struct ene_ub6250_info *) VAR_8->extra;
 u8 *VAR_12 = VAR_11->bbuf;

 FUNC_5(VAR_8, "transport --- ENE_SDInit\n");

 VAR_9 = FUNC_2(VAR_8, VAR_1);
 if (VAR_9 != VAR_5) {
  FUNC_5(VAR_8, "Load SD Init Code Part-1 Fail !!\n");
  return VAR_3;
 }

 FUNC_4(VAR_10, 0, sizeof(struct bulk_cb_wrap));
 VAR_10->Signature = FUNC_0(VAR_6);
 VAR_10->Flags = VAR_7;
 VAR_10->CDB[0] = 0xF2;

 VAR_9 = FUNC_3(VAR_8, VAR_0, ((void*)0), 0);
 if (VAR_9 != VAR_5) {
  FUNC_5(VAR_8, "Execution SD Init Code Fail !!\n");
  return VAR_3;
 }


 VAR_9 = FUNC_2(VAR_8, VAR_2);
 if (VAR_9 != VAR_5) {
  FUNC_5(VAR_8, "Load SD Init Code Part-2 Fail !!\n");
  return VAR_3;
 }

 FUNC_4(VAR_10, 0, sizeof(struct bulk_cb_wrap));
 VAR_10->Signature = FUNC_0(VAR_6);
 VAR_10->DataTransferLength = 0x200;
 VAR_10->Flags = VAR_7;
 VAR_10->CDB[0] = 0xF1;

 VAR_9 = FUNC_3(VAR_8, VAR_0, VAR_12, 0);
 if (VAR_9 != VAR_5) {
  FUNC_5(VAR_8, "Execution SD Init Code Fail !!\n");
  return VAR_3;
 }

 VAR_11->SD_Status = *(struct SD_STATUS *) VAR_12;
 if (VAR_11->SD_Status.Insert && VAR_11->SD_Status.Ready) {
  struct SD_STATUS *VAR_13 = &VAR_11->SD_Status;

  FUNC_1(VAR_8, VAR_12);
  FUNC_5(VAR_8, "Insert     = %x\n", VAR_13->Insert);
  FUNC_5(VAR_8, "Ready      = %x\n", VAR_13->Ready);
  FUNC_5(VAR_8, "IsMMC      = %x\n", VAR_13->IsMMC);
  FUNC_5(VAR_8, "HiCapacity = %x\n", VAR_13->HiCapacity);
  FUNC_5(VAR_8, "HiSpeed    = %x\n", VAR_13->HiSpeed);
  FUNC_5(VAR_8, "WtP        = %x\n", VAR_13->WtP);
 } else {
  FUNC_5(VAR_8, "SD Card Not Ready --- %x\n", VAR_12[0]);
  return VAR_3;
 }
 return VAR_4;
}
