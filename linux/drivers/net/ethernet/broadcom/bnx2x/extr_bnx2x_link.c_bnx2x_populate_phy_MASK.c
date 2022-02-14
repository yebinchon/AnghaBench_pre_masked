
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct bnx2x_phy {int type; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*,scalar_t__,int ,int ,scalar_t__,struct bnx2x_phy*) ;
 int FUNC_1 (struct bnx2x*,int ,scalar_t__,struct bnx2x_phy*) ;

__attribute__((used)) static int FUNC_2(struct bnx2x *VAR_2, u8 VAR_3, u32 VAR_4,
         u32 VAR_5, u8 VAR_6, struct bnx2x_phy *VAR_7)
{
 VAR_7->type = VAR_1;
 if (VAR_3 == VAR_0)
  return FUNC_1(VAR_2, VAR_4, VAR_6, VAR_7);

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_7);
}
