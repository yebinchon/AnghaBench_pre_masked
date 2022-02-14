
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct lpfc_register {scalar_t__ word0; } ;
struct lpfc_queue {int q_mode; int queue_id; } ;
struct TYPE_4__ {int EQDregaddr; } ;
struct TYPE_5__ {TYPE_1__ if_type2; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct lpfc_hba {TYPE_3__ sli4_hba; } ;


 int FUNC_0 (int ,struct lpfc_register*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct lpfc_hba *VAR_2, struct lpfc_queue *VAR_3,
      u32 VAR_4)
{
 struct lpfc_register VAR_5;

 VAR_5.word0 = 0;
 FUNC_0(VAR_1, &VAR_5, VAR_3->queue_id);
 FUNC_0(VAR_0, &VAR_5, VAR_4);
 FUNC_1(VAR_5.word0, VAR_2->sli4_hba.u.if_type2.EQDregaddr);
 VAR_3->q_mode = VAR_4;
}
