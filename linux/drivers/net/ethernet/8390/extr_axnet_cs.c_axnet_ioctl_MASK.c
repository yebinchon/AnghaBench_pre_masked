
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int base_addr; } ;
struct mii_ioctl_data {int reg_num; int val_in; int phy_id; int val_out; } ;
struct ifreq {int dummy; } ;
struct axnet_dev {int phy_id; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct axnet_dev* FUNC_0 (struct net_device*) ;



 struct mii_ioctl_data* FUNC_1 (struct ifreq*) ;
 int FUNC_2 (unsigned int,int ,int) ;
 int FUNC_3 (unsigned int,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
    struct axnet_dev *VAR_5 = FUNC_0(VAR_2);
    struct mii_ioctl_data *VAR_6 = FUNC_1(VAR_3);
    unsigned int VAR_7 = VAR_2->base_addr + VAR_0;
    switch (VAR_4) {
    case 130:
 VAR_6->phy_id = VAR_5->phy_id;

    case 129:
 VAR_6->val_out = FUNC_2(VAR_7, VAR_6->phy_id, VAR_6->reg_num & 0x1f);
 return 0;
    case 128:
 FUNC_3(VAR_7, VAR_6->phy_id, VAR_6->reg_num & 0x1f, VAR_6->val_in);
 return 0;
    }
    return -VAR_1;
}
