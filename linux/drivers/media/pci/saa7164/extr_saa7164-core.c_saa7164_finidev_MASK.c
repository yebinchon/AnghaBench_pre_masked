
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct saa7164_dev {size_t board; int msi; int v4l2_dev; int devlist; int * i2c_bus; TYPE_1__* ports; scalar_t__ firmwareloaded; int * kthread; } ;
struct pci_dev {int irq; } ;
struct TYPE_7__ {scalar_t__ porta; scalar_t__ portb; scalar_t__ portc; scalar_t__ portd; scalar_t__ porte; scalar_t__ portf; } ;
struct TYPE_6__ {int poll_interval; int read_interval; int irq_svc_interval; int svc_interval; int irq_interval; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,struct saa7164_dev*) ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct saa7164_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 struct saa7164_dev* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct saa7164_dev*,int) ;
 TYPE_5__* VAR_12 ;
 int FUNC_10 (struct saa7164_dev*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct saa7164_dev*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void FUNC_18(struct pci_dev *VAR_13)
{
 struct saa7164_dev *VAR_14 = FUNC_8(VAR_13);

 if (VAR_14->board != VAR_0) {
  if (VAR_11 && VAR_14->kthread) {
   FUNC_2(VAR_14->kthread);
   VAR_14->kthread = ((void*)0);
  }
  if (VAR_14->firmwareloaded)
   FUNC_9(VAR_14, 0x00);
 }

 FUNC_13(&VAR_14->ports[VAR_4],
  &VAR_14->ports[VAR_4].irq_interval);
 FUNC_13(&VAR_14->ports[VAR_4],
  &VAR_14->ports[VAR_4].svc_interval);
 FUNC_13(&VAR_14->ports[VAR_4],
  &VAR_14->ports[VAR_4].irq_svc_interval);
 FUNC_13(&VAR_14->ports[VAR_4],
  &VAR_14->ports[VAR_4].read_interval);
 FUNC_13(&VAR_14->ports[VAR_4],
  &VAR_14->ports[VAR_4].poll_interval);
 FUNC_13(&VAR_14->ports[VAR_8],
  &VAR_14->ports[VAR_8].read_interval);
 FUNC_13(&VAR_14->ports[VAR_9],
  &VAR_14->ports[VAR_9].poll_interval);

 FUNC_15(VAR_14);

 if (VAR_12[VAR_14->board].porta == VAR_1)
  FUNC_11(&VAR_14->ports[VAR_6]);

 if (VAR_12[VAR_14->board].portb == VAR_1)
  FUNC_11(&VAR_14->ports[VAR_7]);

 if (VAR_12[VAR_14->board].portc == VAR_2)
  FUNC_12(&VAR_14->ports[VAR_4]);

 if (VAR_12[VAR_14->board].portd == VAR_2)
  FUNC_12(&VAR_14->ports[VAR_5]);

 if (VAR_12[VAR_14->board].porte == VAR_3)
  FUNC_16(&VAR_14->ports[VAR_8]);

 if (VAR_12[VAR_14->board].portf == VAR_3)
  FUNC_16(&VAR_14->ports[VAR_9]);

 FUNC_14(&VAR_14->i2c_bus[0]);
 FUNC_14(&VAR_14->i2c_bus[1]);
 FUNC_14(&VAR_14->i2c_bus[2]);


 FUNC_0(VAR_13->irq, VAR_14);

 if (VAR_14->msi) {
  FUNC_7(VAR_13);
  VAR_14->msi = 0;
 }

 FUNC_6(VAR_13);

 FUNC_4(&VAR_10);
 FUNC_3(&VAR_14->devlist);
 FUNC_5(&VAR_10);

 FUNC_10(VAR_14);
 FUNC_17(&VAR_14->v4l2_dev);
 FUNC_1(VAR_14);
}
