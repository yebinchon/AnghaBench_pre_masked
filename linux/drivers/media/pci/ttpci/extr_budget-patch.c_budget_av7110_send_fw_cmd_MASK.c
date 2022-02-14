
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct budget_patch {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,struct budget_patch*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct budget_patch*,int ,scalar_t__,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct budget_patch *VAR_2, u16* VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(2, "budget: %p\n", VAR_2);

 for (VAR_5 = 2; VAR_5 < VAR_4; VAR_5++)
 {
    FUNC_2(VAR_2, VAR_1, VAR_0 + 2*VAR_5, 2, (u32) VAR_3[VAR_5], 0,0);
    FUNC_1(5);
 }
 if (VAR_4)
    FUNC_2(VAR_2, VAR_1, VAR_0 + 2, 2, (u32) VAR_3[1], 0,0);
 else
    FUNC_2(VAR_2, VAR_1, VAR_0 + 2, 2, 0, 0,0);
 FUNC_1(5);
 FUNC_2(VAR_2, VAR_1, VAR_0, 2, (u32) VAR_3[0], 0,0);
 FUNC_1(5);
 return 0;
}
