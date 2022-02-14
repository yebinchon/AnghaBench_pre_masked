
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_phy {int txctl1; int rfatt; int bbatt; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;
struct b43legacy_lopair {int dummy; } ;


 struct b43legacy_lopair* FUNC_0 (struct b43legacy_wldev*,int ,int ,int ) ;

__attribute__((used)) static inline
struct b43legacy_lopair *FUNC_1(struct b43legacy_wldev *VAR_0)
{
 struct b43legacy_phy *VAR_1 = &VAR_0->phy;

 return FUNC_0(VAR_0, VAR_1->bbatt,
         VAR_1->rfatt, VAR_1->txctl1);
}
