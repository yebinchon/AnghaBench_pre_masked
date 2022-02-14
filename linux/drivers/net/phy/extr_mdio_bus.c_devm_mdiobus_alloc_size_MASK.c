
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct mii_bus**) ;
 struct mii_bus** FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct mii_bus**) ;
 struct mii_bus* FUNC_3 (int) ;

struct mii_bus *FUNC_4(struct device *VAR_2, int VAR_3)
{
 struct mii_bus **VAR_4, *VAR_5;

 VAR_4 = FUNC_1(VAR_1, sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);


 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5) {
  *VAR_4 = VAR_5;
  FUNC_0(VAR_2, VAR_4);
 } else {
  FUNC_2(VAR_4);
 }

 return VAR_5;
}
