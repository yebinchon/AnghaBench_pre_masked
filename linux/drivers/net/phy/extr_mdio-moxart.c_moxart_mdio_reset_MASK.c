
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mii_bus*,int,int ) ;
 scalar_t__ FUNC_1 (struct mii_bus*,int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = FUNC_0(VAR_3, VAR_5, VAR_1);
  if (VAR_4 < 0)
   continue;

  VAR_4 |= VAR_0;
  if (FUNC_1(VAR_3, VAR_5, VAR_1, VAR_4) < 0)
   continue;
 }

 return 0;
}
