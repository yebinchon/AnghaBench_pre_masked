
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int cmdq_pi; } ;
struct TYPE_6__ {scalar_t__ i2htok; } ;
struct TYPE_9__ {TYPE_1__ mtag; } ;
struct bfi_msgq_h2i_db {TYPE_2__ idx; TYPE_4__ mh; } ;
struct TYPE_10__ {int * msg; } ;
struct bfa_msgq_cmdq {TYPE_5__ dbell_mb; TYPE_3__* msgq; int producer_index; } ;
struct TYPE_8__ {int ioc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_msgq_cmdq*) ;
 int FUNC_1 (int ,TYPE_5__*,int (*) (struct bfa_msgq_cmdq*),struct bfa_msgq_cmdq*) ;
 int FUNC_2 (TYPE_4__,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bfi_msgq_h2i_db*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_msgq_cmdq *VAR_2)
{
 struct bfi_msgq_h2i_db *VAR_3 =
  (struct bfi_msgq_h2i_db *)(&VAR_2->dbell_mb.msg[0]);

 FUNC_4(VAR_3, 0, sizeof(struct bfi_msgq_h2i_db));
 FUNC_2(VAR_3->mh, VAR_0, VAR_1, 0);
 VAR_3->mh.mtag.i2htok = 0;
 VAR_3->idx.cmdq_pi = FUNC_3(VAR_2->producer_index);

 if (!FUNC_1(VAR_2->msgq->ioc, &VAR_2->dbell_mb,
    FUNC_0, VAR_2)) {
  FUNC_0(VAR_2);
 }
}
