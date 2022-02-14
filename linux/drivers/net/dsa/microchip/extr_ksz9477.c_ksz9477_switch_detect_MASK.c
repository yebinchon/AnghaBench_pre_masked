
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ksz_device {int mib_port_cnt; int phy_port_cnt; int chip_id; int features; } ;


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
 int FUNC_0 (struct ksz_device*,int ,int*) ;
 int FUNC_1 (struct ksz_device*,int ,int*) ;
 int FUNC_2 (struct ksz_device*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ksz_device *VAR_10)
{
 u8 VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 u32 VAR_14;
 int VAR_15;


 VAR_15 = FUNC_1(VAR_10, VAR_5, &VAR_11);
 if (VAR_15)
  return VAR_15;

 VAR_11 &= ~VAR_6;
 VAR_15 = FUNC_2(VAR_10, VAR_5, VAR_11);
 if (VAR_15)
  return VAR_15;


 VAR_15 = FUNC_0(VAR_10, VAR_3, &VAR_14);
 if (VAR_15)
  return VAR_15;
 VAR_15 = FUNC_1(VAR_10, VAR_4, &VAR_11);
 if (VAR_15)
  return VAR_15;


 VAR_10->mib_port_cnt = VAR_9;
 VAR_10->phy_port_cnt = 5;


 VAR_10->features = VAR_0;

 VAR_12 = (u8)(VAR_14 >> 16);
 VAR_13 = (u8)(VAR_14 >> 8);
 if ((VAR_13 & 0xf) == 3) {

  VAR_10->features |= VAR_1;


  if (VAR_11 & VAR_8)
   VAR_10->features &= ~VAR_0;
  VAR_10->mib_port_cnt = 3;
  VAR_10->phy_port_cnt = 2;
 } else {

  VAR_10->features |= VAR_2;


  if (!(VAR_11 & VAR_7))
   VAR_10->features &= ~VAR_0;
 }


 VAR_14 = (VAR_12 << 16) | (VAR_13 << 8);

 VAR_10->chip_id = VAR_14;

 return 0;
}
