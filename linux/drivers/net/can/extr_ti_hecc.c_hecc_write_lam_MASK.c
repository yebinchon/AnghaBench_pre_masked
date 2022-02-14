
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_hecc_priv {scalar_t__ hecc_ram; } ;


 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct ti_hecc_priv *VAR_0, u32 VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_2, VAR_0->hecc_ram + VAR_1 * 4);
}
