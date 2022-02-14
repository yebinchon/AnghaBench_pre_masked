
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap_iterator {int advance_array; int count; unsigned long* stats_bitmap; scalar_t__ iterator; } ;


 int FUNC_0 (unsigned long*,int) ;
 int FUNC_1 (unsigned long*,int) ;

__attribute__((used)) static inline void FUNC_2(struct bitmap_iterator *VAR_0,
     unsigned long *VAR_1,
     int VAR_2)
{
 VAR_0->iterator = 0;
 VAR_0->advance_array = !FUNC_0(VAR_1, VAR_2);
 VAR_0->count = VAR_0->advance_array ? FUNC_1(VAR_1, VAR_2)
  : VAR_2;
 VAR_0->stats_bitmap = VAR_1;
}
