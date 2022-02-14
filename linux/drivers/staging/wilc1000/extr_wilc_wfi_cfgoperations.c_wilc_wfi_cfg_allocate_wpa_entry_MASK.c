
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct wilc_priv {void** wilc_ptk; void** wilc_gtk; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct wilc_priv *VAR_2, u8 VAR_3)
{
 if (!VAR_2->wilc_gtk[VAR_3]) {
  VAR_2->wilc_gtk[VAR_3] = FUNC_0(sizeof(*VAR_2->wilc_gtk[VAR_3]),
           VAR_1);
  if (!VAR_2->wilc_gtk[VAR_3])
   return -VAR_0;
 }

 if (!VAR_2->wilc_ptk[VAR_3]) {
  VAR_2->wilc_ptk[VAR_3] = FUNC_0(sizeof(*VAR_2->wilc_ptk[VAR_3]),
           VAR_1);
  if (!VAR_2->wilc_ptk[VAR_3])
   return -VAR_0;
 }

 return 0;
}
