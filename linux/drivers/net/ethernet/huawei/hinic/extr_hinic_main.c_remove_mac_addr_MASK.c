
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct hinic_dev {int mgmt_lock; int vlan_bitmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct hinic_dev*,int const*,scalar_t__) ;
 int FUNC_3 (int const*) ;
 struct hinic_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct hinic_dev*,int ,struct net_device*,char*) ;
 int FUNC_6 (struct hinic_dev*,int ,struct net_device*,char*,int const,int const,int const,int const,int const,int const) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3, const u8 *VAR_4)
{
 struct hinic_dev *VAR_5 = FUNC_4(VAR_3);
 u16 VAR_6 = 0;
 int VAR_7;

 if (!FUNC_3(VAR_4))
  return -VAR_0;

 FUNC_6(VAR_5, VAR_2, VAR_3, "remove mac addr = %02x %02x %02x %02x %02x %02x\n",
     VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3], VAR_4[4], VAR_4[5]);

 FUNC_0(&VAR_5->mgmt_lock);

 do {
  VAR_7 = FUNC_2(VAR_5, VAR_4, VAR_6);
  if (VAR_7) {
   FUNC_5(VAR_5, VAR_2, VAR_3,
      "Failed to delete mac\n");
   break;
  }

  VAR_6 = FUNC_1(VAR_5->vlan_bitmap, VAR_1, VAR_6 + 1);
 } while (VAR_6 != VAR_1);

 FUNC_7(&VAR_5->mgmt_lock);
 return VAR_7;
}
