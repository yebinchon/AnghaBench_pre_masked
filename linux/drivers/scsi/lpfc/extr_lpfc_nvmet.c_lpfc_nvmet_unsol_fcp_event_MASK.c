
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct rqb_dmabuf {int hbuf; } ;
struct lpfc_hba {scalar_t__ nvmet_support; } ;


 int FUNC_0 (struct lpfc_hba*,int ,struct rqb_dmabuf*,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,int *) ;

void
FUNC_2(struct lpfc_hba *VAR_0,
      uint32_t VAR_1,
      struct rqb_dmabuf *VAR_2,
      uint64_t VAR_3,
      uint8_t VAR_4)
{
 if (VAR_0->nvmet_support == 0) {
  FUNC_1(VAR_0, &VAR_2->hbuf);
  return;
 }
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
