
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct bgx {int dummy; } ;


 int FUNC_0 (struct bgx*,int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct bgx *VAR_0, u8 VAR_1, u64 VAR_2, u64 VAR_3, bool VAR_4)
{
 int VAR_5 = 100;
 u64 VAR_6;

 while (VAR_5) {
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2);
  if (VAR_4 && !(VAR_6 & VAR_3))
   return 0;
  if (!VAR_4 && (VAR_6 & VAR_3))
   return 0;
  FUNC_1(1000, 2000);
  VAR_5--;
 }
 return 1;
}
