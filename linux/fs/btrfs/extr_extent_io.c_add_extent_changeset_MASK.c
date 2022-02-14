
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_state {unsigned int state; scalar_t__ end; scalar_t__ start; } ;
struct extent_changeset {int range_changed; int bytes_changed; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct extent_state *VAR_1, unsigned VAR_2,
     struct extent_changeset *VAR_3,
     int VAR_4)
{
 int VAR_5;

 if (!VAR_3)
  return 0;
 if (VAR_4 && (VAR_1->state & VAR_2) == VAR_2)
  return 0;
 if (!VAR_4 && (VAR_1->state & VAR_2) == 0)
  return 0;
 VAR_3->bytes_changed += VAR_1->end - VAR_1->start + 1;
 VAR_5 = FUNC_0(&VAR_3->range_changed, VAR_1->start, VAR_1->end,
   VAR_0);
 return VAR_5;
}
