
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {struct ag71xx* priv; } ;
struct ag71xx {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ag71xx*) ;
 int FUNC_1 (struct ag71xx*,int ) ;
 int FUNC_2 (struct ag71xx*,int ,int) ;
 int VAR_5 ;
 int FUNC_3 (struct ag71xx*,int ,int ,char*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_6, int VAR_7, int VAR_8)
{
 struct ag71xx *VAR_9 = VAR_6->priv;
 int VAR_10, VAR_11;

 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_2(VAR_9, VAR_0,
    ((VAR_7 & 0x1f) << VAR_3) | (VAR_8 & 0xff));

 FUNC_2(VAR_9, VAR_1, VAR_4);

 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_11 = FUNC_1(VAR_9, VAR_2);

 FUNC_2(VAR_9, VAR_1, 0);

 FUNC_3(VAR_9, VAR_5, VAR_9->ndev, "mii_read: addr=%04x, reg=%04x, value=%04x\n",
    VAR_7, VAR_8, VAR_11);

 return VAR_11;
}
