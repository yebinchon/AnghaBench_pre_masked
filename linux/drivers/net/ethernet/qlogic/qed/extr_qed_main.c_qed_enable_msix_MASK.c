
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int num_vectors; int int_mode; } ;
struct TYPE_5__ {int num_vectors; int min_msix_cnt; } ;
struct qed_int_params {TYPE_2__ out; TYPE_3__* msix_table; TYPE_1__ in; } ;
struct qed_dev {int num_hwfns; int pdev; } ;
struct TYPE_7__ {int entry; } ;


 int FUNC_0 (struct qed_dev*,char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_3__*,int) ;
 int FUNC_3 (int ,TYPE_3__*,int,int) ;

__attribute__((used)) static int FUNC_4(struct qed_dev *VAR_1,
      struct qed_int_params *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_5 = VAR_2->in.num_vectors;

 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
  VAR_2->msix_table[VAR_3].entry = VAR_3;

 VAR_4 = FUNC_3(VAR_1->pdev, VAR_2->msix_table,
       VAR_2->in.min_msix_cnt, VAR_5);
 if (VAR_4 < VAR_5 && VAR_4 >= VAR_2->in.min_msix_cnt &&
     (VAR_4 % VAR_1->num_hwfns)) {
  FUNC_1(VAR_1->pdev);





  VAR_5 = (VAR_4 / VAR_1->num_hwfns) * VAR_1->num_hwfns;
  FUNC_0(VAR_1,
     "Trying to enable MSI-X with less vectors (%d out of %d)\n",
     VAR_5, VAR_2->in.num_vectors);
  VAR_4 = FUNC_2(VAR_1->pdev, VAR_2->msix_table,
        VAR_5);
  if (!VAR_4)
   VAR_4 = VAR_5;
 }

 if (VAR_4 > 0) {

  VAR_2->out.int_mode = VAR_0;
  VAR_2->out.num_vectors = VAR_4;
  VAR_4 = 0;
 } else {
  FUNC_0(VAR_1,
     "Failed to enable MSI-X [Requested %d vectors][rc %d]\n",
     VAR_5, VAR_4);
 }

 return VAR_4;
}
