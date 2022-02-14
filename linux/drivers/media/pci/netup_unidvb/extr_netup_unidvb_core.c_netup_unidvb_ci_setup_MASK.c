
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct netup_unidvb_dev {scalar_t__ bmmio0; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct netup_unidvb_dev*,int,struct pci_dev*) ;
 int FUNC_1 (struct netup_unidvb_dev*,int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct netup_unidvb_dev *VAR_2,
     struct pci_dev *VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_0, VAR_2->bmmio0 + VAR_1);
 VAR_4 = FUNC_0(VAR_2, 0, VAR_3);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_2, 1, VAR_3);
 if (VAR_4)
  FUNC_1(VAR_2, 0);
 return VAR_4;
}
