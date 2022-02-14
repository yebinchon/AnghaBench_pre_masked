
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_bus {struct b44* priv; } ;
struct b44 {int dummy; } ;


 int FUNC_0 (struct b44*,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct mii_bus *VAR_0, int VAR_1, int VAR_2,
     u16 VAR_3)
{
 struct b44 *VAR_4 = VAR_0->priv;
 return FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
}
