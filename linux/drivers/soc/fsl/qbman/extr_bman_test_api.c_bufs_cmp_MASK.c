
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bm_buffer {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bm_buffer const*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline int FUNC_1(const struct bm_buffer *VAR_4, const struct bm_buffer *VAR_5)
{
 if (VAR_3 == VAR_0 || VAR_3 == VAR_1) {
  if ((FUNC_0(VAR_4) & VAR_2) <
      (FUNC_0(VAR_5) & VAR_2))
   return -1;
  if ((FUNC_0(VAR_4) & VAR_2) >
      (FUNC_0(VAR_5) & VAR_2))
   return 1;
 } else {
  if (FUNC_0(VAR_4) < FUNC_0(VAR_5))
   return -1;
  if (FUNC_0(VAR_4) > FUNC_0(VAR_5))
   return 1;
 }

 return 0;
}
