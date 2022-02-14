
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef int u32 ;
struct us_data {scalar_t__ iobuf; } ;
struct bulk_cb_wrap {int DataTransferLength; int* CDB; int Flags; int Signature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct us_data*,int ) ;
 int FUNC_2 (struct us_data*,int ,int *,int ) ;
 int FUNC_3 (struct bulk_cb_wrap*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct us_data *VAR_7, u32 VAR_8,
    u8 VAR_9, u8 VAR_10)
{
 struct bulk_cb_wrap *VAR_11 = (struct bulk_cb_wrap *) VAR_7->iobuf;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_7, VAR_1);
 if (VAR_12 != VAR_4)
  return VAR_2;

 FUNC_3(VAR_11, 0, sizeof(struct bulk_cb_wrap));
 VAR_11->Signature = FUNC_0(VAR_5);
 VAR_11->DataTransferLength = 0x4;
 VAR_11->Flags = VAR_6;
 VAR_11->CDB[0] = 0xF2;
 VAR_11->CDB[1] = 0x05;
 VAR_11->CDB[5] = (unsigned char)(VAR_9);
 VAR_11->CDB[4] = (unsigned char)(VAR_8);
 VAR_11->CDB[3] = (unsigned char)(VAR_8>>8);
 VAR_11->CDB[2] = (unsigned char)(VAR_8>>16);
 VAR_11->CDB[6] = VAR_10;
 VAR_11->CDB[7] = 0xFF;
 VAR_11->CDB[8] = 0xFF;
 VAR_11->CDB[9] = 0xFF;

 VAR_12 = FUNC_2(VAR_7, VAR_0, ((void*)0), 0);
 if (VAR_12 != VAR_4)
  return VAR_2;

 return VAR_3;
}
