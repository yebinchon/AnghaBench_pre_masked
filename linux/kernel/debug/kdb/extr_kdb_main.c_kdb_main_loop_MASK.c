
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
typedef int kdb_reason_t ;
typedef int kdb_dbtrap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 () ;
 int FUNC_5 (int,int,struct pt_regs*,int ) ;
 int FUNC_6 (char*,...) ;

int FUNC_7(kdb_reason_t VAR_11, kdb_reason_t VAR_12, int VAR_13,
       kdb_dbtrap_t VAR_14, struct pt_regs *VAR_15)
{
 int VAR_16 = 1;

 while (1) {




  FUNC_0("kdb_main_loop 1", VAR_11);
  while (FUNC_1(VAR_2)) {




   if (!FUNC_1(VAR_3))
    FUNC_3(VAR_3);
  }

  FUNC_2(VAR_10);
  FUNC_0("kdb_main_loop 2", VAR_11);
  if (FUNC_1(VAR_8))
   break;

  VAR_16 = FUNC_5(VAR_12, VAR_13, VAR_15, VAR_14);
  FUNC_0("kdb_main_loop 3", VAR_16);

  if (VAR_16 == VAR_4)
   break;

  if (VAR_16 == VAR_7) {
   FUNC_3(VAR_1);
   break;
  }

  if (VAR_16 == VAR_6) {
   if (!FUNC_1(VAR_0))
    FUNC_6("Entering please attach debugger "
        "or use $D#44+ or $3#33\n");
   break;
  }
  if (VAR_16 && VAR_16 != 1 && VAR_16 != VAR_5)
   FUNC_6("\nUnexpected kdb_local return code %d\n",
       VAR_16);
  FUNC_0("kdb_main_loop 4", VAR_11);
  break;
 }
 if (FUNC_1(VAR_1))
  FUNC_2(VAR_9);


 FUNC_4();

 return VAR_16;
}
