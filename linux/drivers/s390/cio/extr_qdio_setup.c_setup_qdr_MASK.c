
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdio_irq {int output_qs; int input_qs; TYPE_1__* qdr; int qib; } ;
struct qdio_initialize {int no_input_qs; int no_output_qs; int qdr_ac; int q_format; } ;
struct qdesfmt0 {int dummy; } ;
struct TYPE_2__ {int iqdcnt; int oqdcnt; int iqdsz; int oqdsz; unsigned long qiba; int qkey; int ac; int qfmt; } ;


 int VAR_0 ;
 int FUNC_0 (struct qdio_irq*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct qdio_irq *VAR_1,
        struct qdio_initialize *VAR_2)
{
 int VAR_3;

 VAR_1->qdr->qfmt = VAR_2->q_format;
 VAR_1->qdr->ac = VAR_2->qdr_ac;
 VAR_1->qdr->iqdcnt = VAR_2->no_input_qs;
 VAR_1->qdr->oqdcnt = VAR_2->no_output_qs;
 VAR_1->qdr->iqdsz = sizeof(struct qdesfmt0) / 4;
 VAR_1->qdr->oqdsz = sizeof(struct qdesfmt0) / 4;
 VAR_1->qdr->qiba = (unsigned long)&VAR_1->qib;
 VAR_1->qdr->qkey = VAR_0 >> 4;

 for (VAR_3 = 0; VAR_3 < VAR_2->no_input_qs; VAR_3++)
  FUNC_0(VAR_1, VAR_1->input_qs, VAR_3, 0);

 for (VAR_3 = 0; VAR_3 < VAR_2->no_output_qs; VAR_3++)
  FUNC_0(VAR_1, VAR_1->output_qs, VAR_3,
      VAR_2->no_input_qs);
}
