
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef int prefix ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (char*,int ,int,int,void const*,unsigned int,int) ;
 int FUNC_2 (char*,int,char*,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct pci_dev *VAR_2,
      const void *VAR_3, unsigned int VAR_4)
{
 char VAR_5[32];

 FUNC_2(VAR_5, sizeof(VAR_5), "%s %s: ",
    VAR_1, FUNC_0(VAR_2));

 FUNC_1(VAR_5, VAR_0, 16, 1, VAR_3,
        VAR_4, 1);
}
