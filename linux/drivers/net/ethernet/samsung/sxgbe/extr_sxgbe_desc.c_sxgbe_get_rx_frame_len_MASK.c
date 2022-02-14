
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pkt_len; } ;
struct TYPE_4__ {TYPE_1__ rx_wb_des23; } ;
struct sxgbe_rx_norm_desc {TYPE_2__ rdes23; } ;



__attribute__((used)) static int FUNC_0(struct sxgbe_rx_norm_desc *VAR_0)
{
 return VAR_0->rdes23.rx_wb_des23.pkt_len;
}
