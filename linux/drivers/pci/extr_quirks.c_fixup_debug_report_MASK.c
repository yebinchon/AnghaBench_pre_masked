
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef int ktime_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dev*,char*,void (*) (struct pci_dev*),unsigned long long) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_1, ktime_t VAR_2,
          void (*VAR_3)(struct pci_dev *VAR_4))
{
 ktime_t VAR_5, VAR_6;
 unsigned long long VAR_7;

 VAR_6 = FUNC_0();
 VAR_5 = FUNC_1(VAR_6, VAR_2);
 VAR_7 = (unsigned long long) FUNC_2(VAR_5) >> 10;
 if (VAR_0 || VAR_7 > 10000)
  FUNC_3(VAR_1, "%pS took %lld usecs\n", VAR_3, VAR_7);
}
