
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd6729_socket {int poll_timer; int socket; } ;
struct pci_dev {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct pd6729_socket*) ;
 int FUNC_2 (struct pd6729_socket*,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct pd6729_socket*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct pd6729_socket* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_4)
{
 int VAR_5;
 struct pd6729_socket *VAR_6 = FUNC_5(VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {

  FUNC_2(&VAR_6[VAR_5], VAR_0, 0);
  FUNC_2(&VAR_6[VAR_5], VAR_1, 0);

  FUNC_7(&VAR_6[VAR_5].socket);
 }

 if (VAR_3 == 1)
  FUNC_1(VAR_4->irq, VAR_6);
 else
  FUNC_0(&VAR_6->poll_timer);
 FUNC_6(VAR_4);
 FUNC_4(VAR_4);

 FUNC_3(VAR_6);
}
