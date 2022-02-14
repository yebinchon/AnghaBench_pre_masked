
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct fm10k_mbx_info {int local; int tx; int pulled; int tail; scalar_t__ tail_len; } ;


 int FUNC_0 (int *,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct fm10k_mbx_info*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct fm10k_mbx_info *VAR_0, u16 VAR_1)
{
 u16 VAR_2 = VAR_0->tail_len - FUNC_2(VAR_0, VAR_1, VAR_0->tail);


 VAR_1 = FUNC_1(&VAR_0->tx, VAR_0->pulled);


 VAR_0->local = FUNC_0(&VAR_0->tx, VAR_1, VAR_2, VAR_0->local);
}
