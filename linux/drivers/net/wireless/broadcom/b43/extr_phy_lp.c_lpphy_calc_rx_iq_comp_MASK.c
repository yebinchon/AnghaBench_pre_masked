
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lpphy_iq_est {int iq_prod; int i_pwr; int q_pwr; } ;
struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int,int) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct b43_wldev*,int,int,struct lpphy_iq_est*) ;

__attribute__((used)) static int FUNC_7(struct b43_wldev *VAR_1, u16 VAR_2)
{
 struct lpphy_iq_est VAR_3;
 u16 VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_5 = FUNC_3(VAR_1, VAR_0);
 VAR_4 = VAR_5 >> 8;
 VAR_5 |= 0xFF;

 FUNC_2(VAR_1, VAR_0, 0xFF00, 0x00C0);
 FUNC_1(VAR_1, VAR_0, 0x00FF);

 VAR_15 = FUNC_6(VAR_1, VAR_2, 32, &VAR_3);
 if (!VAR_15)
  goto out;

 VAR_6 = VAR_3.iq_prod;
 VAR_7 = VAR_3.i_pwr;
 VAR_8 = VAR_3.q_pwr;

 if (VAR_7 + VAR_8 < 2) {
  VAR_15 = 0;
  goto out;
 }

 VAR_9 = FUNC_4(FUNC_0(VAR_6));
 VAR_10 = FUNC_4(FUNC_0(VAR_8));
 VAR_11 = VAR_9 - 20;

 if (VAR_11 >= 0) {
  VAR_13 = ((VAR_6 << (30 - VAR_9)) + (VAR_7 >> (1 + VAR_11))) /
   (VAR_7 >> VAR_11);
 } else {
  VAR_13 = ((VAR_6 << (30 - VAR_9)) + (VAR_7 << (-1 - VAR_11))) /
   (VAR_7 << -VAR_11);
 }

 VAR_12 = VAR_10 - 11;

 if (VAR_12 >= 0)
  VAR_14 = (VAR_8 << (31 - VAR_10)) / (VAR_7 >> VAR_12);
 else
  VAR_14 = (VAR_8 << (31 - VAR_10)) / (VAR_7 << -VAR_12);

 VAR_14 -= VAR_13 * VAR_13;
 VAR_14 = -FUNC_5(VAR_14);

 VAR_4 = VAR_13 >> 3;
 VAR_5 = VAR_14 >> 4;

out:
 FUNC_2(VAR_1, VAR_0, 0xFF00, VAR_5);
 FUNC_2(VAR_1, VAR_0, 0x00FF, VAR_4 << 8);
 return VAR_15;
}
