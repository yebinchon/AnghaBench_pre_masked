
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int * data; } ;
struct pci_cap_saved_state {TYPE_1__ cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pci_cap_saved_state* FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_8)
{
 int VAR_9 = 0;
 struct pci_cap_saved_state *VAR_10;
 u16 *VAR_11;

 VAR_10 = FUNC_0(VAR_8, VAR_0);
 if (!VAR_10)
  return;

 VAR_11 = (u16 *)&VAR_10->cap.data[0];
 FUNC_1(VAR_8, VAR_1, VAR_11[VAR_9++]);
 FUNC_1(VAR_8, VAR_3, VAR_11[VAR_9++]);
 FUNC_1(VAR_8, VAR_6, VAR_11[VAR_9++]);
 FUNC_1(VAR_8, VAR_5, VAR_11[VAR_9++]);
 FUNC_1(VAR_8, VAR_2, VAR_11[VAR_9++]);
 FUNC_1(VAR_8, VAR_4, VAR_11[VAR_9++]);
 FUNC_1(VAR_8, VAR_7, VAR_11[VAR_9++]);
}
