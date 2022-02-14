
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_capability {int bus_info; int card; int driver; } ;
struct s5p_mfc_dev {TYPE_1__* plat_dev; TYPE_2__* vfd_enc; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,int ,int) ;
 struct s5p_mfc_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
      struct v4l2_capability *VAR_3)
{
 struct s5p_mfc_dev *VAR_4 = FUNC_3(VAR_1);

 FUNC_2(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_2(VAR_3->card, VAR_4->vfd_enc->name, sizeof(VAR_3->card));
 FUNC_1(VAR_3->bus_info, sizeof(VAR_3->bus_info), "platform:%s",
   FUNC_0(&VAR_4->plat_dev->dev));
 return 0;
}
