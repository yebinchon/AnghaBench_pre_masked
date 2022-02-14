
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knav_queue_inst {TYPE_1__* range; } ;
struct TYPE_2__ {int flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline bool FUNC_0(struct knav_queue_inst *VAR_5,
      unsigned VAR_6)
{
 if ((VAR_6 == VAR_2) &&
     (VAR_5->range->flags & VAR_4)) {
  return 1;
 } else if ((VAR_6 == VAR_0) &&
  (VAR_5->range->flags & VAR_3)) {
  return 1;
 } else if ((VAR_6 == VAR_1) &&
  !(VAR_5->range->flags &
   (VAR_3 | VAR_4))) {
  return 1;
 }
 return 0;
}
