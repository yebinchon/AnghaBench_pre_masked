
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {unsigned short start; unsigned short end; int flags; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (struct pci_dev*,int,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_3, int VAR_4, const char *VAR_5,
     struct resource *VAR_6, int VAR_7)
{
 unsigned int VAR_8;
 unsigned short VAR_9;

 if (VAR_7 == 0)
  return VAR_1;

 FUNC_1(VAR_3, VAR_4, &VAR_8);
 VAR_9 = 0;
 if (!(VAR_8 & (1 << 31)))
  FUNC_0(&VAR_3->dev, "Decode of the %s I/O range disabled\n",
    VAR_5);
 else
  VAR_9 = (unsigned short)VAR_8;

 if (VAR_9 == 0) {
  FUNC_0(&VAR_3->dev, "I/O space for %s uninitialized\n", VAR_5);
  return VAR_2;
 }

 VAR_6->start = VAR_9;
 VAR_6->end = VAR_9 + VAR_7 - 1;
 VAR_6->flags = VAR_0;

 return 0;
}
