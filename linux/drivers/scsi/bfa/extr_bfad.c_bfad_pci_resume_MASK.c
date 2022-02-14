
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct bfad_s {int bfad_lock; int bfad_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfad_s*) ;
 int FUNC_1 (int ,int *,char*) ;
 struct bfad_s* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct pci_dev *VAR_2)
{
 unsigned long VAR_3;
 struct bfad_s *VAR_4 = FUNC_2(VAR_2);

 FUNC_1(VAR_1, &VAR_2->dev, "resume\n");


 FUNC_0(VAR_4);

 FUNC_3(&VAR_4->bfad_lock, VAR_3);
 VAR_4->bfad_flags &= ~VAR_0;
 FUNC_4(&VAR_4->bfad_lock, VAR_3);
}
