
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef int u8 ;
typedef int u32 ;
struct snic_tgt_id {int tgt_id; } ;
struct snic_req_info {scalar_t__ sge_va; } ;
struct TYPE_6__ {int tgt_cnt; } ;
struct TYPE_7__ {TYPE_1__ rpt_tgts_cmpl; } ;
struct snic_fw_req {TYPE_2__ u; int hdr; } ;
struct TYPE_9__ {int rtgt_cnt; int * rtgt_info; } ;
struct TYPE_8__ {int max_tgts; } ;
struct snic {int tgt_work; TYPE_4__ disc; int shost; TYPE_3__ fwinfo; } ;
struct TYPE_10__ {int event_q; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct snic_tgt_id*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 TYPE_5__* VAR_0 ;
 int FUNC_6 (int *,int *,int *,int*,int*,scalar_t__*) ;
 int FUNC_7 (struct snic*,struct snic_req_info*) ;
 int FUNC_8 (struct snic*,struct snic_req_info*) ;

int
FUNC_9(struct snic *VAR_1, struct snic_fw_req *VAR_2)
{

 u8 VAR_3, VAR_4;
 u32 VAR_5, VAR_6, VAR_7 = 0;
 ulong VAR_8;
 struct snic_req_info *VAR_9 = ((void*)0);
 struct snic_tgt_id *VAR_10;
 int VAR_11, VAR_12 = 0;

 FUNC_6(&VAR_2->hdr, &VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_8);
 VAR_9 = (struct snic_req_info *) VAR_8;
 VAR_10 = (struct snic_tgt_id *) VAR_9->sge_va;

 VAR_7 = FUNC_4(VAR_2->u.rpt_tgts_cmpl.tgt_cnt);
 if (VAR_7 == 0) {
  FUNC_1(VAR_1->shost, "No Targets Found on this host.\n");
  VAR_12 = 1;

  goto end;
 }


 FUNC_2(VAR_1->shost, "Target Count = %d\n", VAR_7);

 FUNC_0(VAR_7 > VAR_1->fwinfo.max_tgts);

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
  FUNC_2(VAR_1->shost,
          "Tgt id = 0x%x\n",
          FUNC_4(VAR_10[VAR_11].tgt_id));





 VAR_1->disc.rtgt_cnt = VAR_7;
 VAR_1->disc.rtgt_info = (u8 *) VAR_10;
 FUNC_5(VAR_0->event_q, &VAR_1->tgt_work);
 VAR_12 = 0;

end:

 FUNC_7(VAR_1, VAR_9);
 if (VAR_12)
  FUNC_3(VAR_10);

 VAR_9->sge_va = 0;
 FUNC_8(VAR_1, VAR_9);

 return VAR_12;
}
