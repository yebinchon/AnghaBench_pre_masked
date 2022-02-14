
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (scalar_t__,int *) ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_4 (char*) ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_5 (char*,unsigned long) ;

__attribute__((used)) static int FUNC_6(char *VAR_9, char *VAR_10)
{
 unsigned long VAR_11 = FUNC_4(VAR_10);
 static int VAR_12;





 FUNC_3(&VAR_9[1], (char *)VAR_4,
   VAR_0);
 FUNC_1(VAR_4, &VAR_5);
 FUNC_5("Singlestep stopped at IP: %lx\n",
     FUNC_2(&VAR_5));

 if (VAR_7 != VAR_3) {





  FUNC_5("ThrID does not match: %lx\n", VAR_3);
  if (VAR_1) {
   if (VAR_12 &&
       FUNC_2(&VAR_5) != VAR_11)
    goto continue_test;
   VAR_12++;
   VAR_8.idx -= 2;
   VAR_6 = 0;
   return 0;
  }
  VAR_2 = 1;
  VAR_8.idx -= 4;
  return 0;
 }
continue_test:
 VAR_12 = 0;
 if (FUNC_2(&VAR_5) == VAR_11) {
  FUNC_0("kgdbts: SingleStep failed at %lx\n",
      FUNC_2(&VAR_5));
  return 1;
 }

 return 0;
}
