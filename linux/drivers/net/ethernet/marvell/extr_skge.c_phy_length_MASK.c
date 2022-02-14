
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct skge_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct skge_hw const*) ;

__attribute__((used)) static inline u16 FUNC_1(const struct skge_hw *VAR_2, u32 VAR_3)
{
 if (FUNC_0(VAR_2))
  return VAR_3 >> VAR_1;
 else
  return VAR_3 >> VAR_0;
}
