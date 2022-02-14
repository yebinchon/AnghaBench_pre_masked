
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w1_master {TYPE_1__* bus_master; } ;
struct TYPE_2__ {int (* read_bit ) (int ) ;int data; int (* write_bit ) (int ,int) ;} ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static u8 FUNC_6(struct w1_master *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2 = 0;


 FUNC_1(VAR_2);
 VAR_0->bus_master->write_bit(VAR_0->bus_master->data, 0);
 FUNC_5(6);
 VAR_0->bus_master->write_bit(VAR_0->bus_master->data, 1);
 FUNC_5(9);

 VAR_1 = VAR_0->bus_master->read_bit(VAR_0->bus_master->data);
 FUNC_0(VAR_2);

 FUNC_5(55);

 return VAR_1 & 0x1;
}
