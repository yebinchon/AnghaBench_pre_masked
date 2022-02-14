
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43_wldev*,int ) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_1, u8 VAR_2,
       bool VAR_3)
{
 u16 VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0);
 if (VAR_3)
  VAR_4 &= ~(1 << VAR_2);
 else
  VAR_4 |= (1 << VAR_2);
 FUNC_1(VAR_1, VAR_0, VAR_4);
}
