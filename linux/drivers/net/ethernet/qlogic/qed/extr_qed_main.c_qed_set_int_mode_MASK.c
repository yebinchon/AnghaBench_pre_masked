
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int int_mode; } ;
struct TYPE_3__ {int int_mode; int num_vectors; } ;
struct qed_int_params {TYPE_2__ out; TYPE_1__ in; int msix_table; } ;
struct qed_dev {int num_hwfns; int int_coalescing_mode; int pdev; struct qed_int_params int_params; } ;
struct msix_entry {int dummy; } ;


 int FUNC_0 (struct qed_dev*,char*,char*) ;
 int FUNC_1 (struct qed_dev*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct qed_dev*,struct qed_int_params*) ;

__attribute__((used)) static int FUNC_6(struct qed_dev *VAR_4, bool VAR_5)
{
 struct qed_int_params *VAR_6 = &VAR_4->int_params;
 struct msix_entry *VAR_7;
 int VAR_8 = 0, VAR_9;

 switch (VAR_6->in.int_mode) {
 case 128:

  VAR_9 = VAR_6->in.num_vectors;
  VAR_6->msix_table = FUNC_2(VAR_9, sizeof(*VAR_7), VAR_2);
  if (!VAR_6->msix_table) {
   VAR_8 = -VAR_1;
   goto out;
  }


  VAR_8 = FUNC_5(VAR_4, VAR_6);
  if (!VAR_8)
   goto out;

  FUNC_1(VAR_4, "Failed to enable MSI-X\n");
  FUNC_3(VAR_6->msix_table);
  if (VAR_5)
   goto out;


 case 129:
  if (VAR_4->num_hwfns == 1) {
   VAR_8 = FUNC_4(VAR_4->pdev);
   if (!VAR_8) {
    VAR_6->out.int_mode = 129;
    goto out;
   }

   FUNC_1(VAR_4, "Failed to enable MSI\n");
   if (VAR_5)
    goto out;
  }


 case 130:
   VAR_6->out.int_mode = 130;
   VAR_8 = 0;
   goto out;
 default:
  FUNC_1(VAR_4, "Unknown int_mode value %d\n",
     VAR_6->in.int_mode);
  VAR_8 = -VAR_0;
 }

out:
 if (!VAR_8)
  FUNC_0(VAR_4, "Using %s interrupts\n",
   VAR_6->out.int_mode == 130 ?
   "INTa" : VAR_6->out.int_mode == 129 ?
   "MSI" : "MSIX");
 VAR_4->int_coalescing_mode = VAR_3;

 return VAR_8;
}
