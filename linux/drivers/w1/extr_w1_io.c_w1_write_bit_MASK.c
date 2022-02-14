
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w1_master {TYPE_1__* bus_master; } ;
struct TYPE_2__ {int data; int (* write_bit ) (int ,int) ;} ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_7(struct w1_master *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = 0;

 if(VAR_0) FUNC_1(VAR_3);

 if (VAR_2) {
  VAR_1->bus_master->write_bit(VAR_1->bus_master->data, 0);
  FUNC_6(6);
  VAR_1->bus_master->write_bit(VAR_1->bus_master->data, 1);
  FUNC_6(64);
 } else {
  VAR_1->bus_master->write_bit(VAR_1->bus_master->data, 0);
  FUNC_6(60);
  VAR_1->bus_master->write_bit(VAR_1->bus_master->data, 1);
  FUNC_6(10);
 }

 if(VAR_0) FUNC_0(VAR_3);
}
