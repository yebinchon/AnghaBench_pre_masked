
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_mdio_data {scalar_t__ membase; } ;
struct mii_bus {struct sun4i_mdio_data* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_7, int VAR_8, int VAR_9)
{
 struct sun4i_mdio_data *VAR_10 = VAR_7->priv;
 unsigned long VAR_11;
 int VAR_12;


 FUNC_3((VAR_8 << 8) | VAR_9, VAR_10->membase + VAR_0);

 FUNC_3(0x1, VAR_10->membase + VAR_1);


 VAR_11 = VAR_6 + VAR_5;
 while (FUNC_1(VAR_10->membase + VAR_2) & 0x1) {
  if (FUNC_2(VAR_11))
   return -VAR_4;
  FUNC_0(1);
 }


 FUNC_3(0x0, VAR_10->membase + VAR_1);

 VAR_12 = FUNC_1(VAR_10->membase + VAR_3);

 return VAR_12;
}
