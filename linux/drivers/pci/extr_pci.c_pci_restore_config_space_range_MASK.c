
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int * saved_config_space; } ;


 int FUNC_0 (struct pci_dev*,int,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0,
        int VAR_1, int VAR_2, int VAR_3,
        bool VAR_4)
{
 int VAR_5;

 for (VAR_5 = VAR_2; VAR_5 >= VAR_1; VAR_5--)
  FUNC_0(VAR_0, 4 * VAR_5,
      VAR_0->saved_config_space[VAR_5],
      VAR_3, VAR_4);
}
