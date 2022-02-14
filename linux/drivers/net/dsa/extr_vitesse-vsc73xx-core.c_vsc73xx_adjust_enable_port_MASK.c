
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vsc73xx {int dummy; } ;
struct phy_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (struct vsc73xx*,int ,int,int ,int,int) ;
 int FUNC_3 (struct vsc73xx*,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_4(struct vsc73xx *VAR_13,
           int VAR_14, struct phy_device *VAR_15,
           u32 VAR_16)
{
 u32 VAR_17 = VAR_16;
 u8 VAR_18;


 VAR_17 |= VAR_6;
 FUNC_3(VAR_13, VAR_1, VAR_14, VAR_5, VAR_17);


 FUNC_1(&VAR_18, 1);
 VAR_17 |= VAR_18 << VAR_9;
 VAR_17 |= VAR_8;
 VAR_17 |= VAR_11;
 FUNC_3(VAR_13, VAR_1, VAR_14, VAR_5, VAR_17);






 FUNC_3(VAR_13, VAR_1, VAR_14, VAR_2,
        VAR_4 |
        VAR_3 |
        0xff);


 FUNC_2(VAR_13, VAR_0, 0,
       VAR_12, FUNC_0(VAR_14), 0);


 FUNC_2(VAR_13, VAR_1, VAR_14,
       VAR_5,
       VAR_6 | VAR_8 |
       VAR_10 | VAR_7,
       VAR_10 | VAR_7);
}
