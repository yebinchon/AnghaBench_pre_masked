
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct fm10k_mbx_info {int rx; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct fm10k_mbx_info *VAR_0)
{
 u16 VAR_1 = FUNC_0(&VAR_0->rx);

 return VAR_1 && (FUNC_1(&VAR_0->rx) >= VAR_1);
}
