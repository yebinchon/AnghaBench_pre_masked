
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_dev {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 struct qed_dev* FUNC_0 (int,int ) ;
 int FUNC_1 (struct qed_dev*) ;

__attribute__((used)) static struct qed_dev *FUNC_2(struct pci_dev *VAR_1)
{
 struct qed_dev *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return VAR_2;

 FUNC_1(VAR_2);

 return VAR_2;
}
