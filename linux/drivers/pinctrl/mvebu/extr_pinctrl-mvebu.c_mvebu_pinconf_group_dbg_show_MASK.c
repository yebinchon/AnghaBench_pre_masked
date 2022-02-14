
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct mvebu_pinctrl_group {int num_settings; struct mvebu_mpp_ctrl_setting* settings; } ;
struct mvebu_pinctrl {int variant; struct mvebu_pinctrl_group* groups; } ;
struct mvebu_mpp_ctrl_setting {int flags; int variant; scalar_t__ subname; scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pinctrl_dev*,unsigned int,unsigned long*) ;
 struct mvebu_mpp_ctrl_setting* FUNC_1 (struct mvebu_pinctrl*,struct mvebu_pinctrl_group*,unsigned long) ;
 struct mvebu_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_4 (struct seq_file*,char) ;
 int FUNC_5 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_6(struct pinctrl_dev *VAR_2,
     struct seq_file *VAR_3, unsigned VAR_4)
{
 struct mvebu_pinctrl *VAR_5 = FUNC_2(VAR_2);
 struct mvebu_pinctrl_group *VAR_6 = &VAR_5->groups[VAR_4];
 struct mvebu_mpp_ctrl_setting *VAR_7;
 unsigned long VAR_8;
 unsigned VAR_9;

 if (FUNC_0(VAR_2, VAR_4, &VAR_8))
  return;

 VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_8);

 if (VAR_7) {
  FUNC_3(VAR_3, "current: %s", VAR_7->name);
  if (VAR_7->subname)
   FUNC_3(VAR_3, "(%s)", VAR_7->subname);
  if (VAR_7->flags & (VAR_1 | VAR_0)) {
   FUNC_4(VAR_3, '(');
   if (VAR_7->flags & VAR_0)
    FUNC_4(VAR_3, 'i');
   if (VAR_7->flags & VAR_1)
    FUNC_4(VAR_3, 'o');
   FUNC_4(VAR_3, ')');
  }
 } else {
  FUNC_5(VAR_3, "current: UNKNOWN");
 }

 if (VAR_6->num_settings > 1) {
  FUNC_5(VAR_3, ", available = [");
  for (VAR_9 = 0; VAR_9 < VAR_6->num_settings; VAR_9++) {
   if (VAR_7 == &VAR_6->settings[VAR_9])
    continue;


   if (VAR_5->variant &&
       !(VAR_5->variant & VAR_6->settings[VAR_9].variant))
    continue;

   FUNC_3(VAR_3, " %s", VAR_6->settings[VAR_9].name);
   if (VAR_6->settings[VAR_9].subname)
    FUNC_3(VAR_3, "(%s)", VAR_6->settings[VAR_9].subname);
   if (VAR_6->settings[VAR_9].flags &
    (VAR_1 | VAR_0)) {
    FUNC_4(VAR_3, '(');
    if (VAR_6->settings[VAR_9].flags & VAR_0)
     FUNC_4(VAR_3, 'i');
    if (VAR_6->settings[VAR_9].flags & VAR_1)
     FUNC_4(VAR_3, 'o');
    FUNC_4(VAR_3, ')');
   }
  }
  FUNC_5(VAR_3, " ]");
 }
}
