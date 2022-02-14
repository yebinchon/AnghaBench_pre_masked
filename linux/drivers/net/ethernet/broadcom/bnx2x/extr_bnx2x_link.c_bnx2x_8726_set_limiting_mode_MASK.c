
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,scalar_t__*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_6,
     struct bnx2x_phy *VAR_7,
     u16 VAR_8)
{
 u16 VAR_9;

 FUNC_1(VAR_6, VAR_7,
   VAR_1,
   VAR_4,
   &VAR_9);
 FUNC_0(VAR_5, "Current Limiting mode is 0x%x\n",
   VAR_9);

 if (VAR_8 == VAR_0) {
  FUNC_0(VAR_5, "Setting LIMITING MODE\n");
  FUNC_2(VAR_6, VAR_7,
     VAR_1,
     VAR_4,
     VAR_0);
 } else {

  FUNC_0(VAR_5, "Setting LRM MODE\n");




  if (VAR_9 != VAR_0)
   return 0;

  FUNC_2(VAR_6, VAR_7,
     VAR_1,
     VAR_2,
     0);
  FUNC_2(VAR_6, VAR_7,
     VAR_1,
     VAR_4,
     0x128);
  FUNC_2(VAR_6, VAR_7,
     VAR_1,
     VAR_3,
     0x4008);
  FUNC_2(VAR_6, VAR_7,
     VAR_1,
     VAR_2,
     0xaaaa);
 }
 return 0;
}
