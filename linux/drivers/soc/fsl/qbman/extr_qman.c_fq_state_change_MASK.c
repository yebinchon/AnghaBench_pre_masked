
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fqs; } ;
union qm_mr_entry {TYPE_1__ fq; } ;
typedef int u8 ;
struct qman_portal {int dummy; } ;
struct qman_fq {int state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_1 (struct qman_fq*,int ) ;
 int FUNC_2 (struct qman_fq*,int ) ;
 int FUNC_3 (struct qman_fq*,int ) ;
 int FUNC_4 (struct qman_fq*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static inline void FUNC_5(struct qman_portal *VAR_8, struct qman_fq *VAR_9,
       const union qm_mr_entry *VAR_10, u8 VAR_11)
{
 switch (VAR_11) {
 case 129:
  FUNC_0(FUNC_3(VAR_9, VAR_2));
  FUNC_1(VAR_9, VAR_2);
  break;
 case 128:
  FUNC_0(VAR_9->state == VAR_5 ||
       VAR_9->state == VAR_7);
  FUNC_0(FUNC_3(VAR_9, VAR_0));
  FUNC_1(VAR_9, VAR_0);
  if (VAR_10->fq.fqs & VAR_3)
   FUNC_4(VAR_9, VAR_1);
  if (VAR_10->fq.fqs & VAR_4)
   FUNC_4(VAR_9, VAR_2);
  VAR_9->state = VAR_6;
  break;
 case 130:
  FUNC_0(VAR_9->state == VAR_7);
  FUNC_0(FUNC_2(VAR_9, VAR_0));
  VAR_9->state = VAR_5;
 }
}
