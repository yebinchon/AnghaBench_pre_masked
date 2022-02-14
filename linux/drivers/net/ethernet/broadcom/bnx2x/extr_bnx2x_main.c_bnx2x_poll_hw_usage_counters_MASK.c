
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_2 (struct bnx2x*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (struct bnx2x*,scalar_t__,char*,int ) ;
 scalar_t__* VAR_5 ;

__attribute__((used)) static int FUNC_4(struct bnx2x *VAR_6, u32 VAR_7)
{

 if (FUNC_3(VAR_6,
   VAR_0,
   "CFC PF usage counter timed out",
   VAR_7))
  return 1;


 if (FUNC_3(VAR_6,
   VAR_1,
   "DQ PF usage counter timed out",
   VAR_7))
  return 1;


 if (FUNC_3(VAR_6,
   VAR_2 + 4*FUNC_0(VAR_6),
   "QM PF usage counter timed out",
   VAR_7))
  return 1;


 if (FUNC_3(VAR_6,
   VAR_4 + 4*FUNC_1(VAR_6),
   "Timers VNIC usage counter timed out",
   VAR_7))
  return 1;
 if (FUNC_3(VAR_6,
   VAR_3 + 4*FUNC_1(VAR_6),
   "Timers NUM_SCANS usage counter timed out",
   VAR_7))
  return 1;


 if (FUNC_3(VAR_6,
   VAR_5[FUNC_2(VAR_6)],
   "DMAE command register timed out",
   VAR_7))
  return 1;

 return 0;
}
