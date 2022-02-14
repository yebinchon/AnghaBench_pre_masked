
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fm10k_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct fm10k_hw*,int ) ;

__attribute__((used)) static void FUNC_5(struct fm10k_hw *VAR_1, u32 *VAR_2, int VAR_3)
{
 int VAR_4 = 0, VAR_5;

 VAR_2[VAR_4++] = FUNC_4(VAR_1, FUNC_1(VAR_3));
 for (VAR_5 = 0; VAR_5 < 10; VAR_5++)
  VAR_2[VAR_4++] = FUNC_4(VAR_1, FUNC_3(VAR_3, VAR_5));
 for (VAR_5 = 0; VAR_5 < 32; VAR_5++)
  VAR_2[VAR_4++] = FUNC_4(VAR_1, FUNC_2(VAR_3, VAR_5));

 FUNC_0(VAR_4 != VAR_0);
}
