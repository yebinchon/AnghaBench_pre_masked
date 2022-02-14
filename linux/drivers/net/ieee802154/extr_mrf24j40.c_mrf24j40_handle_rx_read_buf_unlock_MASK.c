
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * complete; } ;
struct mrf24j40 {int* rx_buf; TYPE_1__ rx_msg; int spi; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mrf24j40*) ;
 int FUNC_3 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct mrf24j40 *VAR_1)
{
 int VAR_2;


 VAR_1->rx_msg.complete = ((void*)0);
 VAR_1->rx_buf[0] = FUNC_0(VAR_0);
 VAR_1->rx_buf[1] = 0x00;
 VAR_2 = FUNC_3(VAR_1->spi, &VAR_1->rx_msg);
 if (VAR_2)
  FUNC_1(FUNC_2(VAR_1), "failed to unlock rx buffer\n");
}
