
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ftgmac100 {int cur_speed; scalar_t__ tx_pointer; scalar_t__ tx_clean_pointer; scalar_t__ rx_pointer; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct ftgmac100*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct ftgmac100 *VAR_3)
{
 u32 VAR_4 = 0;

 switch (VAR_3->cur_speed) {
 case 130:
 case 0:
  break;

 case 129:
  VAR_4 |= VAR_1;
  break;

 case 128:
  VAR_4 |= VAR_2;
  break;
 default:
  FUNC_1(VAR_3->netdev, "Unknown speed %d !\n",
      VAR_3->cur_speed);
  break;
 }


 VAR_3->rx_pointer = 0;
 VAR_3->tx_clean_pointer = 0;
 VAR_3->tx_pointer = 0;


 if (FUNC_0(VAR_3, VAR_4))
  return -VAR_0;
 FUNC_2(10, 1000);
 return FUNC_0(VAR_3, VAR_4);
}
