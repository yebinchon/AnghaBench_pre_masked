
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
 int FUNC_1 (struct bnx2x_phy*,struct link_params*,int ,int *,int,int ) ;
 int FUNC_2 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;

__attribute__((used)) static int FUNC_3(struct bnx2x_phy *VAR_3,
       struct link_params *VAR_4,
       struct link_vars *VAR_5)
{
 int VAR_6;
 struct bnx2x *VAR_7 = VAR_4->bp;
 u16 VAR_8 = 0;

 FUNC_0(VAR_0, "Don't Advertise 10GBase-T EEE\n");


 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_2,
      &VAR_8, 1, VAR_1);
 if (VAR_6) {
  FUNC_0(VAR_0, "EEE disable failed.\n");
  return VAR_6;
 }

 return FUNC_2(VAR_3, VAR_4, VAR_5);
}
