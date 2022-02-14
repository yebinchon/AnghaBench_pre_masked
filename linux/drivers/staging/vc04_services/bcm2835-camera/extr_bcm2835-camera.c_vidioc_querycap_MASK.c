
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_capability {scalar_t__ bus_info; scalar_t__ card; scalar_t__ driver; } ;
struct file {int dummy; } ;
struct TYPE_2__ {char* name; } ;
struct bm2835_mmal_dev {TYPE_1__ v4l2_dev; int instance; } ;


 int FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,int*,int*) ;
 struct bm2835_mmal_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, void *VAR_1,
      struct v4l2_capability *VAR_2)
{
 struct bm2835_mmal_dev *VAR_3 = FUNC_3(VAR_0);
 u32 VAR_4;
 u32 VAR_5;

 FUNC_2(VAR_3->instance, &VAR_4, &VAR_5);

 FUNC_1((char *)VAR_2->driver, "bm2835 mmal");
 FUNC_0((char *)VAR_2->card, sizeof(VAR_2->card), "mmal service %d.%d",
   VAR_4, VAR_5);

 FUNC_0((char *)VAR_2->bus_info, sizeof(VAR_2->bus_info),
   "platform:%s", VAR_3->v4l2_dev.name);
 return 0;
}
