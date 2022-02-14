
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct gasket_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gasket_dev*,int) ;
 int FUNC_1 (struct gasket_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_2,
       struct gasket_dev *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_6 = FUNC_0(VAR_3, VAR_4);
  if (VAR_6) {
   VAR_5 = VAR_4;
   goto fail;
  }
 }

 return 0;

fail:
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  FUNC_1(VAR_3, VAR_4);

 return -VAR_0;
}
