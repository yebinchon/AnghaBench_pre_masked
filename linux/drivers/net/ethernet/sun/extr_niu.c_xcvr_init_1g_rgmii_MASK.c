
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct niu {int phy_addr; } ;


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
 int FUNC_0 (struct niu*,int ,int ) ;
 int FUNC_1 (struct niu*) ;
 int FUNC_2 (struct niu*,int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct niu *VAR_11)
{
 int VAR_12;
 u64 VAR_13;
 u16 VAR_14, VAR_15, VAR_16;

 VAR_13 = FUNC_3(VAR_5);
 VAR_13 &= ~VAR_6;
 FUNC_4(VAR_5, VAR_13);

 VAR_12 = FUNC_1(VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_11, VAR_11->phy_addr, VAR_8);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_15 = VAR_12;

 VAR_16 = 0;
 if (VAR_15 & VAR_3) {
  VAR_12 = FUNC_0(VAR_11, VAR_11->phy_addr, VAR_10);
  if (VAR_12 < 0)
   return VAR_12;
  VAR_16 = VAR_12;
 }

 VAR_14 = 0;
 VAR_12 = FUNC_2(VAR_11, VAR_11->phy_addr, VAR_7, VAR_14);
 if (VAR_12)
  return VAR_12;

 if (VAR_15 & VAR_3) {
  u16 VAR_17 = 0;

  if (VAR_16 & VAR_4)
   VAR_17 |= VAR_0;
  VAR_12 = FUNC_2(VAR_11, VAR_11->phy_addr, VAR_9, VAR_17);
  if (VAR_12)
   return VAR_12;
 }

 VAR_14 = (VAR_2 | VAR_1);

 VAR_12 = FUNC_2(VAR_11, VAR_11->phy_addr, VAR_7, VAR_14);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_11, VAR_11->phy_addr, VAR_7);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_14 = FUNC_0(VAR_11, VAR_11->phy_addr, VAR_7);

 VAR_12 = FUNC_0(VAR_11, VAR_11->phy_addr, VAR_8);
 if (VAR_12 < 0)
  return VAR_12;

 return 0;
}
