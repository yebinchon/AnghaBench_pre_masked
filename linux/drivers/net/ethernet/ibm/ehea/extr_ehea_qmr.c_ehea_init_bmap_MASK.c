
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehea_top_bmap {int dummy; } ;
struct ehea_bmap {scalar_t__* top; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int,int ) ;

__attribute__((used)) static inline int FUNC_2(struct ehea_bmap *VAR_2, int VAR_3, int VAR_4)
{
 if (!VAR_2->top[VAR_3]) {
  VAR_2->top[VAR_3] =
   FUNC_1(sizeof(struct ehea_top_bmap), VAR_1);
  if (!VAR_2->top[VAR_3])
   return -VAR_0;
 }
 return FUNC_0(VAR_2->top[VAR_3], VAR_4);
}
