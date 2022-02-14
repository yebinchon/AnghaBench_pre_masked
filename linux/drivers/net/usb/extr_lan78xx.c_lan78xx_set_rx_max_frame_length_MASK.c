
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan78xx_net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lan78xx_net*,int ,int*) ;
 int FUNC_1 (struct lan78xx_net*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct lan78xx_net *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7;
 bool VAR_8;

 VAR_6 = FUNC_0(VAR_4, VAR_0, &VAR_7);

 VAR_8 = ((VAR_7 & VAR_3) != 0);

 if (VAR_8) {
  VAR_7 &= ~VAR_3;
  VAR_6 = FUNC_1(VAR_4, VAR_0, VAR_7);
 }


 VAR_7 &= ~VAR_1;
 VAR_7 |= (((VAR_5 + 4) << VAR_2) & VAR_1);

 VAR_6 = FUNC_1(VAR_4, VAR_0, VAR_7);

 if (VAR_8) {
  VAR_7 |= VAR_3;
  VAR_6 = FUNC_1(VAR_4, VAR_0, VAR_7);
 }

 return 0;
}
