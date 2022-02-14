
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ac; } ;
struct TYPE_6__ {unsigned char qdioac1; unsigned char qdioac3; int qdioac2; int sch_token; } ;
struct TYPE_5__ {int sch_no; } ;
struct qdio_irq {TYPE_1__ qib; TYPE_3__ ssqd_desc; TYPE_2__ schid; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,unsigned char,int ) ;
 int FUNC_2 (struct qdio_irq*,unsigned char,int ) ;
 int FUNC_3 (struct qdio_irq*,unsigned char) ;
 int FUNC_4 (struct qdio_irq*,TYPE_2__*,TYPE_3__*) ;

void FUNC_5(struct qdio_irq *VAR_3)
{
 unsigned char VAR_4;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_3, &VAR_3->schid, &VAR_3->ssqd_desc);
 if (VAR_5) {
  FUNC_0("%4x ssqd ERR", VAR_3->schid.sch_no);
  FUNC_0("rc:%x", VAR_5);

  VAR_4 = VAR_0 | VAR_1 |
    VAR_2;
 } else
  VAR_4 = VAR_3->ssqd_desc.qdioac1;

 FUNC_2(VAR_3, VAR_4, VAR_3->ssqd_desc.sch_token);
 FUNC_3(VAR_3, VAR_4);
 FUNC_1("ac 1:%2x 2:%4x", VAR_4, VAR_3->ssqd_desc.qdioac2);
 FUNC_1("3:%4x qib:%4x", VAR_3->ssqd_desc.qdioac3, VAR_3->qib.ac);
}
