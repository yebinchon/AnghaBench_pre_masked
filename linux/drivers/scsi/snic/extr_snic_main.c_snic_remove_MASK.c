
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snic {int stop_link_events; int in_remove; int shost; int vdev; int list; int snic_lock; } ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct TYPE_4__ {int snic_list_lock; int event_q; } ;
struct TYPE_3__ {int number; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pci_dev*) ;
 struct snic* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct snic*) ;
 int FUNC_11 (struct snic*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct snic*) ;
 int FUNC_14 (struct snic*) ;
 int FUNC_15 (struct snic*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_16 (struct snic*) ;
 int FUNC_17 (struct snic*,int ) ;
 int FUNC_18 (struct snic*) ;
 int FUNC_19 (struct snic*) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;

__attribute__((used)) static void
FUNC_25(struct pci_dev *VAR_2)
{
 struct snic *VAR_3 = FUNC_6(VAR_2);
 unsigned long VAR_4;

 if (!VAR_3) {
  FUNC_2("sNIC dev: bus %d slot %d fn %d snic inst is null.\n",
     VAR_2->bus->number, FUNC_1(VAR_2->devfn),
     FUNC_0(VAR_2->devfn));

  return;
 }







 FUNC_17(VAR_3, VAR_0);
 FUNC_20(&VAR_3->snic_lock, VAR_4);
 VAR_3->stop_link_events = 1;
 FUNC_21(&VAR_3->snic_lock, VAR_4);

 FUNC_3(VAR_1->event_q);
 FUNC_13(VAR_3);

 FUNC_20(&VAR_3->snic_lock, VAR_4);
 VAR_3->in_remove = 1;
 FUNC_21(&VAR_3->snic_lock, VAR_4);






 FUNC_10(VAR_3);

 FUNC_20(&VAR_1->snic_list_lock, VAR_4);
 FUNC_4(&VAR_3->list);
 FUNC_21(&VAR_1->snic_list_lock, VAR_4);

 FUNC_19(VAR_3);



 FUNC_12(VAR_3->shost);

 FUNC_23(VAR_3->vdev);
 FUNC_14(VAR_3);
 FUNC_15(VAR_3);
 FUNC_11(VAR_3);
 FUNC_22(VAR_3->vdev);
 FUNC_24(VAR_3->vdev);
 FUNC_16(VAR_3);
 FUNC_7(VAR_2);
 FUNC_5(VAR_2);
 FUNC_8(VAR_2, ((void*)0));


 FUNC_9(VAR_3->shost);
}
