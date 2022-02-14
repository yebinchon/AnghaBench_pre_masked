
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sli4_sge {int word2; } ;
struct lpfc_io_buf {scalar_t__ dma_sgl; } ;
struct lpfc_hba {int dummy; } ;


 int FUNC_0 (int ,struct sli4_sge*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_1,
    struct lpfc_io_buf *VAR_2)
{
 struct sli4_sge *VAR_3 = (struct sli4_sge *)VAR_2->dma_sgl;
 if (VAR_3) {
  VAR_3 += 1;
  VAR_3->word2 = FUNC_2(VAR_3->word2);
  FUNC_0(VAR_0, VAR_3, 1);
  VAR_3->word2 = FUNC_1(VAR_3->word2);
 }
}
