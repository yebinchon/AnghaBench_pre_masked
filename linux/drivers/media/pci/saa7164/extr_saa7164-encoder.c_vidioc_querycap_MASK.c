
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct saa7164_port {struct saa7164_dev* dev; } ;
struct saa7164_encoder_fh {struct saa7164_port* port; } ;
struct saa7164_dev {size_t board; int pci; int name; } ;
struct file {struct saa7164_encoder_fh* private_data; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, void *VAR_7,
 struct v4l2_capability *VAR_8)
{
 struct saa7164_encoder_fh *VAR_9 = VAR_6->private_data;
 struct saa7164_port *VAR_10 = VAR_9->port;
 struct saa7164_dev *VAR_11 = VAR_10->dev;

 FUNC_2(VAR_8->driver, VAR_11->name, sizeof(VAR_8->driver));
 FUNC_2(VAR_8->card, VAR_5[VAR_11->board].name,
  sizeof(VAR_8->card));
 FUNC_1(VAR_8->bus_info, "PCI:%s", FUNC_0(VAR_11->pci));
 VAR_8->capabilities = VAR_4 | VAR_1 |
       VAR_2 | VAR_3 |
       VAR_0;
 return 0;
}
