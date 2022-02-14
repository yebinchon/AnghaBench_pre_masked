
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;
struct TYPE_2__ {int vf_sbs_pool; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 TYPE_1__* FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct bnx2x*,scalar_t__) ;
 int FUNC_5 (struct bnx2x*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct bnx2x *VAR_9)
{
 int VAR_10;
 u32 VAR_11;
 u8 VAR_12, VAR_13 = 0;


 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_11 = FUNC_4(VAR_9, VAR_4 + VAR_10 * 4);
  if (!(VAR_11 & VAR_7))
   continue;
  VAR_12 = FUNC_3((VAR_11), VAR_5);
  if (VAR_12 & VAR_1)
   VAR_13 = VAR_12 & VAR_2;
  else if (VAR_13 == FUNC_0(VAR_9))
   FUNC_5(VAR_9, VAR_10,
           (VAR_12 & VAR_3));
  FUNC_2(VAR_0, "%s[%d], igu_sb_id=%d, msix=%d\n",
     ((VAR_12 & VAR_1) ? "PF" : "VF"),
     ((VAR_12 & VAR_1) ? (VAR_12 & VAR_2) :
     (VAR_12 & VAR_3)), VAR_10,
     FUNC_3((VAR_11), VAR_8));
 }
 FUNC_2(VAR_0, "vf_sbs_pool is %d\n", FUNC_1(VAR_9)->vf_sbs_pool);
 return FUNC_1(VAR_9)->vf_sbs_pool;
}
