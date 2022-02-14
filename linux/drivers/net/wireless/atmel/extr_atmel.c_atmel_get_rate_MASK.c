
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int fixed; int value; } ;
struct atmel_private {int tx_rate; scalar_t__ auto_tx_rate; } ;


 struct atmel_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
    struct iw_request_info *VAR_1,
    struct iw_param *VAR_2,
    char *VAR_3)
{
 struct atmel_private *VAR_4 = FUNC_0(VAR_0);

 if (VAR_4->auto_tx_rate) {
  VAR_2->fixed = 0;
  VAR_2->value = 11000000;
 } else {
  VAR_2->fixed = 1;
  switch (VAR_4->tx_rate) {
  case 0:
   VAR_2->value = 1000000;
   break;
  case 1:
   VAR_2->value = 2000000;
   break;
  case 2:
   VAR_2->value = 5500000;
   break;
  case 3:
   VAR_2->value = 11000000;
   break;
  }
 }
 return 0;
}
