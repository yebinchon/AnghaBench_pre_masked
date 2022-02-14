
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {void* virt; int phys; } ;
struct lpfc_ras_fwlog {int fw_buffcount; int fwlog_buff_list; TYPE_1__ lwpd; } ;
struct lpfc_hba {TYPE_2__* pcidev; struct lpfc_ras_fwlog ras_fwlog; } ;
struct lpfc_dmabuf {int buffer_tag; int list; void* virt; int phys; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_6 (struct lpfc_hba*) ;

__attribute__((used)) static int
FUNC_7(struct lpfc_hba *VAR_6,
   uint32_t VAR_7)
{
 struct lpfc_ras_fwlog *VAR_8 = &VAR_6->ras_fwlog;
 struct lpfc_dmabuf *VAR_9;
 int VAR_10 = 0, VAR_11 = 0;


 FUNC_0(&VAR_8->fwlog_buff_list);


 VAR_8->lwpd.virt = FUNC_1(&VAR_6->pcidev->dev,
         sizeof(uint32_t) * 2,
         &VAR_8->lwpd.phys,
         VAR_1);
 if (!VAR_8->lwpd.virt) {
  FUNC_5(VAR_6, VAR_2, VAR_4,
    "6185 LWPD Memory Alloc Failed\n");

  return -VAR_0;
 }

 VAR_8->fw_buffcount = VAR_7;
 for (VAR_11 = 0; VAR_11 < VAR_8->fw_buffcount; VAR_11++) {
  VAR_9 = FUNC_3(sizeof(struct lpfc_dmabuf),
     VAR_1);
  if (!VAR_9) {
   VAR_10 = -VAR_0;
   FUNC_5(VAR_6, VAR_3, VAR_4,
     "6186 Memory Alloc failed FW logging");
   goto free_mem;
  }

  VAR_9->virt = FUNC_1(&VAR_6->pcidev->dev,
        VAR_5,
        &VAR_9->phys, VAR_1);
  if (!VAR_9->virt) {
   FUNC_2(VAR_9);
   VAR_10 = -VAR_0;
   FUNC_5(VAR_6, VAR_3, VAR_4,
     "6187 DMA Alloc Failed FW logging");
   goto free_mem;
  }
  VAR_9->buffer_tag = VAR_11;
  FUNC_4(&VAR_9->list, &VAR_8->fwlog_buff_list);
 }

free_mem:
 if (VAR_10)
  FUNC_6(VAR_6);

 return VAR_10;
}
