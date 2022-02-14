
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct ltq_pinmux_info {int (* apply_mux ) (struct pinctrl_dev*,int,int) ;int dev; int * mfp; struct ltq_pin_group* grps; } ;
struct ltq_pin_group {int npins; int mux; int * pins; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 scalar_t__ FUNC_1 (struct ltq_pin_group const*,struct ltq_pinmux_info*,int ) ;
 int FUNC_2 (struct ltq_pinmux_info*,int ) ;
 int FUNC_3 (int *,int ) ;
 struct ltq_pinmux_info* FUNC_4 (struct pinctrl_dev*) ;
 int FUNC_5 (struct pinctrl_dev*,int,int) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_1,
         unsigned VAR_2,
         unsigned VAR_3)
{
 struct ltq_pinmux_info *VAR_4 = FUNC_4(VAR_1);
 const struct ltq_pin_group *VAR_5 = &VAR_4->grps[VAR_3];
 int VAR_6, VAR_7, VAR_8, VAR_9;

 if (!VAR_5->npins ||
  (FUNC_1(VAR_5, VAR_4, VAR_5->mux) < 0)) {
  FUNC_0(VAR_4->dev, "Failed to set the pin group: %s\n",
   VAR_4->grps[VAR_3].name);
  return -VAR_0;
 }
 for (VAR_6 = 0; VAR_6 < VAR_5->npins; VAR_6++) {
  VAR_7 = FUNC_2(VAR_4, VAR_5->pins[VAR_6]);
  if (VAR_7 < 0) {
   FUNC_0(VAR_4->dev, "could not find mfp for pin %d\n",
    VAR_5->pins[VAR_6]);
   return -VAR_0;
  }
  VAR_8 = FUNC_3(&VAR_4->mfp[VAR_7], VAR_5->mux);
  VAR_9 = VAR_4->apply_mux(VAR_1, VAR_7, VAR_8);
  if (VAR_9) {
   FUNC_0(VAR_4->dev,
    "failed to apply mux %d for pin %d\n",
    VAR_8, VAR_7);
   return VAR_9;
  }
 }
 return 0;
}
