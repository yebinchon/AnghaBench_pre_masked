
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hl_eqe_work {int eq_work; int eq_entry; struct hl_device* hdev; } ;
struct TYPE_3__ {int ctl; } ;
struct hl_eq_entry {TYPE_1__ hdr; } ;
struct hl_eq {size_t ci; scalar_t__ kernel_address; struct hl_device* hdev; } ;
struct hl_device {TYPE_2__* asic_funcs; int eq_wq; int dev; scalar_t__ disabled; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int (* update_eq_ci ) (struct hl_device*,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 () ;
 size_t FUNC_4 (size_t) ;
 int VAR_4 ;
 struct hl_eqe_work* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,struct hl_eq_entry*,int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct hl_device*,size_t) ;

irqreturn_t FUNC_10(int VAR_5, void *VAR_6)
{
 struct hl_eq *VAR_7 = VAR_6;
 struct hl_device *VAR_8 = VAR_7->hdev;
 struct hl_eq_entry *VAR_9;
 struct hl_eq_entry *VAR_10;
 struct hl_eqe_work *VAR_11;

 VAR_10 = (struct hl_eq_entry *) (uintptr_t) VAR_7->kernel_address;

 while (1) {
  bool VAR_12 =
   ((FUNC_6(VAR_10[VAR_7->ci].hdr.ctl) &
    VAR_0) >> VAR_1);

  if (!VAR_12)
   break;

  VAR_9 = &VAR_10[VAR_7->ci];





  FUNC_3();

  if (VAR_8->disabled) {
   FUNC_2(VAR_8->dev,
    "Device disabled but received IRQ %d for EQ\n",
     VAR_5);
   goto skip_irq;
  }

  VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_2);
  if (VAR_11) {
   FUNC_0(&VAR_11->eq_work, VAR_4);
   VAR_11->hdev = VAR_8;

   FUNC_7(&VAR_11->eq_entry, VAR_9,
     sizeof(*VAR_9));

   FUNC_8(VAR_8->eq_wq, &VAR_11->eq_work);
  }
skip_irq:

  VAR_9->hdr.ctl =
   FUNC_1(FUNC_6(VAR_9->hdr.ctl) &
       ~VAR_0);

  VAR_7->ci = FUNC_4(VAR_7->ci);

  VAR_8->asic_funcs->update_eq_ci(VAR_8, VAR_7->ci);
 }

 return VAR_3;
}
