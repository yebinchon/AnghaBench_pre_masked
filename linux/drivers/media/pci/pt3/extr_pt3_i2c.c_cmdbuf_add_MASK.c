
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt3_i2cbuf {int num_cmds; int tmp; int* data; } ;
typedef enum ctl_cmd { ____Placeholder_ctl_cmd } ctl_cmd ;


 int FUNC_0 (int*) ;

__attribute__((used)) static void FUNC_1(struct pt3_i2cbuf *VAR_0, enum ctl_cmd VAR_1)
{
 int VAR_2;

 if ((VAR_0->num_cmds % 2) == 0)
  VAR_0->tmp = VAR_1;
 else {
  VAR_0->tmp |= VAR_1 << 4;
  VAR_2 = VAR_0->num_cmds / 2;
  if (VAR_2 < FUNC_0(VAR_0->data))
   VAR_0->data[VAR_2] = VAR_0->tmp;
 }
 VAR_0->num_cmds++;
}
