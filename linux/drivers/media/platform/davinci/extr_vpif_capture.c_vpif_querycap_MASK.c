
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vpif_capture_config {int card_name; } ;
struct v4l2_capability {int card; int bus_info; int driver; } ;
struct file {int dummy; } ;
struct TYPE_3__ {struct vpif_capture_config* platform_data; } ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,int ,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
    struct v4l2_capability *VAR_4)
{
 struct vpif_capture_config *VAR_5 = VAR_1->platform_data;

 FUNC_2(VAR_4->driver, VAR_0, sizeof(VAR_4->driver));
 FUNC_1(VAR_4->bus_info, sizeof(VAR_4->bus_info), "platform:%s",
   FUNC_0(VAR_1));
 FUNC_2(VAR_4->card, VAR_5->card_name, sizeof(VAR_4->card));

 return 0;
}
