
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct link_params {int feature_config_flags; struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct link_params *VAR_4,
        struct bnx2x_phy *VAR_5,
        u8 VAR_6)
{
 struct bnx2x *VAR_7 = VAR_4->bp;



 if (VAR_6) {
  if (VAR_4->feature_config_flags &
       VAR_0)
   FUNC_0(VAR_3, "Disabling PMD transmitter\n");
  else {
   FUNC_0(VAR_3, "NOT disabling PMD transmitter\n");
   return;
  }
 } else
  FUNC_0(VAR_3, "Enabling PMD transmitter\n");
 FUNC_1(VAR_7, VAR_5,
    VAR_1,
    VAR_2, VAR_6);
}
