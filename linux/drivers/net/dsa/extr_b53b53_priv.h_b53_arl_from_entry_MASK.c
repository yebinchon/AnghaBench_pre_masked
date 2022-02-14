
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct b53_arl_entry {int vid; int port; scalar_t__ is_age; scalar_t__ is_static; scalar_t__ is_valid; int mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(u64 *VAR_6, u32 *VAR_7,
          const struct b53_arl_entry *VAR_8)
{
 *VAR_6 = FUNC_0(VAR_8->mac);
 *VAR_6 |= (u64)(VAR_8->vid & VAR_4) << VAR_5;
 *VAR_7 = VAR_8->port & VAR_1;
 if (VAR_8->is_valid)
  *VAR_7 |= VAR_3;
 if (VAR_8->is_static)
  *VAR_7 |= VAR_2;
 if (VAR_8->is_age)
  *VAR_7 |= VAR_0;
}
