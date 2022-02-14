
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct b43legacy_wldev {int dummy; } ;


 scalar_t__ FUNC_0 (struct b43legacy_wldev*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct b43legacy_wldev *VAR_0,
           u16 VAR_1)
{
 int VAR_2;
 u32 VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  VAR_3 += FUNC_0(VAR_0, VAR_1);

 return VAR_3;
}
