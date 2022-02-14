
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skge_hw {scalar_t__ chip_id; scalar_t__ chip_rev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct skge_hw const*) ;

__attribute__((used)) static u32 FUNC_1(const struct skge_hw *VAR_3)
{
 if (FUNC_0(VAR_3))
  return 0;

 if (VAR_3->chip_id == VAR_0 && VAR_3->chip_rev == 0)
  return 0;

 return VAR_1 | VAR_2;
}
