
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ena_ring {int ena_com_io_cq; int smoothed_interval; int ena_dev; } ;
struct ena_eth_io_intr_reg {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct ena_eth_io_intr_reg*) ;
 int FUNC_3 (struct ena_eth_io_intr_reg*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ena_ring *VAR_0,
     struct ena_ring *VAR_1)
{
 struct ena_eth_io_intr_reg VAR_2;
 u32 VAR_3 = FUNC_0(VAR_1->ena_dev) ?
  VAR_1->smoothed_interval :
  FUNC_1(VAR_1->ena_dev);




 FUNC_3(&VAR_2,
    VAR_3,
    VAR_0->smoothed_interval,
    1);





 FUNC_2(VAR_1->ena_com_io_cq, &VAR_2);
}
