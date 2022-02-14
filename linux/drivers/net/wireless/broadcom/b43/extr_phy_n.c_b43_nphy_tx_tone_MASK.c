
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct b43_wldev {int dummy; } ;


 scalar_t__ FUNC_0 (struct b43_wldev*,int ,scalar_t__,int) ;
 int FUNC_1 (struct b43_wldev*,scalar_t__,int,int ,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct b43_wldev *VAR_0, u32 VAR_1, u16 VAR_2,
       bool VAR_3, bool VAR_4, bool VAR_5)
{
 u16 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4);
 if (VAR_6 == 0)
  return -1;
 FUNC_1(VAR_0, VAR_6, 0xFFFF, 0, VAR_3, VAR_4,
        VAR_5);
 return 0;
}
