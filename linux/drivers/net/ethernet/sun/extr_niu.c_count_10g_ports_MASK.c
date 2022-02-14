
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_probe_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct phy_probe_info*,int) ;

__attribute__((used)) static int FUNC_1(struct phy_probe_info *VAR_0, int *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = 0;
 *VAR_1 = 32;
 for (VAR_2 = 8; VAR_2 < 32; VAR_2++) {
  if (FUNC_0(VAR_0, VAR_2)) {
   if (!VAR_3)
    *VAR_1 = VAR_2;
   VAR_3++;
  }
 }

 return VAR_3;
}
