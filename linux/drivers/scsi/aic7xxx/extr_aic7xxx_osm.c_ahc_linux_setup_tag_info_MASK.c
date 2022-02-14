
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int int32_t ;
struct TYPE_3__ {int* tag_commands; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int,int,int) ;

__attribute__((used)) static void
FUNC_2(u_long VAR_3, int VAR_4, int VAR_5, int32_t VAR_6)
{

 if ((VAR_4 >= 0) && (VAR_5 >= 0)
  && (VAR_4 < FUNC_0(VAR_1))
  && (VAR_5 < VAR_0)) {
  VAR_1[VAR_4].tag_commands[VAR_5] = VAR_6 & 0xff;
  if (VAR_2)
   FUNC_1("tag_info[%d:%d] = %d\n", VAR_4, VAR_5, VAR_6);
 }
}
