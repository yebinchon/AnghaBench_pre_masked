
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* feat; int core_clk_rate; } ;
struct TYPE_3__ {scalar_t__ mstandby_workaround; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int,int) ;
 int VAR_6 ;
 int FUNC_1 (int ,int,int,int) ;
 TYPE_2__ VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(void)
{
 u32 VAR_8;


 if (FUNC_11(VAR_3)) {
  VAR_8 = FUNC_7(VAR_1);

  VAR_8 = FUNC_0(VAR_8, 1, 0, 0);
  VAR_8 = FUNC_0(VAR_8, 1, 23, 16);
  FUNC_10(VAR_1, VAR_8);

  VAR_7.core_clk_rate = FUNC_3();
 }


 if (FUNC_11(VAR_4))
  FUNC_1(VAR_0, 1, 9, 9);

 FUNC_9();

 FUNC_8(VAR_6);

 FUNC_4();

 FUNC_2();

 FUNC_6();

 if (VAR_7.feat->mstandby_workaround)
  FUNC_1(VAR_2, 1, 0, 0);

 if (FUNC_11(VAR_5))
  FUNC_5();
}
