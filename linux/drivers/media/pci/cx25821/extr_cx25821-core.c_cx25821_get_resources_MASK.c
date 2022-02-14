
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx25821_dev {int pci; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ,unsigned long long) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct cx25821_dev *VAR_1)
{
 if (FUNC_3(FUNC_1(VAR_1->pci, 0),
    FUNC_0(VAR_1->pci, 0), VAR_1->name))
  return 0;

 FUNC_2("%s: can't get MMIO memory @ 0x%llx\n",
  VAR_1->name, (unsigned long long)FUNC_1(VAR_1->pci, 0));

 return -VAR_0;
}
