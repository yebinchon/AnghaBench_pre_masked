
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w1_master {TYPE_1__* bus_master; } ;
struct TYPE_2__ {int (* read_byte ) (int ) ;int data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct w1_master*,int) ;

u8 FUNC_2(struct w1_master *VAR_0)
{
 int VAR_1;
 u8 VAR_2 = 0;

 if (VAR_0->bus_master->read_byte)
  VAR_2 = VAR_0->bus_master->read_byte(VAR_0->bus_master->data);
 else
  for (VAR_1 = 0; VAR_1 < 8; ++VAR_1)
   VAR_2 |= (FUNC_1(VAR_0,1) << VAR_1);

 return VAR_2;
}
