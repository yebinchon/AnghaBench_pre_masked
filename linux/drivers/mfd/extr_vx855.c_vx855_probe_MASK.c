
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,int ,int ,int *,int ,int *) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ,int*) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_6,
     const struct pci_device_id *VAR_7)
{
 int VAR_8;
 u16 VAR_9;

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8)
  return -VAR_0;

 FUNC_5(VAR_6, VAR_1, &VAR_9);
 if (!VAR_9) {
  FUNC_1(&VAR_6->dev,
   "BIOS did not assign PMIO base offset?!?\n");
  VAR_8 = -VAR_0;
  goto out;
 }



 VAR_9 &= 0xff80;



 VAR_5[0].start = VAR_9 + VAR_2;
 VAR_5[0].end = VAR_5[0].start + 3;
 VAR_5[1].start = VAR_9 + VAR_3;
 VAR_5[1].end = VAR_5[1].start + 3;

 VAR_8 = FUNC_2(&VAR_6->dev, -1, VAR_4, FUNC_0(VAR_4),
   ((void*)0), 0, ((void*)0));



 return -VAR_0;
out:
 FUNC_3(VAR_6);
 return VAR_8;
}
