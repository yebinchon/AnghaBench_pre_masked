
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct mii_bus {struct lan78xx_net* priv; } ;
struct lan78xx_net {int intf; int phy_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lan78xx_net*) ;
 int FUNC_1 (struct lan78xx_net*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct mii_bus *VAR_3, int VAR_4, int VAR_5,
     u16 VAR_6)
{
 struct lan78xx_net *VAR_7 = VAR_3->priv;
 u32 VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_5(VAR_7->intf);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_3(&VAR_7->phy_mutex);


 VAR_10 = FUNC_0(VAR_7);
 if (VAR_10 < 0)
  goto done;

 VAR_8 = (u32)VAR_6;
 VAR_10 = FUNC_1(VAR_7, VAR_1, VAR_8);


 VAR_9 = FUNC_2(VAR_4, VAR_5, VAR_2);
 VAR_10 = FUNC_1(VAR_7, VAR_0, VAR_9);

 VAR_10 = FUNC_0(VAR_7);
 if (VAR_10 < 0)
  goto done;

done:
 FUNC_4(&VAR_7->phy_mutex);
 FUNC_6(VAR_7->intf);
 return 0;
}
