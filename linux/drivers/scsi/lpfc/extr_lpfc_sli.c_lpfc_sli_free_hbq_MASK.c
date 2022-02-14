
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct lpfc_hba {TYPE_1__* hbqs; } ;
struct hbq_dmabuf {int tag; } ;
struct TYPE_2__ {int (* hbq_free_buffer ) (struct lpfc_hba*,struct hbq_dmabuf*) ;} ;


 scalar_t__ FUNC_0 (struct lpfc_hba*,size_t,struct hbq_dmabuf*) ;
 int FUNC_1 (struct lpfc_hba*,struct hbq_dmabuf*) ;

void
FUNC_2(struct lpfc_hba *VAR_0, struct hbq_dmabuf *VAR_1)
{
 uint32_t VAR_2;

 if (VAR_1) {
  VAR_2 = VAR_1->tag >> 16;
  if (FUNC_0(VAR_0, VAR_2, VAR_1))
   (VAR_0->hbqs[VAR_2].hbq_free_buffer)(VAR_0, VAR_1);
 }
}
