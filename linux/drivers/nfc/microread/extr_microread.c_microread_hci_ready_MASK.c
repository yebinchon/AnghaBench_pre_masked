
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nfc_hci_dev*,int ,int ,int*,int,int *) ;

__attribute__((used)) static int FUNC_1(struct nfc_hci_dev *VAR_6)
{
 int VAR_7;
 u8 VAR_8[4];

 VAR_8[0] = 0x03;
 VAR_7 = FUNC_0(VAR_6, VAR_1,
        VAR_0, VAR_8, 1, ((void*)0));
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_2,
        VAR_0, ((void*)0), 0, ((void*)0));
 if (VAR_7)
  return VAR_7;

 VAR_8[0] = 0x00;
 VAR_8[1] = 0x03;
 VAR_8[2] = 0x00;
 VAR_7 = FUNC_0(VAR_6, VAR_3,
        VAR_0, VAR_8, 3, ((void*)0));
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_4,
        VAR_0, ((void*)0), 0, ((void*)0));
 if (VAR_7)
  return VAR_7;

 VAR_8[0] = 0xFF;
 VAR_8[1] = 0xFF;
 VAR_8[2] = 0x00;
 VAR_8[3] = 0x00;
 VAR_7 = FUNC_0(VAR_6, VAR_5,
        VAR_0, VAR_8, 4, ((void*)0));

 return VAR_7;
}
