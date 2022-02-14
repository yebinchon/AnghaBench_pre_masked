
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_device {int dummy; } ;
struct pci_dev {int dummy; } ;
struct TYPE_9__ {size_t nr; size_t type; int v4l2_dev; TYPE_1__* pci; } ;
struct bttv {int shutdown; TYPE_5__ c; int bt848_mmio; int main; int radio_ctrl_handler; int ctrl_handler; } ;
struct TYPE_8__ {scalar_t__ has_dvb; } ;
struct TYPE_7__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct bttv*,char*) ;
 int FUNC_3 (struct bttv*) ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_4__* VAR_5 ;
 int FUNC_5 (struct bttv*) ;
 scalar_t__ VAR_6 ;
 int ** VAR_7 ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct bttv*) ;
 int FUNC_8 (struct bttv*) ;
 int FUNC_9 (int ,struct bttv*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct bttv*) ;
 int FUNC_12 (TYPE_1__*) ;
 struct v4l2_device* FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 int FUNC_16 (char*,size_t) ;
 int FUNC_17 (int ,int ) ;
 struct bttv* FUNC_18 (struct v4l2_device*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static void FUNC_21(struct pci_dev *VAR_8)
{
 struct v4l2_device *VAR_9 = FUNC_13(VAR_8);
 struct bttv *VAR_10 = FUNC_18(VAR_9);

 if (VAR_6)
  FUNC_16("%d: unloading\n", VAR_10->c.nr);

 if (VAR_5[VAR_10->c.type].has_dvb)
  FUNC_8(VAR_10);


 FUNC_0(~15, VAR_0);
 FUNC_6(0, VAR_2);
 FUNC_6(~0x0, VAR_3);
 FUNC_6(0x0, VAR_1);
 if (VAR_4)
  FUNC_2(VAR_10,"cleanup");


 VAR_10->shutdown=1;
 FUNC_3(VAR_10);
 FUNC_4(&VAR_10->c);


 FUNC_7(VAR_10);


 FUNC_5(VAR_10);


 FUNC_19(&VAR_10->ctrl_handler);
 FUNC_19(&VAR_10->radio_ctrl_handler);
 FUNC_1(VAR_10->c.pci,&VAR_10->main);


 FUNC_9(VAR_10->c.pci->irq,VAR_10);
 FUNC_10(VAR_10->bt848_mmio);
 FUNC_17(FUNC_15(VAR_10->c.pci,0),
      FUNC_14(VAR_10->c.pci,0));
 FUNC_12(VAR_10->c.pci);

 FUNC_20(&VAR_10->c.v4l2_dev);
 VAR_7[VAR_10->c.nr] = ((void*)0);
 FUNC_11(VAR_10);

 return;
}
