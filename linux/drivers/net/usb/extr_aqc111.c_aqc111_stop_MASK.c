
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int net; struct aqc111_data* driver_priv; } ;
struct aqc111_data {int phy_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct usbnet*,int ,int ,int,int *) ;
 int FUNC_1 (struct usbnet*,int ,int ,int,int *) ;
 int FUNC_2 (struct usbnet*,int ,int ,int ,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_6)
{
 struct aqc111_data *VAR_7 = VAR_6->driver_priv;
 u16 VAR_8 = 0;

 FUNC_0(VAR_6, VAR_0, VAR_4,
     2, &VAR_8);
 VAR_8 &= ~VAR_3;
 FUNC_1(VAR_6, VAR_0, VAR_4,
      2, &VAR_8);
 VAR_8 = 0;
 FUNC_1(VAR_6, VAR_0, VAR_5, 2, &VAR_8);


 VAR_7->phy_cfg |= VAR_1;
 FUNC_2(VAR_6, VAR_2, 0, 0,
      &VAR_7->phy_cfg);

 FUNC_3(VAR_6->net);

 return 0;
}
