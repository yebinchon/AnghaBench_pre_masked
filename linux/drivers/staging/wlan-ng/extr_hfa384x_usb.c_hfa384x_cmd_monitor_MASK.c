
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hfa384x_metacmd {int cmd; scalar_t__ parm2; scalar_t__ parm1; scalar_t__ parm0; } ;
struct hfa384x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hfa384x*,struct hfa384x_metacmd*) ;

int FUNC_3(struct hfa384x *VAR_1, u16 VAR_2)
{
 struct hfa384x_metacmd VAR_3;

 VAR_3.cmd = FUNC_1(VAR_0) |
     FUNC_0(VAR_2);
 VAR_3.parm0 = 0;
 VAR_3.parm1 = 0;
 VAR_3.parm2 = 0;

 return FUNC_2(VAR_1, &VAR_3);
}
