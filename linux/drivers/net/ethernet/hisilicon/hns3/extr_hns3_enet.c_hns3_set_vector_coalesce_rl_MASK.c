
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int gl_adapt_enable; } ;
struct TYPE_8__ {TYPE_3__ coal; } ;
struct TYPE_5__ {int gl_adapt_enable; } ;
struct TYPE_6__ {TYPE_1__ coal; } ;
struct hns3_enet_tqp_vector {scalar_t__ mask_addr; TYPE_4__ rx_group; TYPE_2__ tx_group; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct hns3_enet_tqp_vector *VAR_2,
     u32 VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3);






 if (VAR_4 > 0 && !VAR_2->tx_group.coal.gl_adapt_enable &&
     !VAR_2->rx_group.coal.gl_adapt_enable)



  VAR_4 |= VAR_0;

 FUNC_1(VAR_4, VAR_2->mask_addr + VAR_1);
}
