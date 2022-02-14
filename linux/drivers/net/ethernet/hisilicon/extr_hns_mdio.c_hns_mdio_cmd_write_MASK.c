
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct hns_mdio_device {int dummy; } ;


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
 int FUNC_0 (struct hns_mdio_device*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hns_mdio_device *VAR_10,
          u8 VAR_11, u8 VAR_12, u8 VAR_13, u16 VAR_14)
{
 u32 VAR_15;
 u8 VAR_16 = VAR_11 ? VAR_9 : VAR_8;

 VAR_15 = VAR_16 << VAR_6;
 VAR_15 |= VAR_12 << VAR_2;
 VAR_15 |=
  (VAR_13 & VAR_3) << VAR_4;
 VAR_15 |= (VAR_14 & VAR_0) << VAR_1;
 VAR_15 |= 1 << VAR_5;

 FUNC_0(VAR_10, VAR_7, VAR_15);
}
