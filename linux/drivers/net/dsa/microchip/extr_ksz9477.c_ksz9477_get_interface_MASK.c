
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ksz_device {int phy_port_cnt; } ;
typedef int phy_interface_t ;


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
 int FUNC_0 (struct ksz_device*,int) ;
 int FUNC_1 (struct ksz_device*,int) ;
 int FUNC_2 (struct ksz_device*,int,int ,int*) ;

__attribute__((used)) static phy_interface_t FUNC_3(struct ksz_device *VAR_11, int VAR_12)
{
 phy_interface_t VAR_13;
 bool VAR_14;
 int VAR_15;
 u8 VAR_16;

 if (VAR_12 < VAR_11->phy_port_cnt)
  return VAR_2;
 FUNC_2(VAR_11, VAR_12, VAR_10, &VAR_16);
 VAR_14 = FUNC_0(VAR_11, VAR_16);
 VAR_15 = FUNC_1(VAR_11, VAR_16);
 switch (VAR_15) {
 case 2:
  VAR_13 = VAR_0;
  if (VAR_14)
   break;

 case 0:
  VAR_13 = VAR_1;
  break;
 case 1:
  VAR_13 = VAR_7;
  break;
 default:
  VAR_13 = VAR_3;
  if (VAR_16 & VAR_8)
   VAR_13 = VAR_6;
  if (VAR_16 & VAR_9) {
   VAR_13 = VAR_5;
   if (VAR_16 & VAR_8)
    VAR_13 = VAR_4;
  }
  break;
 }
 return VAR_13;
}
