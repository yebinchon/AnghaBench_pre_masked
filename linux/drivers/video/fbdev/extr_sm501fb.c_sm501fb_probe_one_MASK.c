
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sm501fb_par {int head; int pseudo_palette; struct sm501fb_info* info; } ;
struct sm501fb_info {struct fb_info** fb; int dev; TYPE_1__* pdata; } ;
struct sm501_platdata_fbsub {int dummy; } ;
struct fb_info {int * pseudo_palette; struct sm501fb_par* par; } ;
typedef enum sm501_controller { ____Placeholder_sm501_controller } sm501_controller ;
struct TYPE_2__ {struct sm501_platdata_fbsub* fb_pnl; struct sm501_platdata_fbsub* fb_crt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned char*) ;
 struct fb_info* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct sm501fb_info *VAR_2,
        enum sm501_controller VAR_3)
{
 unsigned char *VAR_4 = (VAR_3 == VAR_1) ? "crt" : "panel";
 struct sm501_platdata_fbsub *VAR_5;
 struct sm501fb_par *VAR_6;
 struct fb_info *VAR_7;

 VAR_5 = (VAR_3 == VAR_1) ? VAR_2->pdata->fb_crt : VAR_2->pdata->fb_pnl;


 if (VAR_5 == ((void*)0)) {
  FUNC_0(VAR_2->dev, "no data for fb %s (disabled)\n", VAR_4);
  return 0;
 }

 VAR_7 = FUNC_1(sizeof(struct sm501fb_par), VAR_2->dev);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = VAR_7->par;
 VAR_6->info = VAR_2;
 VAR_6->head = VAR_3;
 VAR_7->pseudo_palette = &VAR_6->pseudo_palette;

 VAR_2->fb[VAR_3] = VAR_7;

 return 0;
}
