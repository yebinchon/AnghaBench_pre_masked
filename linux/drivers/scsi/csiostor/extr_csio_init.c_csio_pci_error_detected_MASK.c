
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct csio_hw {int lock; int sm; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct csio_hw*,int) ;
 int FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (struct csio_hw*,int ) ;
 int FUNC_3 (struct csio_hw*) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (struct pci_dev*) ;
 struct csio_hw* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static pci_ers_result_t
FUNC_9(struct pci_dev *VAR_4, pci_channel_state_t VAR_5)
{
 struct csio_hw *VAR_6 = FUNC_6(VAR_4);

 FUNC_1(VAR_6);
 FUNC_7(&VAR_6->lock);





 FUNC_4(&VAR_6->sm, VAR_0);
 FUNC_8(&VAR_6->lock);
 FUNC_3(VAR_6);
 FUNC_2(VAR_6, 0);
 FUNC_0(VAR_6, 1);
 FUNC_5(VAR_4);
 return VAR_5 == VAR_3 ?
  VAR_1 : VAR_2;
}
