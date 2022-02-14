
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pvr2_v4l2_dev {int config; int devbase; int * stream; TYPE_3__* v4lp; int minor_type; } ;
struct pvr2_hdw {int dummy; } ;
typedef int msg ;
typedef enum pvr2_config { ____Placeholder_pvr2_config } pvr2_config ;
struct TYPE_5__ {TYPE_1__* mc_head; } ;
struct TYPE_6__ {TYPE_2__ channel; } ;
struct TYPE_4__ {struct pvr2_hdw* hdw; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pvr2_hdw*,int ,int) ;
 unsigned int FUNC_3 (char*,int,char*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct pvr2_v4l2_dev *VAR_0)
{
 struct pvr2_hdw *VAR_1 = VAR_0->v4lp->channel.mc_head->hdw;
 enum pvr2_config VAR_2 = VAR_0->config;
 char VAR_3[80];
 unsigned int VAR_4;




 VAR_4 = FUNC_3(VAR_3, sizeof(VAR_3) - 1,
    "pvrusb2: unregistered device %s [%s]",
    FUNC_4(&VAR_0->devbase),
    FUNC_1(VAR_2));
 VAR_3[VAR_4] = 0;

 FUNC_2(VAR_1,VAR_0->minor_type,-1);


 VAR_0->v4lp = ((void*)0);
 VAR_0->stream = ((void*)0);



 FUNC_5(&VAR_0->devbase);

 FUNC_0("%s\n", VAR_3);

}
