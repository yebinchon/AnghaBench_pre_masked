
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct us_data {scalar_t__ iobuf; } ;
struct bulk_cb_wrap {int DataTransferLength; int* CDB; int Flags; int Signature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct us_data*,int ,void*,int ) ;
 int FUNC_2 (struct bulk_cb_wrap*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct us_data *VAR_3, u16 VAR_4, void *VAR_5)
{
 struct bulk_cb_wrap *VAR_6 = (struct bulk_cb_wrap *) VAR_3->iobuf;
 int VAR_7;

 FUNC_2(VAR_6, 0, sizeof(struct bulk_cb_wrap));
 VAR_6->Signature = FUNC_0(VAR_1);
 VAR_6->DataTransferLength = 0x01;
 VAR_6->Flags = VAR_2;
 VAR_6->CDB[0] = 0xED;
 VAR_6->CDB[2] = (unsigned char)(VAR_4>>8);
 VAR_6->CDB[3] = (unsigned char)VAR_4;

 VAR_7 = FUNC_1(VAR_3, VAR_0, VAR_5, 0);
 return VAR_7;
}
