
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skge_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct skge_hw const*) ;

__attribute__((used)) static inline int FUNC_1(const struct skge_hw *VAR_4, u32 VAR_5)
{
 if (FUNC_0(VAR_4))
  return (VAR_5 & (VAR_3 | VAR_2)) != 0;
 else
  return (VAR_5 & VAR_0) ||
   (VAR_5 & VAR_1) == 0;
}
