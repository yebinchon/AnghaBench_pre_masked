
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mii_bus*,scalar_t__,int ) ;

__attribute__((used)) static const char *FUNC_2(struct mii_bus *VAR_5, int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_6 + FUNC_0(0), VAR_0);
 if (VAR_7 >= 0) {
  if (VAR_7 == VAR_1)
   return "Marvell 88E6060 (A0)";
  if (VAR_7 == VAR_3 ||
      VAR_7 == VAR_4)
   return "Marvell 88E6060 (B0)";
  if ((VAR_7 & VAR_2) == VAR_1)
   return "Marvell 88E6060";
 }

 return ((void*)0);
}
