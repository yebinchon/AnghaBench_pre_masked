
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw1 {int cmd_code; int cda; scalar_t__ count; scalar_t__ flags; } ;
struct ccw0 {int cmd_code; int cda; scalar_t__ count; scalar_t__ flags; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ccw1 *VAR_1, unsigned long VAR_2)
{
 struct ccw0 VAR_3;
 struct ccw1 *VAR_4 = VAR_1;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_3 = *(struct ccw0 *)VAR_4;
  if ((VAR_4->cmd_code & 0x0f) == VAR_0) {
   VAR_4->cmd_code = VAR_0;
   VAR_4->flags = 0;
   VAR_4->count = 0;
  } else {
   VAR_4->cmd_code = VAR_3;
   VAR_4->flags = VAR_3;
   VAR_4->count = VAR_3;
  }
  VAR_4->cda = VAR_3;
  VAR_4++;
 }
}
