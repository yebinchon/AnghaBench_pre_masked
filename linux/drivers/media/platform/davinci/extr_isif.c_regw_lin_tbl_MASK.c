
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ linear_tbl1_addr; scalar_t__ linear_tbl0_addr; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline void FUNC_1(u32 VAR_1, u32 VAR_2, int VAR_3)
{
 if (!VAR_3)
  FUNC_0(VAR_1, VAR_0.linear_tbl0_addr + VAR_2);
 else
  FUNC_0(VAR_1, VAR_0.linear_tbl1_addr + VAR_2);
}
