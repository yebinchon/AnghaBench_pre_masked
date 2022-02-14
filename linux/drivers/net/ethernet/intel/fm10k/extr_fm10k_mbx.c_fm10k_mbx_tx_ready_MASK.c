
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct fm10k_mbx_info {scalar_t__ state; int tx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct fm10k_mbx_info *VAR_1, u16 VAR_2)
{
 u16 VAR_3 = FUNC_0(&VAR_1->tx);

 return (VAR_1->state == VAR_0) && (VAR_3 >= VAR_2);
}
