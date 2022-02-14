
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_hwfn {int using_ll2; } ;
struct qed_dev {int num_hwfns; struct qed_hwfn* hwfns; } ;
struct TYPE_3__ {scalar_t__ personality; } ;
struct TYPE_4__ {TYPE_1__ hw_info; } ;


 int FUNC_0 (struct qed_dev*,char*) ;
 TYPE_2__* FUNC_1 (struct qed_dev*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct qed_dev*) ;
 int FUNC_3 (struct qed_dev*) ;

__attribute__((used)) static int FUNC_4(struct qed_dev *VAR_1)
{
 int VAR_2, VAR_3;


 if (FUNC_1(VAR_1)->hw_info.personality != VAR_0) {
  for (VAR_3 = 0; VAR_3 < VAR_1->num_hwfns; VAR_3++) {
   struct qed_hwfn *VAR_4 = &VAR_1->hwfns[VAR_3];

   VAR_4->using_ll2 = 1;
  }
 }

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_0(VAR_1, "Allocated qed resources\n");

 FUNC_3(VAR_1);

 return VAR_2;
}
