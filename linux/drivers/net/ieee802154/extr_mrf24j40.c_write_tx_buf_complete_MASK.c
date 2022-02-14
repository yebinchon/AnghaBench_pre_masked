
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * complete; } ;
struct mrf24j40 {TYPE_1__ tx_post_msg; int spi; int * tx_post_buf; int tx_skb; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct mrf24j40*) ;
 int FUNC_6 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(void *VAR_4)
{
 struct mrf24j40 *VAR_5 = VAR_4;
 __le16 VAR_6 = FUNC_2(VAR_5->tx_skb);
 u8 VAR_7 = VAR_2;
 int VAR_8;

 if (FUNC_4(VAR_6))
  VAR_7 |= VAR_1;

 if (FUNC_3(VAR_6))
  VAR_7 |= VAR_0;

 VAR_5->tx_post_msg.complete = ((void*)0);
 VAR_5->tx_post_buf[0] = FUNC_0(VAR_3);
 VAR_5->tx_post_buf[1] = VAR_7;

 VAR_8 = FUNC_6(VAR_5->spi, &VAR_5->tx_post_msg);
 if (VAR_8)
  FUNC_1(FUNC_5(VAR_5), "SPI write Failed for transmit buf\n");
}
