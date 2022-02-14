
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int bus_info; int card; int driver; } ;
struct mcam_camera {char* bus_info; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 struct mcam_camera* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
  struct v4l2_capability *VAR_2)
{
 struct mcam_camera *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_2->driver, "marvell_ccic", sizeof(VAR_2->driver));
 FUNC_0(VAR_2->card, "marvell_ccic", sizeof(VAR_2->card));
 FUNC_0(VAR_2->bus_info, VAR_3->bus_info, sizeof(VAR_2->bus_info));
 return 0;
}
