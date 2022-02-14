
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_4__ {int active; } ;
struct TYPE_3__ {int disabled; } ;
struct cx8802_dev {int slock; TYPE_2__ mpegq; int core; TYPE_1__ state; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx8802_dev*,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct cx8802_dev* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_1)
{
 struct cx8802_dev *VAR_2 = FUNC_5(VAR_1);
 unsigned long VAR_3;
 int VAR_4;

 if (VAR_2->state.disabled) {
  VAR_4 = FUNC_4(VAR_1);
  if (VAR_4) {
   FUNC_8("can't enable device\n");
   return VAR_4;
  }
  VAR_2->state.disabled = 0;
 }
 VAR_4 = FUNC_7(VAR_1, VAR_0);
 if (VAR_4) {
  FUNC_8("can't enable device\n");
  FUNC_3(VAR_1);
  VAR_2->state.disabled = 1;

  return VAR_4;
 }
 FUNC_6(VAR_1);


 FUNC_1(VAR_2->core);


 FUNC_10(&VAR_2->slock, VAR_3);
 if (!FUNC_2(&VAR_2->mpegq.active)) {
  FUNC_9("resume mpeg\n");
  FUNC_0(VAR_2, &VAR_2->mpegq);
 }
 FUNC_11(&VAR_2->slock, VAR_3);

 return 0;
}
