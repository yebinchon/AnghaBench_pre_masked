
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char**,int *) ;
 int FUNC_4 (char*,char*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char*,char*,int) ;
 TYPE_1__ VAR_9 ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int FUNC_7(char *VAR_10, char *VAR_11)
{
 if (!VAR_2) {
  char *VAR_12 = &VAR_10[11];
  if (VAR_10[1] != 'T' || VAR_10[2] != '0')
   return 1;
  FUNC_3(&VAR_12, &VAR_8);
  return 0;
 }
 switch (VAR_7) {
 case 1:

  FUNC_4(&VAR_10[1], (char *)VAR_4,
    VAR_1);
  FUNC_1(VAR_4, &VAR_5);
  FUNC_6("Stopped at IP: %lx\n",
    FUNC_2(&VAR_5));

  VAR_6 = VAR_3 + VAR_0;
  break;
 case 2:
  if (FUNC_5(VAR_10, "$OK", 3)) {
   FUNC_0("kgdbts: failed sstep break set\n");
   return 1;
  }
  break;
 case 3:
  if (FUNC_5(VAR_10, "$T0", 3)) {
   FUNC_0("kgdbts: failed continue sstep\n");
   return 1;
  } else {
   char *VAR_13 = &VAR_10[11];
   FUNC_3(&VAR_13, &VAR_8);
  }
  break;
 case 4:
  if (FUNC_5(VAR_10, "$OK", 3)) {
   FUNC_0("kgdbts: failed sstep break unset\n");
   return 1;
  }

  VAR_7 = 0;
  return 0;
 default:
  FUNC_0("kgdbts: ERROR failed sstep put emulation\n");
 }


 VAR_9.idx--;
 return 0;
}
