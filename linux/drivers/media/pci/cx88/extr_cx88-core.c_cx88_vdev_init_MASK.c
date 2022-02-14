
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int name; int * lock; int release; int * dev_parent; int * v4l2_dev; } ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {char* name; } ;
struct cx88_core {char* name; TYPE_1__ board; int lock; int v4l2_dev; } ;


 int FUNC_0 (int ,int,char*,char*,char const*,char*) ;
 int VAR_0 ;

void FUNC_1(struct cx88_core *VAR_1,
      struct pci_dev *VAR_2,
      struct video_device *VAR_3,
      const struct video_device *VAR_4,
      const char *VAR_5)
{
 *VAR_3 = *VAR_4;







 VAR_3->v4l2_dev = &VAR_1->v4l2_dev;
 VAR_3->dev_parent = &VAR_2->dev;
 VAR_3->release = VAR_0;
 VAR_3->lock = &VAR_1->lock;
 FUNC_0(VAR_3->name, sizeof(VAR_3->name), "%s %s (%s)",
   VAR_1->name, VAR_5, VAR_1->board.name);
}
