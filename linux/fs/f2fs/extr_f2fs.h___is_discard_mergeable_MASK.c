
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct discard_info {scalar_t__ lstart; unsigned int len; } ;



__attribute__((used)) static inline bool FUNC_0(struct discard_info *VAR_0,
   struct discard_info *VAR_1, unsigned int VAR_2)
{
 return (VAR_0->lstart + VAR_0->len == VAR_1->lstart) &&
  (VAR_0->len + VAR_1->len <= VAR_2);
}
