
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_rx_swbd {int dummy; } ;
struct enetc_bdr {size_t next_to_alloc; struct enetc_rx_swbd* rx_swbd; } ;


 int FUNC_0 (struct enetc_bdr*,size_t*) ;

__attribute__((used)) static void FUNC_1(struct enetc_bdr *VAR_0,
        struct enetc_rx_swbd *VAR_1)
{
 struct enetc_rx_swbd *VAR_2;

 VAR_2 = &VAR_0->rx_swbd[VAR_0->next_to_alloc];


 FUNC_0(VAR_0, &VAR_0->next_to_alloc);


 *VAR_2 = *VAR_1;
}
