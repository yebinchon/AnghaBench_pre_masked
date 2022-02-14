
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int w1_slave_found_callback ;
typedef int u8 ;
struct w1_master {TYPE_1__* bus_master; int attempts; } ;
struct TYPE_2__ {int data; int (* search ) (int ,struct w1_master*,int ,int ) ;} ;


 int FUNC_0 (int ,struct w1_master*,int ,int ) ;
 int FUNC_1 (struct w1_master*,int ,int ) ;

void FUNC_2(struct w1_master *VAR_0, u8 VAR_1, w1_slave_found_callback VAR_2)
{
 VAR_0->attempts++;
 if (VAR_0->bus_master->search)
  VAR_0->bus_master->search(VAR_0->bus_master->data, VAR_0,
   VAR_1, VAR_2);
 else
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
