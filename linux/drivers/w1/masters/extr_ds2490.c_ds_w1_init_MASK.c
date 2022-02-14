
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct w1_bus_master {int dummy; } ;
struct TYPE_3__ {int * search; int * set_pullup; int * reset_bus; int * write_block; int * read_block; int * write_byte; int * read_byte; int * touch_bit; struct ds_device* data; } ;
struct ds_device {TYPE_1__ master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ds_device*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct ds_device *VAR_8)
{
 FUNC_1(&VAR_8->master, 0, sizeof(struct w1_bus_master));
 FUNC_0(VAR_8);

 VAR_8->master.data = VAR_8;
 VAR_8->master.touch_bit = &VAR_5;
 VAR_8->master.read_byte = &VAR_1;
 VAR_8->master.write_byte = &VAR_7;
 VAR_8->master.read_block = &VAR_0;
 VAR_8->master.write_block = &VAR_6;
 VAR_8->master.reset_bus = &VAR_2;
 VAR_8->master.set_pullup = &VAR_4;
 VAR_8->master.search = &VAR_3;

 return FUNC_2(&VAR_8->master);
}
