
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct us_data {scalar_t__ extra; scalar_t__ iobuf; } ;
struct ms_lib_type_extdat {int intr; int status0; int status1; int logadr; void* mngflg; void* ovrflg; scalar_t__ reserved; } ;
struct ene_ub6250_info {void** bbuf; } ;
struct bulk_cb_wrap {int DataTransferLength; int* CDB; int Flags; int Signature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct us_data*,int ,void**,int ) ;
 int FUNC_2 (struct bulk_cb_wrap*,int ,int) ;
 int FUNC_3 (void*,void*) ;

__attribute__((used)) static int FUNC_4(struct us_data *VAR_6, u32 VAR_7,
    u8 VAR_8, struct ms_lib_type_extdat *VAR_9)
{
 struct bulk_cb_wrap *VAR_10 = (struct bulk_cb_wrap *) VAR_6->iobuf;
 struct ene_ub6250_info *VAR_11 = (struct ene_ub6250_info *) VAR_6->extra;
 u8 *VAR_12 = VAR_11->bbuf;
 int VAR_13;

 FUNC_2(VAR_10, 0, sizeof(struct bulk_cb_wrap));
 VAR_10->Signature = FUNC_0(VAR_4);
 VAR_10->DataTransferLength = 0x4;
 VAR_10->Flags = VAR_5;
 VAR_10->CDB[0] = 0xF1;
 VAR_10->CDB[1] = 0x03;
 VAR_10->CDB[5] = (unsigned char)(VAR_8);
 VAR_10->CDB[4] = (unsigned char)(VAR_7);
 VAR_10->CDB[3] = (unsigned char)(VAR_7>>8);
 VAR_10->CDB[2] = (unsigned char)(VAR_7>>16);
 VAR_10->CDB[6] = 0x01;

 VAR_13 = FUNC_1(VAR_6, VAR_0, VAR_12, 0);
 if (VAR_13 != VAR_3)
  return VAR_1;

 VAR_9->reserved = 0;
 VAR_9->intr = 0x80;
 VAR_9->status0 = 0x10;
 VAR_9->status1 = 0x00;
 VAR_9->ovrflg = VAR_12[0];
 VAR_9->mngflg = VAR_12[1];
 VAR_9->logadr = FUNC_3(VAR_12[2], VAR_12[3]);

 return VAR_2;
}
