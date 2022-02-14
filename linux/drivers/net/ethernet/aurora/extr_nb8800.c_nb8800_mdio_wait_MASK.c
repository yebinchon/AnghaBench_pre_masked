
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nb8800_priv {scalar_t__ base; } ;
struct mii_bus {struct nb8800_priv* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct mii_bus *VAR_2)
{
 struct nb8800_priv *VAR_3 = VAR_2->priv;
 u32 VAR_4;

 return FUNC_0(VAR_3->base + VAR_1,
      VAR_4, !(VAR_4 & VAR_0), 1, 1000);
}
