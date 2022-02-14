
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union fm10k_rx_desc {int dummy; } fm10k_rx_desc ;
typedef int u32 ;
struct fm10k_ring {int next_to_clean; int count; } ;


 int VAR_0 ;
 int FUNC_0 (struct fm10k_ring*,int) ;
 int FUNC_1 (union fm10k_rx_desc*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct fm10k_ring *VAR_1,
        union fm10k_rx_desc *VAR_2)
{
 u32 VAR_3 = VAR_1->next_to_clean + 1;


 VAR_3 = (VAR_3 < VAR_1->count) ? VAR_3 : 0;
 VAR_1->next_to_clean = VAR_3;

 FUNC_3(FUNC_0(VAR_1, VAR_3));

 if (FUNC_2(FUNC_1(VAR_2, VAR_0)))
  return 0;

 return 1;
}
