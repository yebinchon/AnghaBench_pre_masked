
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct genwqe_dev {unsigned long* vf_jobtimeout_msec; struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct genwqe_dev*) ;
 int FUNC_1 (struct genwqe_dev*,int ,int,unsigned int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static bool FUNC_4(struct genwqe_dev *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->pci_dev;
 unsigned int VAR_3;
 u32 VAR_4 = FUNC_0(VAR_1);
 u64 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6 <= 0)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_6; VAR_3++) {

  if (VAR_1->vf_jobtimeout_msec[VAR_3] == 0)
   continue;

  VAR_5 = FUNC_2(VAR_1->vf_jobtimeout_msec[VAR_3] *
     16000000000uL/(VAR_4 * 15)) - 10;

  FUNC_1(VAR_1, VAR_0,
      0xff00 | (VAR_5 & 0xff), VAR_3 + 1);
 }
 return 1;
}
