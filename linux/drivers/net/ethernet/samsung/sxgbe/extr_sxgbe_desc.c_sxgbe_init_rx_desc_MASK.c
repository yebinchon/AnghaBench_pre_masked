
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int own_bit; int int_on_com; } ;
struct TYPE_4__ {TYPE_1__ rx_rd_des23; } ;
struct sxgbe_rx_norm_desc {TYPE_2__ rdes23; } ;



__attribute__((used)) static void FUNC_0(struct sxgbe_rx_norm_desc *VAR_0, int VAR_1,
          int VAR_2, int VAR_3)
{
 VAR_0->rdes23.rx_rd_des23.own_bit = 1;
 if (VAR_1)
  VAR_0->rdes23.rx_rd_des23.int_on_com = VAR_1;
}
