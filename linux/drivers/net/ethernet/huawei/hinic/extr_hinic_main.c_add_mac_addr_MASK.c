
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct hinic_dev {int mgmt_lock; int vlan_bitmap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct hinic_dev*,int const*,scalar_t__) ;
 struct hinic_dev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct hinic_dev*,int ,struct net_device*,char*) ;
 int FUNC_5 (struct hinic_dev*,int ,struct net_device*,char*,int const,int const,int const,int const,int const,int const) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2, const u8 *VAR_3)
{
 struct hinic_dev *VAR_4 = FUNC_3(VAR_2);
 u16 VAR_5 = 0;
 int VAR_6;

 FUNC_5(VAR_4, VAR_1, VAR_2, "set mac addr = %02x %02x %02x %02x %02x %02x\n",
     VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3], VAR_3[4], VAR_3[5]);

 FUNC_0(&VAR_4->mgmt_lock);

 do {
  VAR_6 = FUNC_2(VAR_4, VAR_3, VAR_5);
  if (VAR_6) {
   FUNC_4(VAR_4, VAR_1, VAR_2, "Failed to add mac\n");
   break;
  }

  VAR_5 = FUNC_1(VAR_4->vlan_bitmap, VAR_0, VAR_5 + 1);
 } while (VAR_5 != VAR_0);

 FUNC_6(&VAR_4->mgmt_lock);
 return VAR_6;
}
