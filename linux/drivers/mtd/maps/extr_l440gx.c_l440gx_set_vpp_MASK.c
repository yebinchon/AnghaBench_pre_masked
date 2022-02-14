
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct map_info *VAR_3, int VAR_4)
{
 unsigned long VAR_5;

 FUNC_2(&VAR_1, VAR_5);
 if (VAR_4) {
  if (++VAR_2 == 1)
   FUNC_1(FUNC_0(VAR_0) | 1, VAR_0);
 } else {
  if (--VAR_2 == 0)
   FUNC_1(FUNC_0(VAR_0) & ~1, VAR_0);
 }
 FUNC_3(&VAR_1, VAR_5);
}
