
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ingenic_ecc {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ingenic_ecc *VAR_1, const u8 *VAR_2,
       size_t VAR_3)
{
 while (VAR_3--)
  FUNC_0(*VAR_2++, VAR_1->base + VAR_0);
}
