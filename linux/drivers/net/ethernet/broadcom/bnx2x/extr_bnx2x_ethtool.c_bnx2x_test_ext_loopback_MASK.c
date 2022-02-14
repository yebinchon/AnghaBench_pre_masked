
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int link_status; } ;
struct bnx2x {int dev; TYPE_1__ link_vars; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*,int) ;
 int FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (struct bnx2x*,int ,int) ;
 int FUNC_6 (struct bnx2x*,int ) ;
 int FUNC_7 (struct bnx2x*,int,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct bnx2x *VAR_7)
{
 int VAR_8;
 u8 VAR_9 =
  (VAR_7->link_vars.link_status & VAR_4) > 0;

 if (FUNC_0(VAR_7))
  return -VAR_3;

 if (!FUNC_8(VAR_7->dev))
  return VAR_1;

 FUNC_5(VAR_7, VAR_6, 0);
 VAR_8 = FUNC_4(VAR_7, VAR_5);
 if (VAR_8) {
  FUNC_1(VAR_2,
     "Can't perform self-test, nic_load (for external lb) failed\n");
  return -VAR_3;
 }
 FUNC_7(VAR_7, 1, VAR_9);

 FUNC_3(VAR_7, 1);

 VAR_8 = FUNC_6(VAR_7, VAR_0);
 if (VAR_8)
  FUNC_1(VAR_2, "EXT loopback failed  (res %d)\n", VAR_8);

 FUNC_2(VAR_7);

 return VAR_8;
}
