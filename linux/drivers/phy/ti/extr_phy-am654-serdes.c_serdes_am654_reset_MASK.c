
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdes_am654 {int por_en; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int) ;
 struct serdes_am654* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_0)
{
 struct serdes_am654 *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->por_en, 0x1);
 if (VAR_2)
  return VAR_2;

 FUNC_0(1);

 VAR_2 = FUNC_2(VAR_1->por_en, 0x0);
 if (VAR_2)
  return VAR_2;

 return 0;
}
