
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvmc_crq_msg {int type; } ;
struct crq_server_adapter {int dev; } ;
struct TYPE_2__ {int state; } ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct crq_server_adapter*,struct ibmvmc_crq_msg*) ;
 int FUNC_3 (struct crq_server_adapter*,struct ibmvmc_crq_msg*) ;
 int FUNC_4 (struct ibmvmc_crq_msg*,struct crq_server_adapter*) ;
 int FUNC_5 (struct ibmvmc_crq_msg*,struct crq_server_adapter*) ;
 int FUNC_6 (struct crq_server_adapter*,struct ibmvmc_crq_msg*) ;
 int FUNC_7 (struct crq_server_adapter*,struct ibmvmc_crq_msg*) ;
 int VAR_1 ;
 int FUNC_8 (struct crq_server_adapter*,struct ibmvmc_crq_msg*) ;

__attribute__((used)) static void FUNC_9(struct crq_server_adapter *VAR_2,
          struct ibmvmc_crq_msg *VAR_3)
{
 switch (VAR_3->type) {
 case 135:
  FUNC_0(VAR_2->dev, "CRQ recv: capabilities resp (0x%x)\n",
   VAR_3->type);
  if (VAR_0.state == VAR_1)
   FUNC_3(VAR_2, VAR_3);
  else
   FUNC_1(VAR_2->dev, "caps msg invalid in state 0x%x\n",
     VAR_0.state);
  break;
 case 131:
  FUNC_0(VAR_2->dev, "CRQ recv: open resp (0x%x)\n",
   VAR_3->type);
  if (FUNC_8(VAR_2, VAR_3) == 0)
   FUNC_5(VAR_3, VAR_2);
  break;
 case 138:
  FUNC_0(VAR_2->dev, "CRQ recv: add buf (0x%x)\n",
   VAR_3->type);
  if (FUNC_8(VAR_2, VAR_3) == 0)
   FUNC_2(VAR_2, VAR_3);
  break;
 case 130:
  FUNC_0(VAR_2->dev, "CRQ recv: rem buf (0x%x)\n",
   VAR_3->type);
  if (FUNC_8(VAR_2, VAR_3) == 0)
   FUNC_7(VAR_2, VAR_3);
  break;
 case 128:
  FUNC_0(VAR_2->dev, "CRQ recv: signal msg (0x%x)\n",
   VAR_3->type);
  if (FUNC_8(VAR_2, VAR_3) == 0)
   FUNC_6(VAR_2, VAR_3);
  break;
 case 133:
  FUNC_0(VAR_2->dev, "CRQ recv: close resp (0x%x)\n",
   VAR_3->type);
  if (FUNC_8(VAR_2, VAR_3) == 0)
   FUNC_4(VAR_3, VAR_2);
  break;
 case 136:
 case 132:
 case 134:
 case 137:
 case 129:
  FUNC_1(VAR_2->dev, "CRQ recv: unexpected msg (0x%x)\n",
    VAR_3->type);
  break;
 default:
  FUNC_1(VAR_2->dev, "CRQ recv: unknown msg (0x%x)\n",
    VAR_3->type);
  break;
 }
}
