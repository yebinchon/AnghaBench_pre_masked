
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct camss_video {TYPE_1__* camss; } ;
struct TYPE_2__ {int dev; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,char*,int) ;
 struct camss_video* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, void *VAR_1,
     struct v4l2_capability *VAR_2)
{
 struct camss_video *VAR_3 = FUNC_3(VAR_0);

 FUNC_2(VAR_2->driver, "qcom-camss", sizeof(VAR_2->driver));
 FUNC_2(VAR_2->card, "Qualcomm Camera Subsystem", sizeof(VAR_2->card));
 FUNC_1(VAR_2->bus_info, sizeof(VAR_2->bus_info), "platform:%s",
   FUNC_0(VAR_3->camss->dev));

 return 0;
}
