
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int complete; } ;
struct TYPE_3__ {int len; } ;
struct mrf24j40 {int* rx_buf; TYPE_2__ rx_msg; int spi; TYPE_1__ rx_trx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct mrf24j40*) ;
 int FUNC_3 (struct mrf24j40*) ;
 int FUNC_4 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(void *VAR_2)
{
 struct mrf24j40 *VAR_3 = VAR_2;
 u16 VAR_4;
 int VAR_5;


 VAR_3->rx_msg.complete = VAR_1;
 VAR_3->rx_trx.len = 3;
 VAR_4 = FUNC_0(VAR_0);
 VAR_3->rx_buf[0] = VAR_4 >> 8 & 0xff;
 VAR_3->rx_buf[1] = VAR_4 & 0xff;

 VAR_5 = FUNC_4(VAR_3->spi, &VAR_3->rx_msg);
 if (VAR_5) {
  FUNC_1(FUNC_3(VAR_3), "failed to read rx buffer length\n");
  FUNC_2(VAR_3);
 }
}
