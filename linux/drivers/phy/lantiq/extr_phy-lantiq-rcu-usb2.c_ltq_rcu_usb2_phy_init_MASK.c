
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy {int dummy; } ;
struct ltq_rcu_usb2_priv {TYPE_1__* reg_bits; int phy_reg_offset; int regmap; int ana_cfg1_reg_offset; } ;
struct TYPE_2__ {int host_endianness; int slave_endianness; int hostmode; scalar_t__ have_ana_cfg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ltq_rcu_usb2_priv* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_3)
{
 struct ltq_rcu_usb2_priv *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->reg_bits->have_ana_cfg) {
  FUNC_2(VAR_4->regmap, VAR_4->ana_cfg1_reg_offset,
   VAR_2, VAR_2);
  FUNC_2(VAR_4->regmap, VAR_4->ana_cfg1_reg_offset,
   VAR_0, 7 << VAR_1);
 }


 FUNC_2(VAR_4->regmap, VAR_4->phy_reg_offset,
      FUNC_0(VAR_4->reg_bits->hostmode), 0);


 FUNC_2(VAR_4->regmap, VAR_4->phy_reg_offset,
  FUNC_0(VAR_4->reg_bits->slave_endianness), 0);
 FUNC_2(VAR_4->regmap, VAR_4->phy_reg_offset,
  FUNC_0(VAR_4->reg_bits->host_endianness),
  FUNC_0(VAR_4->reg_bits->host_endianness));

 return 0;
}
