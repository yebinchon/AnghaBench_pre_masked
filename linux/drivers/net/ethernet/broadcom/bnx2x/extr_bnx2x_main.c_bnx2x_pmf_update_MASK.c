
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ int_block; } ;
struct TYPE_4__ {int pmf; } ;
struct bnx2x {TYPE_1__ common; int period_task; TYPE_2__ port; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct bnx2x*,scalar_t__,int) ;
 int VAR_6 ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*,int ) ;
 int VAR_7 ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct bnx2x *VAR_8)
{
 int VAR_9 = FUNC_0(VAR_8);
 u32 VAR_10;

 VAR_8->port.pmf = 1;
 FUNC_3(VAR_0, "pmf %d\n", VAR_8->port.pmf);





 FUNC_8();


 FUNC_7(VAR_7, &VAR_8->period_task, 0);

 FUNC_5(VAR_8);


 VAR_10 = (0xff0f | (1 << (FUNC_1(VAR_8) + 4)));
 if (VAR_8->common.int_block == VAR_5) {
  FUNC_4(VAR_8, VAR_2 + VAR_9*8, VAR_10);
  FUNC_4(VAR_8, VAR_1 + VAR_9*8, VAR_10);
 } else if (!FUNC_2(VAR_8)) {
  FUNC_4(VAR_8, VAR_4, VAR_10);
  FUNC_4(VAR_8, VAR_3, VAR_10);
 }

 FUNC_6(VAR_8, VAR_6);
}
