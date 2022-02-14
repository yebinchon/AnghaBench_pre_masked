
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct lan9303 {int phy_addr_base; TYPE_1__* ops; } ;
struct dsa_switch {struct lan9303* priv; } ;
struct TYPE_2__ {int (* phy_write ) (struct lan9303*,int,int,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct lan9303*,int,int ) ;
 int FUNC_1 (struct lan9303*,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct dsa_switch *VAR_1, int VAR_2, int VAR_3,
        u16 VAR_4)
{
 struct lan9303 *VAR_5 = VAR_1->priv;
 int VAR_6 = VAR_5->phy_addr_base;

 if (VAR_2 == VAR_6)
  return FUNC_0(VAR_5, VAR_3, VAR_4);
 if (VAR_2 > VAR_6 + 2)
  return -VAR_0;

 return VAR_5->ops->phy_write(VAR_5, VAR_2, VAR_3, VAR_4);
}
