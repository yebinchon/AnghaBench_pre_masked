
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_bus {struct lan78xx_net* priv; } ;
struct lan78xx_net {int intf; int phy_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lan78xx_net*) ;
 int FUNC_1 (struct lan78xx_net*,int ,int*) ;
 int FUNC_2 (struct lan78xx_net*,int ,int) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct mii_bus *VAR_3, int VAR_4, int VAR_5)
{
 struct lan78xx_net *VAR_6 = VAR_3->priv;
 u32 VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_6(VAR_6->intf);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_4(&VAR_6->phy_mutex);


 VAR_9 = FUNC_0(VAR_6);
 if (VAR_9 < 0)
  goto done;


 VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_2);
 VAR_9 = FUNC_2(VAR_6, VAR_0, VAR_8);

 VAR_9 = FUNC_0(VAR_6);
 if (VAR_9 < 0)
  goto done;

 VAR_9 = FUNC_1(VAR_6, VAR_1, &VAR_7);

 VAR_9 = (int)(VAR_7 & 0xFFFF);

done:
 FUNC_5(&VAR_6->phy_mutex);
 FUNC_7(VAR_6->intf);

 return VAR_9;
}
