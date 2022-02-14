
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct lpfc_rpi_hdr {int page_count; scalar_t__ next_rpi; int list; scalar_t__ start_rpi; int len; struct lpfc_dmabuf* dmabuf; } ;
struct TYPE_4__ {scalar_t__ max_rpi; } ;
struct TYPE_5__ {scalar_t__ next_rpi; int lpfc_rpi_hdr_list; TYPE_1__ max_cfg_param; scalar_t__ extents_in_use; int rpi_hdrs_in_use; } ;
struct lpfc_hba {TYPE_3__* pcidev; int hbalock; TYPE_2__ sli4_hba; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (struct lpfc_dmabuf*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

struct lpfc_rpi_hdr *
FUNC_8(struct lpfc_hba *VAR_3)
{
 uint16_t VAR_4, VAR_5;
 struct lpfc_dmabuf *VAR_6;
 struct lpfc_rpi_hdr *VAR_7;






 if (!VAR_3->sli4_hba.rpi_hdrs_in_use)
  return ((void*)0);
 if (VAR_3->sli4_hba.extents_in_use)
  return ((void*)0);


 VAR_4 = VAR_3->sli4_hba.max_cfg_param.max_rpi;

 FUNC_6(&VAR_3->hbalock);





 VAR_5 = VAR_3->sli4_hba.next_rpi;
 FUNC_7(&VAR_3->hbalock);


 if (VAR_5 == VAR_4)
  return ((void*)0);





 VAR_6 = FUNC_4(sizeof(struct lpfc_dmabuf), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->virt = FUNC_1(&VAR_3->pcidev->dev,
       VAR_1,
       &VAR_6->phys, VAR_0);
 if (!VAR_6->virt) {
  VAR_7 = ((void*)0);
  goto err_free_dmabuf;
 }

 if (!FUNC_0(VAR_6->phys, VAR_1)) {
  VAR_7 = ((void*)0);
  goto err_free_coherent;
 }


 VAR_7 = FUNC_4(sizeof(struct lpfc_rpi_hdr), VAR_0);
 if (!VAR_7)
  goto err_free_coherent;

 VAR_7->dmabuf = VAR_6;
 VAR_7->len = VAR_1;
 VAR_7->page_count = 1;
 FUNC_6(&VAR_3->hbalock);


 VAR_7->start_rpi = VAR_5;
 VAR_7->next_rpi = VAR_3->sli4_hba.next_rpi + VAR_2;
 FUNC_5(&VAR_7->list, &VAR_3->sli4_hba.lpfc_rpi_hdr_list);

 FUNC_7(&VAR_3->hbalock);
 return VAR_7;

 err_free_coherent:
 FUNC_2(&VAR_3->pcidev->dev, VAR_1,
     VAR_6->virt, VAR_6->phys);
 err_free_dmabuf:
 FUNC_3(VAR_6);
 return ((void*)0);
}
