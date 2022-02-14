
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int card; int bus_info; int driver; } ;
struct TYPE_4__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {TYPE_2__ channel; } ;
struct pvr2_hdw {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_3__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (struct pvr2_hdw*) ;
 char* FUNC_1 (struct pvr2_hdw*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, void *VAR_7, struct v4l2_capability *VAR_8)
{
 struct pvr2_v4l2_fh *VAR_9 = VAR_6->private_data;
 struct pvr2_hdw *VAR_10 = VAR_9->channel.mc_head->hdw;

 FUNC_2(VAR_8->driver, "pvrusb2", sizeof(VAR_8->driver));
 FUNC_2(VAR_8->bus_info, FUNC_0(VAR_10),
  sizeof(VAR_8->bus_info));
 FUNC_2(VAR_8->card, FUNC_1(VAR_10), sizeof(VAR_8->card));
 VAR_8->capabilities = VAR_5 | VAR_4 |
       VAR_0 | VAR_2 |
       VAR_3 | VAR_1;
 return 0;
}
