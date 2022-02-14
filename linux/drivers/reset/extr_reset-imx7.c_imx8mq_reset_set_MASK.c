
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reset_controller_dev {int dummy; } ;
struct imx7_src {TYPE_1__* signals; } ;
struct TYPE_2__ {unsigned int bit; } ;
 int FUNC_0 (struct imx7_src*,unsigned long,unsigned int) ;
 struct imx7_src* FUNC_1 (struct reset_controller_dev*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_0,
       unsigned long VAR_1, bool VAR_2)
{
 struct imx7_src *VAR_3 = FUNC_1(VAR_0);
 const unsigned int VAR_4 = VAR_3->signals[VAR_1].bit;
 unsigned int VAR_5 = VAR_2 ? VAR_4 : 0;

 switch (VAR_1) {
 case 130:
 case 129:




  if (!VAR_2)
   FUNC_2(10);
  break;

 case 128:
 case 131:
 case 134:
 case 135:
 case 136:
 case 132:
 case 133:
  VAR_5 = VAR_2 ? 0 : VAR_4;
  break;
 }

 return FUNC_0(VAR_3, VAR_1, VAR_5);
}
