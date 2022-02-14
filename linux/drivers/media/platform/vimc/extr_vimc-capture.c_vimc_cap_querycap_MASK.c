
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int bus_info; int card; int driver; } ;
struct file {int dummy; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,int,char*,char*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
        struct v4l2_capability *VAR_4)
{
 FUNC_1(VAR_4->driver, VAR_1, sizeof(VAR_4->driver));
 FUNC_1(VAR_4->card, VAR_0, sizeof(VAR_4->card));
 FUNC_0(VAR_4->bus_info, sizeof(VAR_4->bus_info),
   "platform:%s", VAR_1);

 return 0;
}
