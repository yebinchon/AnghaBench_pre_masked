
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* card; int ncci_head; } ;
typedef TYPE_1__ avmctrl_info ;
struct TYPE_8__ {int nr_controllers; int lock; TYPE_1__* ctrlinfo; } ;
typedef TYPE_2__ avmcard ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int,int,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

avmcard *FUNC_5(int VAR_1)
{
 avmcard *VAR_2;
 avmctrl_info *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_1, sizeof(*VAR_3), VAR_0);
 if (!VAR_3) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 VAR_2->ctrlinfo = VAR_3;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_0(&VAR_3[VAR_4].ncci_head);
  VAR_3[VAR_4].card = VAR_2;
 }
 FUNC_4(&VAR_2->lock);
 VAR_2->nr_controllers = VAR_1;

 return VAR_2;
}
