
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_pio_control {int dummy; } ;
struct seq_file {int dummy; } ;
struct pinctrl_dev {int mutex; } ;
struct TYPE_2__ {int gpio_chip; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (struct st_pio_control*) ;
 int FUNC_11 (struct seq_file*,char*,int,int ,int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_12 (char*,int,char*,...) ;
 struct st_pio_control* FUNC_13 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (unsigned int) ;
 unsigned int FUNC_16 (struct st_pio_control*,int) ;
 int FUNC_17 (struct pinctrl_dev*,unsigned int,unsigned long*) ;

__attribute__((used)) static void FUNC_18(struct pinctrl_dev *VAR_0,
       struct seq_file *VAR_1, unsigned VAR_2)
{
 struct st_pio_control *VAR_3;
 unsigned long VAR_4;
 unsigned int VAR_5;
 int VAR_6 = FUNC_15(VAR_2);
 char VAR_7[16];

 FUNC_9(&VAR_0->mutex);
 VAR_3 = FUNC_13(VAR_0, VAR_2);
 FUNC_17(VAR_0, VAR_2, &VAR_4);
 FUNC_8(&VAR_0->mutex);

 VAR_5 = FUNC_16(VAR_3, VAR_6);
 if (VAR_5)
  FUNC_12(VAR_7, 10, "Alt Fn %u", VAR_5);
 else
  FUNC_12(VAR_7, 5, "GPIO");

 FUNC_11(VAR_1, "[OE:%d,PU:%ld,OD:%ld]\t%s\n"
  "\t\t[retime:%ld,invclk:%ld,clknotdat:%ld,"
  "de:%ld,rt-clk:%ld,rt-delay:%ld]",
  !FUNC_14(&FUNC_10(VAR_3)->gpio_chip, VAR_6),
  FUNC_1(VAR_4),
  FUNC_0(VAR_4),
  VAR_7,
  FUNC_2(VAR_4),
  FUNC_7(VAR_4),
  FUNC_4(VAR_4),
  FUNC_6(VAR_4),
  FUNC_3(VAR_4),
  FUNC_5(VAR_4));
}
