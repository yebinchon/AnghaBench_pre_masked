
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_guest_device {int data_buffer; int notification_base; scalar_t__ notification_bitmap; int bm_tasklet; int datagram_tasklet; scalar_t__ exclusive_vectors; scalar_t__ iobase; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int ,int) ;
 int FUNC_3 (int *,int ,scalar_t__,int ) ;
 int FUNC_4 (int ,struct vmci_guest_device*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct pci_dev*) ;
 struct vmci_guest_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (int ) ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_14 () ;

__attribute__((used)) static void FUNC_15(struct pci_dev *VAR_10)
{
 struct vmci_guest_device *VAR_11 = FUNC_7(VAR_10);
 int VAR_12;

 FUNC_1(&VAR_10->dev, "Removing device\n");

 FUNC_0(&VAR_8);

 FUNC_14();

 VAR_12 = FUNC_13(VAR_5);
 if (VAR_12 < VAR_4)
  FUNC_2(&VAR_10->dev,
    "Failed to unsubscribe from event (type=%d) with subscriber (ID=0x%x): %d\n",
    VAR_3, VAR_5, VAR_12);

 FUNC_9(&VAR_7);
 VAR_6 = ((void*)0);
 VAR_9 = ((void*)0);
 FUNC_10(&VAR_7);

 FUNC_1(&VAR_10->dev, "Resetting vmci device\n");
 FUNC_5(VAR_2, VAR_11->iobase + VAR_1);






 if (VAR_11->exclusive_vectors)
  FUNC_4(FUNC_8(VAR_10, 1), VAR_11);
 FUNC_4(FUNC_8(VAR_10, 0), VAR_11);
 FUNC_6(VAR_10);

 FUNC_11(&VAR_11->datagram_tasklet);
 FUNC_11(&VAR_11->bm_tasklet);

 if (VAR_11->notification_bitmap) {





  FUNC_3(&VAR_10->dev, VAR_0,
      VAR_11->notification_bitmap,
      VAR_11->notification_base);
 }

 FUNC_12(VAR_11->data_buffer);


}
