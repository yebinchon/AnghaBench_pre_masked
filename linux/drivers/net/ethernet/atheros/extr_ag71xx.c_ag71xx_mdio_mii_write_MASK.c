
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_bus {struct ag71xx* priv; } ;
struct ag71xx {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ag71xx*) ;
 int FUNC_1 (struct ag71xx*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (struct ag71xx*,int ,int ,char*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_4, int VAR_5, int VAR_6,
     u16 VAR_7)
{
 struct ag71xx *VAR_8 = VAR_4->priv;

 FUNC_2(VAR_8, VAR_3, VAR_8->ndev, "mii_write: addr=%04x, reg=%04x, value=%04x\n",
    VAR_5, VAR_6, VAR_7);

 FUNC_1(VAR_8, VAR_0,
    ((VAR_5 & 0x1f) << VAR_2) | (VAR_6 & 0xff));
 FUNC_1(VAR_8, VAR_1, VAR_7);

 return FUNC_0(VAR_8);
}
