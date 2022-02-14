
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct qlcnic_adapter {int dummy; } ;


 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;

__attribute__((used)) static inline u32 FUNC_1(struct qlcnic_adapter *VAR_0,
     u16 VAR_1, u8 VAR_2)
{
 if (FUNC_0(VAR_0))
  return VAR_1 | (VAR_2 << 15);
 else
  return VAR_1;
}
