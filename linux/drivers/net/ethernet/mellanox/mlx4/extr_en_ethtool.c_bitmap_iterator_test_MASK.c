
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap_iterator {int stats_bitmap; int iterator; int advance_array; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct bitmap_iterator *VAR_0)
{
 return !VAR_0->advance_array ? 1 : FUNC_0(VAR_0->iterator, VAR_0->stats_bitmap);
}
