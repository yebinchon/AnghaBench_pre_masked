
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mc13xxx_regulator_priv {int powermisc_pwgt_state; struct mc13xxx* mc13xxx; } ;
struct mc13xxx {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mc13xxx*) ;
 int FUNC_2 (struct mc13xxx*,int ,int*) ;
 int FUNC_3 (struct mc13xxx*,int ,int) ;
 int FUNC_4 (struct mc13xxx*) ;

__attribute__((used)) static int FUNC_5(struct mc13xxx_regulator_priv *VAR_2, u32 VAR_3,
     u32 VAR_4)
{
 struct mc13xxx *VAR_5 = VAR_2->mc13xxx;
 int VAR_6;
 u32 VAR_7;

 FUNC_0(VAR_4 & ~VAR_3);

 FUNC_1(VAR_2->mc13xxx);
 VAR_6 = FUNC_2(VAR_5, VAR_0, &VAR_7);
 if (VAR_6)
  goto out;


 VAR_2->powermisc_pwgt_state =
  (VAR_2->powermisc_pwgt_state & ~VAR_3) | VAR_4;
 VAR_2->powermisc_pwgt_state &= VAR_1;


 VAR_7 = (VAR_7 & ~VAR_3) | VAR_4;

 VAR_7 = (VAR_7 & ~VAR_1) |
  VAR_2->powermisc_pwgt_state;

 VAR_6 = FUNC_3(VAR_5, VAR_0, VAR_7);
out:
 FUNC_4(VAR_2->mc13xxx);
 return VAR_6;
}
