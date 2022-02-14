
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ksz_device {int phy_port_cnt; int features; } ;
struct dsa_switch {struct ksz_device* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ksz_device*,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct dsa_switch *VAR_2, int VAR_3, int VAR_4,
          u16 VAR_5)
{
 struct ksz_device *VAR_6 = VAR_2->priv;


 if (VAR_3 >= VAR_6->phy_port_cnt)
  return 0;


 if (!(VAR_6->features & VAR_0) && VAR_4 == VAR_1)
  return 0;
 FUNC_0(VAR_6, VAR_3, 0x100 + (VAR_4 << 1), VAR_5);

 return 0;
}
