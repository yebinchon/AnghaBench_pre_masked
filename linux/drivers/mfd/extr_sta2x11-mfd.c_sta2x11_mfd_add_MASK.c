
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta2x11_mfd {int list; struct sta2x11_instance* instance; int * lock; } ;
struct sta2x11_instance {int dummy; } ;
struct pci_dev {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 struct sta2x11_mfd* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 struct sta2x11_instance* FUNC_5 (struct pci_dev*) ;
 struct sta2x11_mfd* FUNC_6 (struct pci_dev*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_4, gfp_t VAR_5)
{
 int VAR_6;
 struct sta2x11_mfd *VAR_7 = FUNC_6(VAR_4);
 struct sta2x11_instance *VAR_8;

 if (VAR_7)
  return -VAR_0;
 VAR_8 = FUNC_5(VAR_4);
 if (!VAR_8)
  return -VAR_1;
 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_5);
 if (!VAR_7)
  return -VAR_2;
 FUNC_1(&VAR_7->list);
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_7->lock); VAR_6++)
  FUNC_4(&VAR_7->lock[VAR_6]);
 VAR_7->instance = VAR_8;
 FUNC_3(&VAR_7->list, &VAR_3);
 return 0;
}
