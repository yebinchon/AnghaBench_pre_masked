
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_phy {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;
 int FUNC_0 (struct mii_phy*,int ) ;
 int FUNC_1 (struct mii_phy*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mii_phy *VAR_10)
{
 int VAR_11;

 VAR_11 = FUNC_0(VAR_10, VAR_8);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 &= ~VAR_2;

 switch (VAR_10->mode) {
 case 128:
  VAR_11 |= VAR_5;
  break;
 case 129:
  VAR_11 |= VAR_4;
  break;
 case 131:
  VAR_11 |= VAR_1;
  break;
 case 130:
 default:
  VAR_11 |= VAR_3;
 }

 FUNC_1(VAR_10, VAR_8, VAR_11);


 FUNC_1(VAR_10, VAR_7,
    FUNC_0(VAR_10, VAR_7) | VAR_0);


 FUNC_1(VAR_10, VAR_6,
    FUNC_0(VAR_10, VAR_6) | VAR_9);

 return 0;
}
