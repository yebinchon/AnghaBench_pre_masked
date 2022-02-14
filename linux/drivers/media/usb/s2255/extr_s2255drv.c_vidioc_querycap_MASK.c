
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int bus_info; int card; int driver; } ;
struct s2255_vc {struct s2255_dev* dev; } ;
struct s2255_dev {int udev; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 struct s2255_vc* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
      struct v4l2_capability *VAR_2)
{
 struct s2255_vc *VAR_3 = FUNC_2(VAR_0);
 struct s2255_dev *VAR_4 = VAR_3->dev;

 FUNC_0(VAR_2->driver, "s2255", sizeof(VAR_2->driver));
 FUNC_0(VAR_2->card, "s2255", sizeof(VAR_2->card));
 FUNC_1(VAR_4->udev, VAR_2->bus_info, sizeof(VAR_2->bus_info));
 return 0;
}
