
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_hba {int (* lpfc_sli_hbq_to_firmware ) (struct lpfc_hba*,int ,struct hbq_dmabuf*) ;int hbalock; } ;
struct hbq_dmabuf {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_hba*,int ,struct hbq_dmabuf*) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_hba *VAR_0, uint32_t VAR_1,
    struct hbq_dmabuf *VAR_2)
{
 FUNC_0(&VAR_0->hbalock);
 return VAR_0->lpfc_sli_hbq_to_firmware(VAR_0, VAR_1, VAR_2);
}
