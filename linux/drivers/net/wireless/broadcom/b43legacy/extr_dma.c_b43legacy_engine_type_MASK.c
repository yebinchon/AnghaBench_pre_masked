
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct b43legacy_wldev {int dummy; } ;
typedef enum b43legacy_dmatype { ____Placeholder_b43legacy_dmatype } b43legacy_dmatype ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct b43legacy_wldev*,scalar_t__) ;
 int FUNC_2 (struct b43legacy_wldev*,scalar_t__,int) ;

__attribute__((used)) static enum b43legacy_dmatype FUNC_3(struct b43legacy_wldev *VAR_4)
{
 u32 VAR_5;
 u16 VAR_6;

 VAR_6 = FUNC_0(0, 0);
 FUNC_2(VAR_4,
   VAR_6 + VAR_1,
   VAR_0);
 VAR_5 = FUNC_1(VAR_4, VAR_6 +
          VAR_1);
 if (VAR_5 & VAR_0)
  return VAR_3;
 return VAR_2;
}
