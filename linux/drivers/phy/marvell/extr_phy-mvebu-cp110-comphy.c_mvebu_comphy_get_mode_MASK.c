
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_comphy_conf {int lane; int port; int mode; int submode; int fw_mode; int mux; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 int FUNC_0 (struct mvebu_comphy_conf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mvebu_comphy_conf* VAR_3 ;

__attribute__((used)) static int FUNC_1(bool VAR_4, int VAR_5, int VAR_6,
     enum phy_mode VAR_7, int VAR_8)
{
 int VAR_9, VAR_10 = FUNC_0(VAR_3);

 bool VAR_11 = (VAR_7 == VAR_2);
 const struct mvebu_comphy_conf *VAR_12;


 if (VAR_7 == VAR_1)
  return 0;

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_12 = &VAR_3[VAR_9];
  if (VAR_12->lane == VAR_5 &&
      VAR_12->port == VAR_6 &&
      VAR_12->mode == VAR_7 &&
      (VAR_12->submode == VAR_8 || VAR_11))
   break;
 }

 if (VAR_9 == VAR_10)
  return -VAR_0;

 if (VAR_4)
  return VAR_12->fw_mode;
 else
  return VAR_12->mux;
}
