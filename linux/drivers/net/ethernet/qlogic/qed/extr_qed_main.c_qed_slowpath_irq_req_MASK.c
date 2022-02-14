
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct qed_hwfn {int my_id; int abs_pf_id; struct qed_dev* sp_dpc; int name; struct qed_dev* cdev; } ;
struct TYPE_8__ {scalar_t__ int_mode; } ;
struct TYPE_9__ {TYPE_3__ out; TYPE_1__* msix_table; } ;
struct qed_dev {int name; TYPE_5__* pdev; TYPE_4__ int_params; } ;
struct TYPE_10__ {int irq; int devfn; TYPE_2__* bus; } ;
struct TYPE_7__ {int number; } ;
struct TYPE_6__ {int vector; } ;


 int FUNC_0 (struct qed_dev*,char*,int) ;
 int FUNC_1 (struct qed_hwfn*,int,char*,char*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,unsigned long,int ,struct qed_dev*) ;
 int FUNC_5 (int ,int ,char*,int,int,int,...) ;

int FUNC_6(struct qed_hwfn *VAR_8)
{
 struct qed_dev *VAR_9 = VAR_8->cdev;
 u32 VAR_10;
 int VAR_11 = 0;
 u8 VAR_12;

 VAR_10 = VAR_9->int_params.out.int_mode;
 if (VAR_10 == VAR_4) {
  VAR_12 = VAR_8->my_id;
  FUNC_5(VAR_8->name, VAR_1, "sp-%d-%02x:%02x.%02x",
    VAR_12, VAR_9->pdev->bus->number,
    FUNC_3(VAR_9->pdev->devfn), VAR_8->abs_pf_id);
  VAR_11 = FUNC_4(VAR_9->int_params.msix_table[VAR_12].vector,
     VAR_6, 0, VAR_8->name, VAR_8->sp_dpc);
 } else {
  unsigned long VAR_13 = 0;

  FUNC_5(VAR_9->name, VAR_1, "%02x:%02x.%02x",
    VAR_9->pdev->bus->number, FUNC_3(VAR_9->pdev->devfn),
    FUNC_2(VAR_9->pdev->devfn));

  if (VAR_9->int_params.out.int_mode == VAR_3)
   VAR_13 |= VAR_0;

  VAR_11 = FUNC_4(VAR_9->pdev->irq, VAR_7,
     VAR_13, VAR_9->name, VAR_9);
 }

 if (VAR_11)
  FUNC_0(VAR_9, "request_irq failed, rc = %d\n", VAR_11);
 else
  FUNC_1(VAR_8, (VAR_2 | VAR_5),
      "Requested slowpath %s\n",
      (VAR_10 == VAR_4) ? "MSI-X" : "IRQ");

 return VAR_11;
}
