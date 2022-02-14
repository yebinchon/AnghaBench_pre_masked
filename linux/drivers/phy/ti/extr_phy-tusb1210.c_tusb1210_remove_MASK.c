
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulpi {int dummy; } ;
struct tusb1210 {int phy; } ;


 struct tusb1210* FUNC_0 (struct ulpi*) ;
 int FUNC_1 (struct ulpi*,int ) ;

__attribute__((used)) static void FUNC_2(struct ulpi *VAR_0)
{
 struct tusb1210 *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, VAR_1->phy);
}
