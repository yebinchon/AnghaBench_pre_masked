
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct seq_file {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct atmel_pioctrl {TYPE_1__** pins; } ;
struct TYPE_2__ {int ioset; int device; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pinctrl_dev*,unsigned int) ;
 struct atmel_pioctrl* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (struct seq_file*,char*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct pinctrl_dev *VAR_7,
        struct seq_file *VAR_8, unsigned VAR_9)
{
 struct atmel_pioctrl *VAR_10 = FUNC_1(VAR_7);
 u32 VAR_11;

 if (!VAR_10->pins[VAR_9]->device)
  return;

 if (VAR_10->pins[VAR_9])
  FUNC_2(VAR_8, " (%s, ioset %u) ",
      VAR_10->pins[VAR_9]->device,
      VAR_10->pins[VAR_9]->ioset);

 VAR_11 = FUNC_0(VAR_7, VAR_9);
 if (VAR_11 & VAR_5)
  FUNC_2(VAR_8, "%s ", "pull-up");
 if (VAR_11 & VAR_4)
  FUNC_2(VAR_8, "%s ", "pull-down");
 if (VAR_11 & VAR_2)
  FUNC_2(VAR_8, "%s ", "debounce");
 if (VAR_11 & VAR_3)
  FUNC_2(VAR_8, "%s ", "open-drain");
 if (VAR_11 & VAR_6)
  FUNC_2(VAR_8, "%s ", "schmitt");
 if (VAR_11 & VAR_0) {
  switch ((VAR_11 & VAR_0) >> VAR_1) {
  case 128:
   FUNC_2(VAR_8, "%s ", "medium-drive");
   break;
  case 129:
   FUNC_2(VAR_8, "%s ", "high-drive");
   break;

  default:
   FUNC_2(VAR_8, "%s ", "low-drive");
  }
 }
}
