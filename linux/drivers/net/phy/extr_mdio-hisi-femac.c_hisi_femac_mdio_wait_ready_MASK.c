
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_femac_mdio_data {scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct hisi_femac_mdio_data *VAR_2)
{
 u32 VAR_3;

 return FUNC_0(VAR_2->membase + VAR_0,
      VAR_3, VAR_3 & VAR_1, 20, 10000);
}
