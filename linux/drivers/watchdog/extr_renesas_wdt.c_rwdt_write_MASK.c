
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rwdt_priv {scalar_t__ base; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct rwdt_priv *VAR_1, u32 VAR_2, unsigned int VAR_3)
{
 if (VAR_3 == VAR_0)
  VAR_2 |= 0x5a5a0000;
 else
  VAR_2 |= 0xa5a5a500;

 FUNC_0(VAR_2, VAR_1->base + VAR_3);
}
