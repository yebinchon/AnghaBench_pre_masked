
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcie_service_card {TYPE_1__* dev; } ;
struct mwifiex_adapter {int fw_name; struct pcie_service_card* card; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_0 (struct mwifiex_adapter*,int,int*) ;
 int FUNC_1 (struct mwifiex_adapter*,int,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mwifiex_adapter *VAR_9)
{
 int VAR_10 = 0;
 int VAR_11, VAR_12;
 struct pcie_service_card *VAR_13 = VAR_9->card;

 switch (VAR_13->dev->device) {
 case 130:
  FUNC_2(VAR_9->fw_name, VAR_2);
  break;
 case 129:
  FUNC_1(VAR_9, 0x0c58, 0x80c00000);
  FUNC_0(VAR_9, 0x0c58, &VAR_10);
  VAR_10 &= 0xff00;
  switch (VAR_10) {
  case 132:
   FUNC_2(VAR_9->fw_name, VAR_3);
   break;
  case 131:
   FUNC_2(VAR_9->fw_name, VAR_4);
   break;
  default:
   FUNC_2(VAR_9->fw_name, VAR_5);

   break;
  }
  break;
 case 128:
  FUNC_0(VAR_9, 0x8, &VAR_10);
  FUNC_0(VAR_9, 0x0cd0, &VAR_11);
  FUNC_0(VAR_9, 0x0cd4, &VAR_12);
  VAR_10 &= 0xff;
  VAR_11 &= 0x7;
  VAR_12 &= 0xff;
  if (VAR_10 == VAR_6 &&
      VAR_12 == VAR_0 &&
      VAR_11 == VAR_1)
   FUNC_2(VAR_9->fw_name, VAR_7);
  else
   FUNC_2(VAR_9->fw_name, VAR_8);
  break;
 default:
  break;
 }
}
