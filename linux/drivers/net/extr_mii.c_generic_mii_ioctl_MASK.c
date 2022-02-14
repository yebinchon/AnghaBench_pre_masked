
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_ioctl_data {int reg_num; int val_in; int phy_id; int val_out; } ;
struct mii_if_info {int reg_num_mask; int force_media; unsigned int full_duplex; int advertising; int dev; int (* mdio_write ) (int ,int ,int,int) ;int phy_id; int (* mdio_read ) (int ,int ,int) ;int phy_id_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int) ;

int FUNC_2(struct mii_if_info *VAR_4,
        struct mii_ioctl_data *VAR_5, int VAR_6,
        unsigned int *VAR_7)
{
 int VAR_8 = 0;
 unsigned int VAR_9 = 0;

 if (VAR_7)
  *VAR_7 = 0;

 VAR_5->phy_id &= VAR_4->phy_id_mask;
 VAR_5->reg_num &= VAR_4->reg_num_mask;

 switch(VAR_6) {
 case 130:
  VAR_5->phy_id = VAR_4->phy_id;


 case 129:
  VAR_5->val_out =
   VAR_4->mdio_read(VAR_4->dev, VAR_5->phy_id,
       VAR_5->reg_num);
  break;

 case 128: {
  u16 VAR_10 = VAR_5->val_in;

  if (VAR_5->phy_id == VAR_4->phy_id) {
   switch(VAR_5->reg_num) {
   case 131: {
    unsigned int VAR_11 = 0;
    if (VAR_10 & (VAR_2|VAR_0))
     VAR_4->force_media = 0;
    else
     VAR_4->force_media = 1;
    if (VAR_4->force_media &&
        (VAR_10 & VAR_1))
     VAR_11 = 1;
    if (VAR_4->full_duplex != VAR_11) {
     VAR_9 = 1;
     VAR_4->full_duplex = VAR_11;
    }
    break;
   }
   case 132:
    VAR_4->advertising = VAR_10;
    break;
   default:

    break;
   }
  }

  VAR_4->mdio_write(VAR_4->dev, VAR_5->phy_id,
       VAR_5->reg_num, VAR_10);
  break;
 }

 default:
  VAR_8 = -VAR_3;
  break;
 }

 if ((VAR_8 == 0) && (VAR_7) && (VAR_9))
  *VAR_7 = 1;

 return VAR_8;
}
