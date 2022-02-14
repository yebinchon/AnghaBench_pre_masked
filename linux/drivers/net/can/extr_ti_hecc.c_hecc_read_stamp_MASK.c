
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_hecc_priv {scalar_t__ hecc_ram; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct ti_hecc_priv *VAR_1, u32 VAR_2)
{
 return FUNC_0(VAR_1->hecc_ram + VAR_0 + VAR_2 * 4);
}
