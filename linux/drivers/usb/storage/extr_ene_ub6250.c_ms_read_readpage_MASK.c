
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct us_data {scalar_t__ extra; scalar_t__ iobuf; } ;
struct ms_lib_type_extdat {int intr; int status0; int status1; int ovrflg; int mngflg; int logadr; scalar_t__ reserved; } ;
struct ene_ub6250_info {int* bbuf; } ;
struct bulk_cb_wrap {int DataTransferLength; int* CDB; void* Flags; void* Signature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct us_data*,int ) ;
 int FUNC_2 (struct us_data*,int ,int*,int ) ;
 int FUNC_3 (struct bulk_cb_wrap*,int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct us_data *VAR_7, u32 VAR_8,
  u8 VAR_9, u32 *VAR_10, struct ms_lib_type_extdat *VAR_11)
{
 struct bulk_cb_wrap *VAR_12 = (struct bulk_cb_wrap *) VAR_7->iobuf;
 struct ene_ub6250_info *VAR_13 = (struct ene_ub6250_info *) VAR_7->extra;
 u8 *VAR_14 = VAR_13->bbuf;
 int VAR_15;
 u32 VAR_16 = VAR_8 * 0x20 + VAR_9;

 VAR_15 = FUNC_1(VAR_7, VAR_1);
 if (VAR_15 != VAR_4)
  return VAR_2;


 FUNC_3(VAR_12, 0, sizeof(struct bulk_cb_wrap));
 VAR_12->Signature = FUNC_0(VAR_5);
 VAR_12->DataTransferLength = 0x200;
 VAR_12->Flags = VAR_6;
 VAR_12->CDB[0] = 0xF1;

 VAR_12->CDB[1] = 0x02;

 VAR_12->CDB[5] = (unsigned char)(VAR_16);
 VAR_12->CDB[4] = (unsigned char)(VAR_16>>8);
 VAR_12->CDB[3] = (unsigned char)(VAR_16>>16);
 VAR_12->CDB[2] = (unsigned char)(VAR_16>>24);

 VAR_15 = FUNC_2(VAR_7, VAR_0, VAR_10, 0);
 if (VAR_15 != VAR_4)
  return VAR_2;



 FUNC_3(VAR_12, 0, sizeof(struct bulk_cb_wrap));
 VAR_12->Signature = FUNC_0(VAR_5);
 VAR_12->DataTransferLength = 0x4;
 VAR_12->Flags = VAR_6;
 VAR_12->CDB[0] = 0xF1;
 VAR_12->CDB[1] = 0x03;

 VAR_12->CDB[5] = (unsigned char)(VAR_9);
 VAR_12->CDB[4] = (unsigned char)(VAR_8);
 VAR_12->CDB[3] = (unsigned char)(VAR_8>>8);
 VAR_12->CDB[2] = (unsigned char)(VAR_8>>16);
 VAR_12->CDB[6] = 0x01;

 VAR_15 = FUNC_2(VAR_7, VAR_0, VAR_14, 0);
 if (VAR_15 != VAR_4)
  return VAR_2;

 VAR_11->reserved = 0;
 VAR_11->intr = 0x80;
 VAR_11->status0 = 0x10;

 VAR_11->status1 = 0x00;
 VAR_11->ovrflg = VAR_14[0];
 VAR_11->mngflg = VAR_14[1];
 VAR_11->logadr = FUNC_4(VAR_14[2], VAR_14[3]);

 return VAR_3;
}
