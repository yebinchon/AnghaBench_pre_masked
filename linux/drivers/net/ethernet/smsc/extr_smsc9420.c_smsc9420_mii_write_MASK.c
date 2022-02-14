
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct smsc9420_pdata {int phy_lock; int dev; } ;
struct mii_bus {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct smsc9420_pdata*,int ,int ,char*) ;
 int FUNC_1 (struct smsc9420_pdata*,int ) ;
 int FUNC_2 (struct smsc9420_pdata*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct mii_bus *VAR_6, int VAR_7, int VAR_8,
      u16 VAR_9)
{
 struct smsc9420_pdata *VAR_10 = (struct smsc9420_pdata *)VAR_6->priv;
 unsigned long VAR_11;
 u32 VAR_12;
 int VAR_13, VAR_14 = -VAR_0;

 FUNC_3(&VAR_10->phy_lock, VAR_11);


 if ((FUNC_1(VAR_10, VAR_1) & VAR_2)) {
  FUNC_0(VAR_10, VAR_5, VAR_10->dev, "MII is busy???\n");
  goto out;
 }


 FUNC_2(VAR_10, VAR_4, (u32)VAR_9);


 VAR_12 = ((VAR_7 & 0x1F) << 11) | ((VAR_8 & 0x1F) << 6) |
  VAR_3;
 FUNC_2(VAR_10, VAR_1, VAR_12);


 for (VAR_13 = 0; VAR_13 < 5; VAR_13++) {
  if (!(FUNC_1(VAR_10, VAR_1) &
   VAR_2)) {
   VAR_14 = 0;
   goto out;
  }
  FUNC_5(10);
 }

 FUNC_0(VAR_10, VAR_5, VAR_10->dev, "MII busy timeout!\n");

out:
 FUNC_4(&VAR_10->phy_lock, VAR_11);
 return VAR_14;
}
