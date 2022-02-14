
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

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_3, int VAR_4, int VAR_5,
      u16 VAR_6)
{
 struct dnet *VAR_7 = VAR_3->priv;
 u16 VAR_8;

 FUNC_3("mdio_write %02x:%02x <- %04x\n", VAR_4, VAR_5, VAR_6);

 while (!(FUNC_1(VAR_7, VAR_1)
    & VAR_0))
  FUNC_0();


 VAR_8 = (1 << 13);


 VAR_4 &= 0x1f;
 VAR_5 &= 0x1f;


 VAR_6 &= 0xffff;


 VAR_8 |= (VAR_4 << 8);
 VAR_8 |= VAR_5;


 FUNC_2(VAR_7, VAR_2, VAR_6);


 FUNC_2(VAR_7, VAR_1, VAR_8);

 while (!(FUNC_1(VAR_7, VAR_1)
    & VAR_0))
  FUNC_0();

 return 0;
}
