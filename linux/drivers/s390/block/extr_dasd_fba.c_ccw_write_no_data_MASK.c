
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw1 {scalar_t__ count; int flags; int cmd_code; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ccw1 *VAR_2)
{
 VAR_2->cmd_code = VAR_1;
 VAR_2->flags |= VAR_0;
 VAR_2->count = 0;
}
