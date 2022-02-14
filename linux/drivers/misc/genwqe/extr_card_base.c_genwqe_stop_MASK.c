
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_dev {int pci_dev; } ;


 int FUNC_0 (struct genwqe_dev*) ;
 int FUNC_1 (struct genwqe_dev*) ;
 int FUNC_2 (struct genwqe_dev*) ;
 scalar_t__ FUNC_3 (struct genwqe_dev*) ;
 int FUNC_4 (struct genwqe_dev*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct genwqe_dev *VAR_0)
{
 FUNC_2(VAR_0);
 FUNC_0(VAR_0);
 FUNC_4(VAR_0);

 if (FUNC_3(VAR_0)) {
  FUNC_5(VAR_0->pci_dev);
  FUNC_1(VAR_0);
 }

 return 0;
}
