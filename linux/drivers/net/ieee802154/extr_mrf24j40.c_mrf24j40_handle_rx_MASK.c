
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int complete; } ;
struct TYPE_3__ {int len; } ;
struct mrf24j40 {TYPE_2__ rx_msg; int spi; int * rx_buf; TYPE_1__ rx_trx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct mrf24j40 *VAR_3)
{



 VAR_3->rx_msg.complete = VAR_2;
 VAR_3->rx_trx.len = 2;
 VAR_3->rx_buf[0] = FUNC_0(VAR_1);
 VAR_3->rx_buf[1] = VAR_0;

 return FUNC_1(VAR_3->spi, &VAR_3->rx_msg);
}
