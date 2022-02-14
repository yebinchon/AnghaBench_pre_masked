
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {int mutex; } ;
struct qed_hwfn {size_t my_id; int b_active; TYPE_1__ dmae_info; struct qed_dev* cdev; } ;
struct qed_dev {int cache_shift; struct qed_hwfn* hwfns; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct qed_dev *VAR_1)
{
 u8 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct qed_hwfn *VAR_3 = &VAR_1->hwfns[VAR_2];

  VAR_3->cdev = VAR_1;
  VAR_3->my_id = VAR_2;
  VAR_3->b_active = 0;

  FUNC_0(&VAR_3->dmae_info.mutex);
 }


 VAR_1->hwfns[0].b_active = 1;


 VAR_1->cache_shift = 7;
}
