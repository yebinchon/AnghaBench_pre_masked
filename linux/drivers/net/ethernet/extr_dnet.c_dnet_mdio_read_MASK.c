
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_bus {struct dnet* priv; } ;
struct dnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct dnet*,int ) ;
 int FUNC_2 (struct dnet*,int ,int) ;
 int FUNC_3 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_3, int VAR_4, int VAR_5)
{
 struct dnet *VAR_6 = VAR_3->priv;
 u16 VAR_7;

 while (!(FUNC_1(VAR_6, VAR_1)
    & VAR_0))
  FUNC_0();


 VAR_4 &= 0x1f;
 VAR_5 &= 0x1f;


 VAR_7 = (VAR_4 << 8);
 VAR_7 |= VAR_5;


 FUNC_2(VAR_6, VAR_1, VAR_7);


 while (!(FUNC_1(VAR_6, VAR_1)
    & VAR_0))
  FUNC_0();

 VAR_7 = FUNC_1(VAR_6, VAR_2);

 FUNC_3("mdio_read %02x:%02x <- %04x\n", VAR_4, VAR_5, VAR_7);

 return VAR_7;
}
