
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,int ) ;

__attribute__((used)) static u16 FUNC_3(struct b43_wldev *VAR_0, u16 VAR_1)
{
 if (!VAR_1)
  VAR_1 = FUNC_1(VAR_0) ? 0x159 : 0x154;
 return FUNC_2(VAR_0, FUNC_0(7, VAR_1)) & 0x7;
}
