
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int bus_info; int card; int driver; } ;
struct TYPE_2__ {char* name; } ;
struct pcm20 {TYPE_1__ v4l2_dev; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int,char*,char*) ;
 int FUNC_1 (int ,char*,int) ;
 struct pcm20* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
    struct v4l2_capability *VAR_2)
{
 struct pcm20 *VAR_3 = FUNC_2(VAR_0);

 FUNC_1(VAR_2->driver, "Miro PCM20", sizeof(VAR_2->driver));
 FUNC_1(VAR_2->card, "Miro PCM20", sizeof(VAR_2->card));
 FUNC_0(VAR_2->bus_info, sizeof(VAR_2->bus_info), "ISA:%s", VAR_3->v4l2_dev.name);
 return 0;
}
