
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kgdb_state {int dummy; } ;
struct TYPE_2__ {int (* set_hw_breakpoint ) (unsigned long,int,char) ;int flags; int (* remove_hw_breakpoint ) (unsigned long,int,char) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char**,unsigned long*) ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (unsigned long,int,char) ;
 int FUNC_6 (unsigned long,int,char) ;

__attribute__((used)) static void FUNC_7(struct kgdb_state *VAR_5)
{




 char *VAR_6 = &VAR_3[1];
 char *VAR_7 = &VAR_3[2];
 unsigned long VAR_8;
 unsigned long VAR_9;
 int VAR_10 = 0;

 if (VAR_2.set_hw_breakpoint && *VAR_6 >= '1') {

  if (*VAR_6 > '4')
   return;
 } else {
  if (*VAR_6 != '0' && *VAR_6 != '1')

   return;
 }





 if (*VAR_6 == '1' && !(VAR_2.flags & VAR_1))

  return;

 if (*(VAR_7++) != ',') {
  FUNC_2(VAR_4, -VAR_0);
  return;
 }
 if (!FUNC_3(&VAR_7, &VAR_8)) {
  FUNC_2(VAR_4, -VAR_0);
  return;
 }
 if (*(VAR_7++) != ',' ||
  !FUNC_3(&VAR_7, &VAR_9)) {
  FUNC_2(VAR_4, -VAR_0);
  return;
 }

 if (VAR_3[0] == 'Z' && *VAR_6 == '0')
  VAR_10 = FUNC_1(VAR_8);
 else if (VAR_3[0] == 'z' && *VAR_6 == '0')
  VAR_10 = FUNC_0(VAR_8);
 else if (VAR_3[0] == 'Z')
  VAR_10 = VAR_2.set_hw_breakpoint(VAR_8,
   (int)VAR_9, *VAR_6 - '0');
 else if (VAR_3[0] == 'z')
  VAR_10 = VAR_2.remove_hw_breakpoint(VAR_8,
   (int) VAR_9, *VAR_6 - '0');

 if (VAR_10 == 0)
  FUNC_4(VAR_4, "OK");
 else
  FUNC_2(VAR_4, VAR_10);
}
