
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int bus_info; int card; int driver; } ;
struct tw686x_video_channel {struct tw686x_dev* dev; } ;
struct tw686x_dev {char* name; int pci_dev; } ;
struct file {int dummy; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,char*,int) ;
 struct tw686x_video_channel* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, void *VAR_1,
      struct v4l2_capability *VAR_2)
{
 struct tw686x_video_channel *VAR_3 = FUNC_3(VAR_0);
 struct tw686x_dev *VAR_4 = VAR_3->dev;

 FUNC_2(VAR_2->driver, "tw686x", sizeof(VAR_2->driver));
 FUNC_2(VAR_2->card, VAR_4->name, sizeof(VAR_2->card));
 FUNC_1(VAR_2->bus_info, sizeof(VAR_2->bus_info),
   "PCI:%s", FUNC_0(VAR_4->pci_dev));
 return 0;
}
