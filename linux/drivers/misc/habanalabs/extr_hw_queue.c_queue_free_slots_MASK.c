
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hl_hw_queue {int pi; int ci; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(struct hl_hw_queue *VAR_0, u32 VAR_1)
{
 int VAR_2 = (VAR_0->pi - VAR_0->ci);

 if (VAR_2 >= 0)
  return (VAR_1 - VAR_2);
 else
  return (FUNC_0(VAR_2) - VAR_1);
}
