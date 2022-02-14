
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ena_com_dev {int intr_moder_rx_interval; int intr_delay_resolution; } ;


 int FUNC_0 (int ,int ,int *) ;

int FUNC_1(struct ena_com_dev *VAR_0,
            u32 VAR_1)
{
 return FUNC_0(VAR_1,
             VAR_0->intr_delay_resolution,
             &VAR_0->intr_moder_rx_interval);
}
