
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct lcnphy_iq_est {int i_pwr; int q_pwr; } ;
struct brcms_phy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct brcms_phy*,int) ;
 int FUNC_2 (struct brcms_phy*,int,int,struct lcnphy_iq_est*) ;
 int FUNC_3 (struct brcms_phy*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct brcms_phy*,int,int,int ) ;
 int FUNC_5 (struct brcms_phy*,int ,int ) ;

__attribute__((used)) static bool FUNC_6(struct brcms_phy *VAR_1, u16 VAR_2,
          u16 VAR_3, u16 VAR_4)
{
 u32 VAR_5, VAR_6;
 u32 VAR_7, VAR_8;
 struct lcnphy_iq_est VAR_9, VAR_10;

 FUNC_3(VAR_1, 0, 0, 0, VAR_2, VAR_3,
            VAR_4, 0);

 FUNC_1(VAR_1, 1);
 FUNC_4(VAR_1, 2000, (40 >> 1), 0);
 FUNC_0(500);
 FUNC_5(VAR_1, VAR_0, 0);
 if (!FUNC_2(VAR_1, 1024, 32, &VAR_10))
  return 0;

 FUNC_4(VAR_1, 2000, 40, 0);
 FUNC_0(500);
 FUNC_5(VAR_1, VAR_0, 0);
 if (!FUNC_2(VAR_1, 1024, 32, &VAR_9))
  return 0;

 VAR_5 = (VAR_10.i_pwr << 1);
 VAR_7 = (VAR_10.i_pwr << 2) + VAR_10.i_pwr;

 VAR_6 = (VAR_10.q_pwr << 1);
 VAR_8 = (VAR_10.q_pwr << 2) + VAR_10.q_pwr;
 if ((VAR_9.i_pwr > VAR_5) &&
     (VAR_9.i_pwr < VAR_7) &&
     (VAR_9.q_pwr > VAR_6) &&
     (VAR_9.q_pwr < VAR_8))
  return 1;

 return 0;
}
