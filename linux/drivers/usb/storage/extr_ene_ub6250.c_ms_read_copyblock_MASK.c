
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef int u16 ;
struct us_data {scalar_t__ iobuf; } ;
struct bulk_cb_wrap {int DataTransferLength; int Flags; int* CDB; int Signature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct us_data*,int ) ;
 int FUNC_2 (struct us_data*,int ,unsigned char*,int ) ;
 int FUNC_3 (struct bulk_cb_wrap*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct us_data *VAR_6, u16 VAR_7, u16 VAR_8,
   u16 VAR_9, u8 VAR_10, unsigned char *VAR_11, u16 VAR_12)
{
 struct bulk_cb_wrap *VAR_13 = (struct bulk_cb_wrap *) VAR_6->iobuf;
 int VAR_14;

 VAR_14 = FUNC_1(VAR_6, VAR_1);
 if (VAR_14 != VAR_4)
  return VAR_2;

 FUNC_3(VAR_13, 0, sizeof(struct bulk_cb_wrap));
 VAR_13->Signature = FUNC_0(VAR_5);
 VAR_13->DataTransferLength = 0x200*VAR_12;
 VAR_13->Flags = 0x00;
 VAR_13->CDB[0] = 0xF0;
 VAR_13->CDB[1] = 0x08;
 VAR_13->CDB[4] = (unsigned char)(VAR_7);
 VAR_13->CDB[3] = (unsigned char)(VAR_7>>8);
 VAR_13->CDB[2] = 0;
 VAR_13->CDB[7] = (unsigned char)(VAR_8);
 VAR_13->CDB[6] = (unsigned char)(VAR_8>>8);
 VAR_13->CDB[5] = 0;
 VAR_13->CDB[9] = (unsigned char)(VAR_9);
 VAR_13->CDB[8] = (unsigned char)(VAR_9>>8);
 VAR_13->CDB[10] = VAR_10;

 VAR_14 = FUNC_2(VAR_6, VAR_0, VAR_11, 0);
 if (VAR_14 != VAR_4)
  return VAR_2;

 return VAR_3;
}
