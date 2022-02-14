
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int bus_info; int card; int driver; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
      struct v4l2_capability *VAR_3)
{
 FUNC_0(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_0(VAR_3->card, VAR_0, sizeof(VAR_3->card));
 FUNC_0(VAR_3->bus_info, VAR_0, sizeof(VAR_3->bus_info));
 return 0;
}
