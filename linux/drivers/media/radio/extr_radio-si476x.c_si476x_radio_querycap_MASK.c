
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int bus_info; int card; int driver; } ;
struct TYPE_2__ {char* name; } ;
struct si476x_radio {TYPE_1__ v4l2dev; } ;
struct file {int dummy; } ;


 char* VAR_0 ;
 int FUNC_0 (int ,int,char*,char*) ;
 int FUNC_1 (int ,char*,int) ;
 struct si476x_radio* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
     struct v4l2_capability *VAR_3)
{
 struct si476x_radio *VAR_4 = FUNC_2(VAR_1);

 FUNC_1(VAR_3->driver, VAR_4->v4l2dev.name,
  sizeof(VAR_3->driver));
 FUNC_1(VAR_3->card, VAR_0, sizeof(VAR_3->card));
 FUNC_0(VAR_3->bus_info, sizeof(VAR_3->bus_info),
   "platform:%s", VAR_4->v4l2dev.name);
 return 0;
}
