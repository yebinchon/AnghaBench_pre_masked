
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spear_pmx {int dev; TYPE_1__* machdata; } ;
struct spear_pingroup {int nmodemuxs; int name; struct spear_modemux* modemuxs; } ;
struct spear_modemux {int modes; int nmuxregs; int muxregs; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {int mode; scalar_t__ modes_supported; struct spear_pingroup** groups; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct spear_pmx*,int ,int ,int) ;
 struct spear_pmx* FUNC_2 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_1,
  unsigned VAR_2, unsigned VAR_3, bool VAR_4)
{
 struct spear_pmx *VAR_5 = FUNC_2(VAR_1);
 const struct spear_pingroup *VAR_6;
 const struct spear_modemux *VAR_7;
 int VAR_8;
 bool VAR_9 = 0;

 VAR_6 = VAR_5->machdata->groups[VAR_3];

 for (VAR_8 = 0; VAR_8 < VAR_6->nmodemuxs; VAR_8++) {
  VAR_7 = &VAR_6->modemuxs[VAR_8];


  if (VAR_5->machdata->modes_supported) {
   if (!(VAR_5->machdata->mode & VAR_7->modes))
    continue;
  }

  VAR_9 = 1;
  FUNC_1(VAR_5, VAR_7->muxregs, VAR_7->nmuxregs,
    VAR_4);
 }

 if (!VAR_9) {
  FUNC_0(VAR_5->dev, "pinmux group: %s not supported\n",
    VAR_6->name);
  return -VAR_0;
 }

 return 0;
}
