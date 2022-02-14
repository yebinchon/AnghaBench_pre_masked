
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct saa7134_dev {size_t board; scalar_t__ tuner_type; scalar_t__ has_rds; int pci; } ;
struct file {int dummy; } ;
struct TYPE_2__ {char* name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_0 (int ) ;
 TYPE_1__* VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*,int) ;
 struct saa7134_dev* FUNC_3 (struct file*) ;

int FUNC_4(struct file *VAR_13, void *VAR_14,
     struct v4l2_capability *VAR_15)
{
 struct saa7134_dev *VAR_16 = FUNC_3(VAR_13);

 FUNC_2(VAR_15->driver, "saa7134", sizeof(VAR_15->driver));
 FUNC_2(VAR_15->card, VAR_11[VAR_16->board].name,
  sizeof(VAR_15->card));
 FUNC_1(VAR_15->bus_info, "PCI:%s", FUNC_0(VAR_16->pci));
 VAR_15->capabilities = VAR_5 | VAR_6 |
       VAR_3 | VAR_9 |
       VAR_8 | VAR_2;
 if (VAR_16->tuner_type != VAR_0 && VAR_16->tuner_type != VAR_1)
  VAR_15->capabilities |= VAR_7;
 if (VAR_16->has_rds)
  VAR_15->capabilities |= VAR_4;
 if (VAR_12 <= 0)
  VAR_15->capabilities |= VAR_10;

 return 0;
}
