
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_3__ {int disabled; } ;
struct TYPE_4__ {int active; } ;
struct cx8802_dev {TYPE_1__ state; int core; int slock; TYPE_2__ mpegq; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct cx8802_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 struct cx8802_dev* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 scalar_t__ FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_0, pm_message_t VAR_1)
{
 struct cx8802_dev *VAR_2 = FUNC_6(VAR_0);
 unsigned long VAR_3;


 FUNC_10(&VAR_2->slock, VAR_3);
 if (!FUNC_3(&VAR_2->mpegq.active)) {
  FUNC_2(2, "suspend\n");
  FUNC_9("suspend mpeg\n");
  FUNC_0(VAR_2);
 }
 FUNC_11(&VAR_2->slock, VAR_3);


 FUNC_1(VAR_2->core);

 FUNC_7(VAR_0);
 if (FUNC_8(VAR_0,
    FUNC_4(VAR_0, VAR_1)) != 0) {
  FUNC_5(VAR_0);
  VAR_2->state.disabled = 1;
 }
 return 0;
}
