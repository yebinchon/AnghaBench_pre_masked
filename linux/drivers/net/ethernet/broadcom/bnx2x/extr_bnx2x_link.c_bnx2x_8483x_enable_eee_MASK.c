
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_vars {int dummy; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnx2x_phy*,struct link_params*,int ,int*,int,int ) ;
 int FUNC_2 (struct bnx2x_phy*,struct link_params*,struct link_vars*,int ) ;

__attribute__((used)) static int FUNC_3(struct bnx2x_phy *VAR_4,
       struct link_params *VAR_5,
       struct link_vars *VAR_6)
{
 int VAR_7;
 struct bnx2x *VAR_8 = VAR_5->bp;
 u16 VAR_9 = 1;

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_2,
      &VAR_9, 1, VAR_1);
 if (VAR_7) {
  FUNC_0(VAR_0, "EEE enable failed.\n");
  return VAR_7;
 }

 return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_3);
}
