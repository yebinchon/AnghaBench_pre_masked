
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct bgx {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bgx*,int,scalar_t__) ;
 struct bgx* FUNC_1 (int,int) ;

u64 FUNC_2(int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct bgx *VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_5)
  return 0;

 return FUNC_0(VAR_5, VAR_3, VAR_0 + (VAR_4 * 8));
}
