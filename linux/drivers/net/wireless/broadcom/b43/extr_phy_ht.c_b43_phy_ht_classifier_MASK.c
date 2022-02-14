
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b43_wldev*,int ,int,int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;

__attribute__((used)) static u16 FUNC_2(struct b43_wldev *VAR_4, u16 VAR_5, u16 VAR_6)
{
 u16 VAR_7;
 u16 VAR_8 = VAR_1 |
        VAR_2 |
        VAR_3;

 VAR_7 = FUNC_1(VAR_4, VAR_0);
 VAR_7 &= VAR_8;
 VAR_7 &= ~VAR_5;
 VAR_7 |= (VAR_6 & VAR_5);
 FUNC_0(VAR_4, VAR_0, ~VAR_8, VAR_7);

 return VAR_7;
}
