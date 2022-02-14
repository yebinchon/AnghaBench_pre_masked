
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yenta_socket {int base; int poll_timer; scalar_t__ cb_irq; int socket; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct yenta_socket*,int ,int) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct yenta_socket*,int ,int ) ;
 int FUNC_4 (scalar_t__,struct yenta_socket*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct yenta_socket*) ;
 int FUNC_7 (struct pci_dev*) ;
 struct yenta_socket* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct yenta_socket*) ;

__attribute__((used)) static void FUNC_13(struct pci_dev *VAR_3)
{
 struct yenta_socket *VAR_4 = FUNC_8(VAR_3);


 FUNC_2(&VAR_3->dev, &VAR_2);


 FUNC_11(&VAR_4->socket);


 FUNC_0(VAR_4, VAR_0, 0x0);
 FUNC_3(VAR_4, VAR_1, 0);

 if (VAR_4->cb_irq)
  FUNC_4(VAR_4->cb_irq, VAR_4);
 else
  FUNC_1(&VAR_4->poll_timer);

 FUNC_5(VAR_4->base);
 FUNC_12(VAR_4);

 FUNC_9(VAR_3);
 FUNC_7(VAR_3);
 FUNC_10(VAR_3, ((void*)0));
 FUNC_6(VAR_4);
}
