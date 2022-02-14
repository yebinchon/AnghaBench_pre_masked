
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_hba {int hbalock; } ;
struct completion {int dummy; } ;
struct TYPE_4__ {int mbox_flag; int mbox_cmpl; struct completion* context3; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct completion*) ;
 int VAR_5 ;
 int FUNC_1 (struct lpfc_hba*,TYPE_1__*,int ) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct completion*,int ) ;

int
FUNC_6(struct lpfc_hba *VAR_7, LPFC_MBOXQ_t *VAR_8,
    uint32_t VAR_9)
{
 struct completion VAR_10;
 int VAR_11;
 unsigned long VAR_12;

 VAR_8->mbox_flag &= ~VAR_0;

 VAR_8->mbox_cmpl = VAR_6;


 FUNC_0(&VAR_10);
 VAR_8->context3 = &VAR_10;

 VAR_11 = FUNC_1(VAR_7, VAR_8, VAR_2);
 if (VAR_11 == VAR_1 || VAR_11 == VAR_3) {
  FUNC_5(&VAR_10,
         FUNC_2(VAR_9 * 1000));

  FUNC_3(&VAR_7->hbalock, VAR_12);
  VAR_8->context3 = ((void*)0);




  if (VAR_8->mbox_flag & VAR_0) {
   VAR_11 = VAR_3;
  } else {
   VAR_11 = VAR_4;
   VAR_8->mbox_cmpl = VAR_5;
  }
  FUNC_4(&VAR_7->hbalock, VAR_12);
 }
 return VAR_11;
}
