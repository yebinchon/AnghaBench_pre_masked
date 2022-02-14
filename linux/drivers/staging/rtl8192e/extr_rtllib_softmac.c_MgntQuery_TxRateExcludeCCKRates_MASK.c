
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct TYPE_2__ {size_t rates_len; int* rates; } ;
struct rtllib_device {int dev; TYPE_1__ current_network; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;

u8
FUNC_2(struct rtllib_device *VAR_0)
{
 u16 VAR_1;
 u8 VAR_2 = 0;
 u8 VAR_3;


 for (VAR_1 = 0; VAR_1 < VAR_0->current_network.rates_len; VAR_1++) {
  VAR_3 = VAR_0->current_network.rates[VAR_1]&0x7F;
  if (!FUNC_1(VAR_3)) {
   if (VAR_2 == 0) {
    VAR_2 = VAR_3;
   } else {
    if (VAR_3 < VAR_2)
     VAR_2 = VAR_3;
   }
  }
 }

 if (VAR_2 == 0) {
  VAR_2 = 12;
  FUNC_0(VAR_0->dev, "No BasicRate found!!\n");
 }
 return VAR_2;
}
