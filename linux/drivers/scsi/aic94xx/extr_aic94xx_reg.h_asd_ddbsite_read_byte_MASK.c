
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct asd_ha_struct {int dummy; } ;


 int FUNC_0 (struct asd_ha_struct*,int,int) ;

__attribute__((used)) static inline u8 FUNC_1(struct asd_ha_struct *VAR_0,
           u16 VAR_1,
           u16 VAR_2)
{
 if (VAR_2 & 1)
  return FUNC_0(VAR_0, VAR_1,
          VAR_2 & ~1) >> 8;
 else
  return FUNC_0(VAR_0, VAR_1,
          VAR_2) & 0xFF;
}
