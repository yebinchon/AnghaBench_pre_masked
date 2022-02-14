
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int bus_info; int card; int driver; } ;
struct tw5864_input {int nr; TYPE_1__* root; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int pci; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,char*,int) ;
 struct tw5864_input* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_0, void *VAR_1,
      struct v4l2_capability *VAR_2)
{
 struct tw5864_input *VAR_3 = FUNC_4(VAR_0);

 FUNC_3(VAR_2->driver, "tw5864", sizeof(VAR_2->driver));
 FUNC_1(VAR_2->card, sizeof(VAR_2->card), "TW5864 Encoder %d",
   VAR_3->nr);
 FUNC_2(VAR_2->bus_info, "PCI:%s", FUNC_0(VAR_3->root->pci));
 return 0;
}
