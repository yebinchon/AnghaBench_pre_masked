
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds1685_priv {scalar_t__ bcd_mode; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline u8
FUNC_1(struct ds1685_priv *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 if (VAR_0->bcd_mode)
  return (FUNC_0(VAR_1) & VAR_3);

 return (VAR_1 & VAR_2);
}
