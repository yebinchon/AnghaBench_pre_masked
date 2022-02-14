
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcistub_device {struct pci_dev* dev; } ;
struct pci_dev {int dummy; } ;
struct config_field {unsigned int offset; unsigned int size; unsigned int mask; int clean; int * release; int * reset; int * init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct config_field*) ;
 struct config_field* FUNC_1 (int,int ) ;
 struct pcistub_device* FUNC_2 (int,int,int,int) ;
 int FUNC_3 (struct pcistub_device*) ;
 int VAR_4 ;
 int FUNC_4 (struct pci_dev*,struct config_field*) ;

__attribute__((used)) static int FUNC_5(int VAR_5, int VAR_6, int VAR_7, int VAR_8,
      unsigned int VAR_9, unsigned int VAR_10,
      unsigned int VAR_11)
{
 int VAR_12 = 0;
 struct pcistub_device *VAR_13;
 struct pci_dev *VAR_14;
 struct config_field *VAR_15;

 if (VAR_9 > 0xfff || (VAR_10 < 4 && (VAR_11 >> (VAR_10 * 8))))
  return -VAR_0;

 VAR_13 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
 if (!VAR_13) {
  VAR_12 = -VAR_1;
  goto out;
 }
 VAR_14 = VAR_13->dev;

 VAR_15 = FUNC_1(sizeof(*VAR_15), VAR_3);
 if (!VAR_15) {
  VAR_12 = -VAR_2;
  goto out;
 }

 VAR_15->offset = VAR_9;
 VAR_15->size = VAR_10;
 VAR_15->mask = VAR_11;
 VAR_15->init = ((void*)0);
 VAR_15->reset = ((void*)0);
 VAR_15->release = ((void*)0);
 VAR_15->clean = VAR_4;

 VAR_12 = FUNC_4(VAR_14, VAR_15);
 if (VAR_12)
  FUNC_0(VAR_15);
out:
 if (VAR_13)
  FUNC_3(VAR_13);
 return VAR_12;
}
