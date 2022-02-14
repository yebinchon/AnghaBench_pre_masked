
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int bus_info; int card; int driver; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
       struct v4l2_capability *VAR_2)
{
 FUNC_0(VAR_2->driver, "imx-media-csc-scaler", sizeof(VAR_2->driver));
 FUNC_0(VAR_2->card, "imx-media-csc-scaler", sizeof(VAR_2->card));
 FUNC_0(VAR_2->bus_info, "platform:imx-media-csc-scaler",
  sizeof(VAR_2->bus_info));

 return 0;
}
