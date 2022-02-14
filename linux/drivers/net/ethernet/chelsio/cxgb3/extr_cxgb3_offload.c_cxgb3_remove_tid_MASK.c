
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tid_info {unsigned int ntids; int tids_in_use; TYPE_1__* tid_tab; } ;
struct t3cdev {scalar_t__ type; } ;
struct sk_buff {int dummy; } ;
struct cpl_tid_release {int dummy; } ;
struct TYPE_4__ {struct tid_info tid_maps; } ;
struct TYPE_3__ {int * ctx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_1 (struct t3cdev*) ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,void*,int *) ;
 int FUNC_5 (struct t3cdev*,struct sk_buff*) ;
 int FUNC_6 (struct t3cdev*,unsigned int) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,unsigned int) ;

void FUNC_9(struct t3cdev *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 struct tid_info *VAR_5 = &(FUNC_1(VAR_2))->tid_maps;

 FUNC_0(VAR_4 >= VAR_5->ntids);
 if (VAR_2->type == VAR_1)
  (void)FUNC_4(&VAR_5->tid_tab[VAR_4].ctx, VAR_3, ((void*)0));
 else {
  struct sk_buff *VAR_6;

  VAR_6 = FUNC_2(sizeof(struct cpl_tid_release), VAR_0);
  if (FUNC_7(VAR_6)) {
   FUNC_8(VAR_6, VAR_4);
   FUNC_5(VAR_2, VAR_6);
   VAR_5->tid_tab[VAR_4].ctx = ((void*)0);
  } else
   FUNC_6(VAR_2, VAR_4);
 }
 FUNC_3(&VAR_5->tids_in_use);
}
