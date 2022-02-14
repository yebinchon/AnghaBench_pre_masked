
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_changeset {int range_changed; scalar_t__ bytes_changed; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct extent_changeset *VAR_0)
{
 if (!VAR_0)
  return;
 VAR_0->bytes_changed = 0;
 FUNC_0(&VAR_0->range_changed);
}
