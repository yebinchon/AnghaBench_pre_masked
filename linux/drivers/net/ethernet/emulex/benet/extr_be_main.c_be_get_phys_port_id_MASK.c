
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct netdev_phys_item_id {int id_len; scalar_t__* id; } ;
struct net_device {int dummy; } ;
struct be_adapter {int * serial_num; scalar_t__ hba_port_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__*,int *,int) ;
 struct be_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4,
          struct netdev_phys_item_id *VAR_5)
{
 int VAR_6, VAR_7 = VAR_0 * VAR_1 + 1;
 struct be_adapter *VAR_8 = FUNC_1(VAR_4);
 u8 *VAR_9;

 if (VAR_3 < VAR_7)
  return -VAR_2;

 VAR_5->id[0] = VAR_8->hba_port_num + 1;
 VAR_9 = &VAR_5->id[1];
 for (VAR_6 = VAR_0 - 1; VAR_6 >= 0;
      VAR_6--, VAR_9 += VAR_1)
  FUNC_0(VAR_9, &VAR_8->serial_num[VAR_6], VAR_1);

 VAR_5->id_len = VAR_7;

 return 0;
}
