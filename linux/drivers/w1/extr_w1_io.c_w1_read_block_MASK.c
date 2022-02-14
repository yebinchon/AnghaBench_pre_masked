
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w1_master {TYPE_1__* bus_master; } ;
struct TYPE_2__ {int (* read_block ) (int ,int*,int) ;int data; } ;


 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (struct w1_master*) ;

u8 FUNC_2(struct w1_master *VAR_0, u8 *VAR_1, int VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 if (VAR_0->bus_master->read_block)
  VAR_4 = VAR_0->bus_master->read_block(VAR_0->bus_master->data, VAR_1, VAR_2);
 else {
  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
   VAR_1[VAR_3] = FUNC_1(VAR_0);
  VAR_4 = VAR_2;
 }

 return VAR_4;
}
