
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct asd_ha_struct {int dummy; } ;


 int FUNC_0 (struct asd_ha_struct*,int,int) ;
 int FUNC_1 (struct asd_ha_struct*,int,int,int) ;

__attribute__((used)) static inline void FUNC_2(struct asd_ha_struct *VAR_0,
       u16 VAR_1,
       u16 VAR_2, u8 VAR_3)
{
 u16 VAR_4 = VAR_2 & ~1;
 u16 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_4);
 if (VAR_2 & 1)
  VAR_5 = (VAR_3 << 8) | (VAR_5 & 0xFF);
 else
  VAR_5 = (VAR_5 & 0xFF00) | VAR_3;
 FUNC_1(VAR_0, VAR_1, VAR_4, VAR_5);
}
