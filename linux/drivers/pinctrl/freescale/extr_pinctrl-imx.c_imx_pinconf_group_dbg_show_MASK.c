
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pinctrl_dev {unsigned int num_groups; } ;
struct imx_pin {int pin; } ;
struct group_desc {int num_pins; scalar_t__ data; } ;


 int FUNC_0 (struct pinctrl_dev*,int ,unsigned long*) ;
 char* FUNC_1 (struct pinctrl_dev*,int ) ;
 struct group_desc* FUNC_2 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_3 (struct seq_file*,char*,char const*,unsigned long) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_5(struct pinctrl_dev *VAR_0,
      struct seq_file *VAR_1, unsigned VAR_2)
{
 struct group_desc *VAR_3;
 unsigned long VAR_4;
 const char *VAR_5;
 int VAR_6, VAR_7;

 if (VAR_2 >= VAR_0->num_groups)
  return;

 FUNC_4(VAR_1, "\n");
 VAR_3 = FUNC_2(VAR_0, VAR_2);
 if (!VAR_3)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_3->num_pins; VAR_6++) {
  struct imx_pin *VAR_8 = &((struct imx_pin *)(VAR_3->data))[VAR_6];

  VAR_5 = FUNC_1(VAR_0, VAR_8->pin);
  VAR_7 = FUNC_0(VAR_0, VAR_8->pin, &VAR_4);
  if (VAR_7)
   return;
  FUNC_3(VAR_1, "  %s: 0x%lx\n", VAR_5, VAR_4);
 }
}
