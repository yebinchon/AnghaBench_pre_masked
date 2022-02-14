
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reg_action {int value; int mask; int reg; } ;
struct rapl_package {TYPE_1__* priv; } ;
struct TYPE_2__ {scalar_t__ (* read_raw ) (int,struct reg_action*) ;int ** regs; } ;


 int VAR_0 ;
 int VAR_1 ;





 size_t VAR_2 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int,struct reg_action*) ;

__attribute__((used)) static int FUNC_2(int VAR_3, int VAR_4, struct rapl_package *VAR_5)
{
 struct reg_action VAR_6;

 switch (VAR_4) {
 case 131:
 case 129:
 case 128:
 case 132:
  VAR_6.reg = VAR_5->priv->regs[VAR_4][VAR_2];
  break;
 case 130:

  return -VAR_0;
 default:
  FUNC_0("invalid domain id %d\n", VAR_4);
  return -VAR_0;
 }




 VAR_6.mask = ~0;
 if (VAR_5->priv->read_raw(VAR_3, &VAR_6) || !VAR_6.value)
  return -VAR_1;

 return 0;
}
