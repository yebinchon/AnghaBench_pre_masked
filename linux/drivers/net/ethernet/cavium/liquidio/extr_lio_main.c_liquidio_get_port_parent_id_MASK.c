
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_device {scalar_t__ eswitch_mode; } ;
struct netdev_phys_item_id {int id; int id_len; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int hw_addr; } ;
struct lio {TYPE_1__ linfo; struct octeon_device* oct_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lio* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,void*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_3,
       struct netdev_phys_item_id *VAR_4)
{
 struct lio *VAR_5 = FUNC_0(VAR_3);
 struct octeon_device *VAR_6 = VAR_5->oct_dev;

 if (VAR_6->eswitch_mode != VAR_0)
  return -VAR_1;

 VAR_4->id_len = VAR_2;
 FUNC_1(VAR_4->id, (void *)&VAR_5->linfo.hw_addr + 2);

 return 0;
}
