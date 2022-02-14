
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_wq {int num_q_pages; } ;
struct hinic_cmdq_pages {int hwif; } ;


 int FUNC_0 (struct hinic_cmdq_pages*) ;
 int FUNC_1 (struct hinic_wq*,int ,int ) ;

void FUNC_2(struct hinic_cmdq_pages *VAR_0,
    struct hinic_wq *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_1(&VAR_1[VAR_3], VAR_0->hwif, VAR_1[VAR_3].num_q_pages);

 FUNC_0(VAR_0);
}
