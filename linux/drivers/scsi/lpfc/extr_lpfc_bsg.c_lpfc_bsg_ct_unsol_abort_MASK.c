
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct lpfc_hba {TYPE_2__* ct_ctx; } ;
struct TYPE_3__ {int virt; } ;
struct hbq_dmabuf {TYPE_1__ hbuf; } ;
struct fc_frame_header {int fh_rx_id; int fh_ox_id; } ;
struct TYPE_4__ {scalar_t__ valid; scalar_t__ rxid; scalar_t__ oxid; scalar_t__ SID; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct fc_frame_header*,int ,int) ;
 scalar_t__ FUNC_2 (struct fc_frame_header*) ;

int
FUNC_3(struct lpfc_hba *VAR_3, struct hbq_dmabuf *VAR_4)
{
 struct fc_frame_header VAR_5;
 struct fc_frame_header *VAR_6 = &VAR_5;
 int VAR_7, VAR_8 = 0;
 uint16_t VAR_9, VAR_10;
 uint32_t VAR_11;

 FUNC_1(VAR_6, VAR_4->hbuf.virt, sizeof(struct fc_frame_header));
 VAR_11 = FUNC_2(VAR_6);
 VAR_9 = FUNC_0(VAR_6->fh_ox_id);
 VAR_10 = FUNC_0(VAR_6->fh_rx_id);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_3->ct_ctx[VAR_7].valid != VAR_2)
   continue;
  if (VAR_3->ct_ctx[VAR_7].rxid != VAR_10)
   continue;
  if (VAR_3->ct_ctx[VAR_7].oxid != VAR_9)
   continue;
  if (VAR_3->ct_ctx[VAR_7].SID != VAR_11)
   continue;
  VAR_3->ct_ctx[VAR_7].valid = VAR_1;
  VAR_8 = 1;
 }
 return VAR_8;
}
