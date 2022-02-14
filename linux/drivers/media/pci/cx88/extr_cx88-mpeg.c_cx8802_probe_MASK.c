
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int mpeg; } ;
struct cx88_core {struct cx8802_dev* dvbdev; TYPE_1__ board; } ;
struct cx8802_dev {int devlist; int drvlist; struct cx88_core* core; struct pci_dev* pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (struct cx8802_dev*) ;
 int VAR_5 ;
 struct cx88_core* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct cx88_core*,struct pci_dev*) ;
 int FUNC_4 (struct cx8802_dev*) ;
 struct cx8802_dev* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct cx8802_dev*) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_6,
   const struct pci_device_id *VAR_7)
{
 struct cx8802_dev *VAR_8;
 struct cx88_core *VAR_9;
 int VAR_10;


 VAR_9 = FUNC_2(VAR_6);
 if (!VAR_9)
  return -VAR_0;

 FUNC_9("cx2388x 8802 Driver Manager\n");

 VAR_10 = -VAR_1;
 if (!VAR_9->board.mpeg)
  goto fail_core;

 VAR_10 = -VAR_2;
 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  goto fail_core;
 VAR_8->pci = VAR_6;
 VAR_8->core = VAR_9;


 VAR_9->dvbdev = VAR_8;

 VAR_10 = FUNC_1(VAR_8);
 if (VAR_10 != 0)
  goto fail_dev;

 FUNC_0(&VAR_8->drvlist);
 FUNC_7(&VAR_5);
 FUNC_6(&VAR_8->devlist, &VAR_4);
 FUNC_8(&VAR_5);


 FUNC_10(VAR_8);
 return 0;

 fail_dev:
 FUNC_4(VAR_8);
 fail_core:
 VAR_9->dvbdev = ((void*)0);
 FUNC_3(VAR_9, VAR_6);
 return VAR_10;
}
