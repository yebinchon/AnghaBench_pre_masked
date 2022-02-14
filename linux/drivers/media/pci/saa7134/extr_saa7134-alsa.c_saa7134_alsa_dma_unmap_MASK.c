
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_dmasound {scalar_t__ sglen; int sglist; } ;
struct saa7134_dev {TYPE_1__* pci; struct saa7134_dmasound dmasound; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct saa7134_dev *VAR_1)
{
 struct saa7134_dmasound *VAR_2 = &VAR_1->dmasound;

 if (!VAR_2->sglen)
  return 0;

 FUNC_0(&VAR_1->pci->dev, VAR_2->sglist, VAR_2->sglen, VAR_0);
 VAR_2->sglen = 0;
 return 0;
}
