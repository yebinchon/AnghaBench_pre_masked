
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w1_master {TYPE_1__* bus_master; } ;
struct TYPE_2__ {int (* triplet ) (int ,int) ;scalar_t__ touch_bit; int data; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct w1_master*,int) ;
 int FUNC_2 (struct w1_master*,int) ;

u8 FUNC_3(struct w1_master *VAR_0, int VAR_1)
{
 if (VAR_0->bus_master->triplet)
  return VAR_0->bus_master->triplet(VAR_0->bus_master->data, VAR_1);
 else {
  u8 VAR_2 = FUNC_1(VAR_0, 1);
  u8 VAR_3 = FUNC_1(VAR_0, 1);
  u8 VAR_4;

  if (VAR_2 && VAR_3)
   return 0x03;

  if (!VAR_2 && !VAR_3) {

   VAR_4 = VAR_1 ? 0x04 : 0;
  } else {

   VAR_1 = VAR_2;
   VAR_4 = VAR_2 ? 0x05 : 0x02;
  }

  if (VAR_0->bus_master->touch_bit)
   FUNC_1(VAR_0, VAR_1);
  else
   FUNC_2(VAR_0, VAR_1);
  return VAR_4;
 }
}
