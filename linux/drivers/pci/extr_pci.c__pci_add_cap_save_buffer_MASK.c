
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int cap_extended; unsigned int size; int cap_nr; } ;
struct pci_cap_saved_state {TYPE_1__ cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_cap_saved_state* FUNC_0 (int,int ) ;
 int FUNC_1 (struct pci_dev*,struct pci_cap_saved_state*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_2, u16 VAR_3,
        bool VAR_4, unsigned int VAR_5)
{
 int VAR_6;
 struct pci_cap_saved_state *VAR_7;

 if (VAR_4)
  VAR_6 = FUNC_3(VAR_2, VAR_3);
 else
  VAR_6 = FUNC_2(VAR_2, VAR_3);

 if (!VAR_6)
  return 0;

 VAR_7 = FUNC_0(sizeof(*VAR_7) + VAR_5, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->cap.cap_nr = VAR_3;
 VAR_7->cap.cap_extended = VAR_4;
 VAR_7->cap.size = VAR_5;
 FUNC_1(VAR_2, VAR_7);

 return 0;
}
