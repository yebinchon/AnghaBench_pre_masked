
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvmc_crq_msg {int valid; } ;
struct crq_server_adapter {int dev; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct crq_server_adapter*,struct ibmvmc_crq_msg*) ;
 int FUNC_2 (struct ibmvmc_crq_msg*,struct crq_server_adapter*) ;
 int FUNC_3 (struct crq_server_adapter*,int) ;

__attribute__((used)) static void FUNC_4(struct ibmvmc_crq_msg *VAR_0,
         struct crq_server_adapter *VAR_1)
{
 switch (VAR_0->valid) {
 case 0xC0:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 0xFF:
  FUNC_0(VAR_1->dev, "CRQ recv: virtual adapter failed - resetting.\n");
  FUNC_3(VAR_1, 1);
  break;
 case 0x80:
  FUNC_1(VAR_1, VAR_0);
  break;
 default:
  FUNC_0(VAR_1->dev, "CRQ recv: unknown msg 0x%02x.\n",
    VAR_0->valid);
  break;
 }
}
