
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct cx23885_dev {size_t board; scalar_t__ tuner_type; int pci; } ;
struct TYPE_2__ {char* name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*,int) ;
 struct cx23885_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_9, void *VAR_10,
 struct v4l2_capability *VAR_11)
{
 struct cx23885_dev *VAR_12 = FUNC_3(VAR_9);

 FUNC_2(VAR_11->driver, "cx23885", sizeof(VAR_11->driver));
 FUNC_2(VAR_11->card, VAR_8[VAR_12->board].name,
  sizeof(VAR_11->card));
 FUNC_1(VAR_11->bus_info, "PCIe:%s", FUNC_0(VAR_12->pci));
 VAR_11->capabilities = VAR_3 | VAR_4 |
       VAR_1 | VAR_6 |
       VAR_7 | VAR_6 |
       VAR_2;
 if (VAR_12->tuner_type != VAR_0)
  VAR_11->capabilities |= VAR_5;
 return 0;
}
