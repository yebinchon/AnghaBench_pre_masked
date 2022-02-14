
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct pin_desc {int gpio_owner; } ;
struct ltq_pinmux_info {int * membase; } ;


 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct pinctrl_dev*,unsigned int,unsigned long*) ;
 int FUNC_6 (int ,int ) ;
 struct pin_desc* FUNC_7 (struct pinctrl_dev*,unsigned int) ;
 struct ltq_pinmux_info* FUNC_8 (struct pinctrl_dev*) ;
 int FUNC_9 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_10(struct pinctrl_dev *VAR_3,
   struct seq_file *VAR_4, unsigned VAR_5)
{
 unsigned long VAR_6;
 struct pin_desc *VAR_7;

 struct ltq_pinmux_info *VAR_8 = FUNC_8(VAR_3);
 int VAR_9 = FUNC_3(VAR_5);

 FUNC_9(VAR_4, " (port %d) mux %d -- ", VAR_9,
  FUNC_6(VAR_8->membase[VAR_9], FUNC_0(FUNC_4(VAR_5))));

 VAR_6 = FUNC_1(VAR_1, 0);
 if (!FUNC_5(VAR_3, VAR_5, &VAR_6))
  FUNC_9(VAR_4, "pull %d ",
   (int)FUNC_2(VAR_6));

 VAR_6 = FUNC_1(VAR_0, 0);
 if (!FUNC_5(VAR_3, VAR_5, &VAR_6))
  FUNC_9(VAR_4, "drive-current %d ",
   (int)FUNC_2(VAR_6));

 VAR_6 = FUNC_1(VAR_2, 0);
 if (!FUNC_5(VAR_3, VAR_5, &VAR_6))
  FUNC_9(VAR_4, "slew-rate %d ",
   (int)FUNC_2(VAR_6));

 VAR_7 = FUNC_7(VAR_3, VAR_5);
 if (VAR_7) {
  if (VAR_7->gpio_owner)
   FUNC_9(VAR_4, " owner: %s", VAR_7->gpio_owner);
 } else {
  FUNC_9(VAR_4, " not registered");
 }
}
