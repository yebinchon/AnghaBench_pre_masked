
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int * bytes; } ;
struct RAID_CONTEXT_G35 {TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_0(struct RAID_CONTEXT_G35 *VAR_3,
          u16 VAR_4)
{
 VAR_3->u.bytes[0] = (u8)(VAR_4 & VAR_0);
 VAR_3->u.bytes[1] |= (u8)((VAR_4 >> VAR_2)
       & VAR_1);
}
