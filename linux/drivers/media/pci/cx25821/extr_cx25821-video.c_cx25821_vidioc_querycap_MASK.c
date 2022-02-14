
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct cx25821_dev {size_t board; int pci; } ;
struct cx25821_channel {struct cx25821_dev* dev; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*,int) ;
 struct cx25821_channel* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_6, void *VAR_7,
       struct v4l2_capability *VAR_8)
{
 struct cx25821_channel *VAR_9 = FUNC_3(VAR_6);
 struct cx25821_dev *VAR_10 = VAR_9->dev;

 FUNC_2(VAR_8->driver, "cx25821", sizeof(VAR_8->driver));
 FUNC_2(VAR_8->card, VAR_5[VAR_10->board].name, sizeof(VAR_8->card));
 FUNC_1(VAR_8->bus_info, "PCIe:%s", FUNC_0(VAR_10->pci));
 VAR_8->capabilities = VAR_3 | VAR_4 |
       VAR_1 | VAR_2 |
       VAR_0;
 return 0;
}
