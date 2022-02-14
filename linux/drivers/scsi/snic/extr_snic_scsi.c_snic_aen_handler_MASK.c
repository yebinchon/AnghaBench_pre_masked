
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int u8 ;
typedef int u32 ;
struct snic_async_evnotify {int ev_id; } ;
struct TYPE_2__ {struct snic_async_evnotify async_ev; } ;
struct snic_fw_req {int hdr; TYPE_1__ u; } ;
struct snic {int shost; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ,int ,int,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int *,int*,int*,int *) ;

__attribute__((used)) static void
FUNC_6(struct snic *VAR_0, struct snic_fw_req *VAR_1)
{
 u8 VAR_2, VAR_3;
 u32 VAR_4, VAR_5;
 ulong VAR_6;
 struct snic_async_evnotify *VAR_7 = &VAR_1->u.async_ev;
 u32 VAR_8 = 0;

 FUNC_5(&VAR_1->hdr, &VAR_2, &VAR_3, &VAR_4, &VAR_5, &VAR_6);
 FUNC_3(VAR_0->shost,
        "aen: type = %x, hdr_stat = %x, cmnd_id = %x, hid = %x, ctx = %lx\n",
        VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 VAR_8 = FUNC_4(VAR_7->ev_id);

 switch (VAR_8) {
 case 129:
  FUNC_2(VAR_0->shost, "aen:TGT_OFFLINE Event Recvd.\n");
  break;

 case 128:
  FUNC_2(VAR_0->shost, "aen:TGT_ONLINE Event Recvd.\n");
  break;

 case 133:
  FUNC_2(VAR_0->shost, "aen:LUN_OFFLINE Event Recvd.\n");
  break;

 case 132:
  FUNC_2(VAR_0->shost, "aen:LUN_ONLINE Event Recvd.\n");
  break;

 case 137:
  FUNC_2(VAR_0->shost, "aen:Config Change Event Recvd.\n");
  break;

 case 131:
  FUNC_2(VAR_0->shost, "aen:TGT_ADD Event Recvd.\n");
  break;

 case 130:
  FUNC_2(VAR_0->shost, "aen:TGT_DEL Event Recvd.\n");
  break;

 case 135:
  FUNC_2(VAR_0->shost, "aen:LUN_ADD Event Recvd.\n");
  break;

 case 134:
  FUNC_2(VAR_0->shost, "aen:LUN_DEL Event Recvd.\n");
  break;

 case 136:
  FUNC_2(VAR_0->shost, "aen:DISC_CMPL Event Recvd.\n");
  break;

 default:
  FUNC_2(VAR_0->shost, "aen:Unknown Event Recvd.\n");
  FUNC_1(1);
  break;
 }

 FUNC_0(1);
}
