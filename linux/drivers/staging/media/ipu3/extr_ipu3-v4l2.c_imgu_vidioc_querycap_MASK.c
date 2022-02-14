
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int bus_info; int card; int driver; } ;
struct imgu_video_device {char* name; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct imgu_video_device* FUNC_0 (struct file*) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
    struct v4l2_capability *VAR_3)
{
 struct imgu_video_device *VAR_4 = FUNC_0(VAR_1);

 FUNC_2(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_2(VAR_3->card, VAR_0, sizeof(VAR_3->card));
 FUNC_1(VAR_3->bus_info, sizeof(VAR_3->bus_info), "PCI:%s", VAR_4->name);

 return 0;
}
