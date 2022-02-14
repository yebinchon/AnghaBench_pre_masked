
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_bus {struct ag71xx* priv; } ;
struct ag71xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ag71xx*,int*) ;
 int FUNC_1 (struct ag71xx*,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_2)
{
 struct ag71xx *VAR_3 = VAR_2->priv;
 int VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_0(VAR_3, &VAR_5);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_3, VAR_0, VAR_5 | VAR_1);
 FUNC_2(100, 200);

 FUNC_1(VAR_3, VAR_0, VAR_5);
 FUNC_2(100, 200);

 return 0;
}
