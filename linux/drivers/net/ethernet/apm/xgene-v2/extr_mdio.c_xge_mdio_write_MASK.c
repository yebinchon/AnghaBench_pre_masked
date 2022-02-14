
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct xge_pdata {int dummy; } ;
struct mii_bus {int dev; struct xge_pdata* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct xge_pdata*,int ) ;
 int FUNC_4 (struct xge_pdata*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct mii_bus *VAR_7, int VAR_8, int VAR_9, u16 VAR_10)
{
 struct xge_pdata *VAR_11 = VAR_7->priv;
 u32 VAR_12, VAR_13 = 0;
 u8 VAR_14 = 10;

 FUNC_0(&VAR_13, VAR_5, VAR_8);
 FUNC_0(&VAR_13, VAR_6, VAR_9);
 FUNC_4(VAR_11, VAR_1, VAR_13);

 FUNC_4(VAR_11, VAR_3, VAR_10);
 do {
  FUNC_2(5, 10);
  VAR_12 = FUNC_3(VAR_11, VAR_4);
 } while ((VAR_12 & VAR_2) && VAR_14--);

 if (VAR_12 & VAR_2) {
  FUNC_1(&VAR_7->dev, "MII_MGMT write failed\n");
  return -VAR_0;
 }

 return 0;
}
