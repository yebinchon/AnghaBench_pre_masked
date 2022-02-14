
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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

__attribute__((used)) static int FUNC_4(struct us_data *VAR_7, u32 VAR_8)
{
 struct bulk_cb_wrap *VAR_9 = (struct bulk_cb_wrap *) VAR_7->iobuf;
 int VAR_10;
 u32 VAR_11 = VAR_8;

 VAR_10 = FUNC_1(VAR_7, VAR_1);
 if (VAR_10 != VAR_4)
  return VAR_2;

 FUNC_3(VAR_9, 0, sizeof(struct bulk_cb_wrap));
 VAR_9->Signature = FUNC_0(VAR_5);
 VAR_9->DataTransferLength = 0x200;
 VAR_9->Flags = VAR_6;
 VAR_9->CDB[0] = 0xF2;
 VAR_9->CDB[1] = 0x06;
 VAR_9->CDB[4] = (unsigned char)(VAR_11);
 VAR_9->CDB[3] = (unsigned char)(VAR_11>>8);
 VAR_9->CDB[2] = (unsigned char)(VAR_11>>16);

 VAR_10 = FUNC_2(VAR_7, VAR_0, ((void*)0), 0);
 if (VAR_10 != VAR_4)
  return VAR_2;

 return VAR_3;
}
